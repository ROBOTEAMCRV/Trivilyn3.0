# INSTALACIÓN — Trivilyn 3.1

Guía para dejar un ESP32 nuevo en el mismo estado funcional que el ESP32 de Trivilyn 3.1, desde cero.

Este documento cubre exclusivamente la puesta en marcha del firmware y la electrónica de control. Para el ensamblaje mecánico del chasis (impresión 3D, tolerancias, torque de tornillería), consultar el [Manual de Ensamblaje](./Assembly%20Manual/) del repositorio.

## 1. Requisitos de Hardware

- ESP32 DevKit de 38 pines (módulo ESP32-WROOM-32, chip puente CP2102)
- Cable USB tipo C
- Cámara HuskyLens (configurada en modo Color Recognition)
- 3x sensores ultrasónicos HC-SR04 (frontal, izquierdo, derecho)
- Sensor de Tiempo de Vuelo matricial VL53L5CX (8x8 zonas)
- Servomotor HobbyPark 35kg (HD3523MG)
- Driver de motor L298N
- Módulo regulador Buck LM2596 (Step-Down a 5V)
- 2x módulos Step-Up (6.5V para dirección, 10V para tracción)

## 2. Configuración del IDE (Arduino IDE)

1. Instalar [Arduino IDE](https://www.arduino.cc/en/software) (versión 2.x recomendada).
2. Agregar el soporte de placas ESP32:
   - `Archivo > Preferencias > URLs Adicionales de Gestor de Tarjetas`:
     `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
3. `Herramientas > Placa > Gestor de Tarjetas` → buscar "esp32" → instalar el paquete de Espressif Systems.
4. Seleccionar la placa: `Herramientas > Placa > ESP32 Dev Module`.
5. Configuración recomendada de puerto:
   - Upload Speed: `115200`
   - Flash Frequency: `80MHz`
   - Partition Scheme: `Default`

## 3. Librerías Requeridas

Instalar desde `Herramientas > Administrar Bibliotecas`, usando siempre la versión más reciente disponible salvo que el equipo detecte una incompatibilidad puntual:

| Librería | Uso |
|---|---|
| `ESP32Servo` | Control PWM del servomotor de dirección |
| `NewPing` | Lectura no bloqueante de los sensores ultrasónicos HC-SR04 |
| `HUSKYLENS` (por DFRobot) | Comunicación con la cámara vía Hardware Serial |
| `SparkFun_VL53L5CX_Arduino_Library` (o equivalente del fabricante) | Lectura de la matriz 8x8 de zonas del sensor ToF |

> **Nota de compatibilidad conocida:** en una versión previa del proyecto se corrigió un error de compilación en la librería HuskyLens (`return &send_buffer` → `return send_buffer`) para compatibilidad con ESP32 core 3.3.7. Si al compilar aparece un error de tipo de puntero en `HuskyLensProtocolCore.c`, revisar ese mismo punto según la versión del core instalada.

## 4. Verificación Eléctrica Previa (antes de energizar por primera vez)

**Hacer esto antes de conectar el ESP32, los sensores, el servo o el motor** — evita daños por sobretensión:

1. Con las baterías conectadas pero **sin** el ESP32 ni los actuadores/sensores enchufados, medir con multímetro:
   - Salida del regulador Buck LM2596: debe marcar exactamente **5.00V DC**. Ajustar con el potenciómetro multivueltas del módulo si es necesario.
   - Salida del Step-Up de dirección: debe marcar **6.5V**.
   - Salida del Step-Up de tracción: debe marcar **10V**.
2. Confirmar continuidad de tierra (GND) entre los tres bancos de batería y el ESP32 — deben compartir un único nodo de referencia (Star Grounding).
3. Solo después de validar estos puntos, conectar el ESP32, los sensores y los actuadores.

> **Advertencia:** los Step-Up son topología estrictamente elevadora — el voltaje de salida configurado debe ser siempre mayor al de entrada. Un Step-Up mal calibrado por debajo del voltaje de entrada puede provocar sobrecalentamiento y falla catastrófica del módulo.

## 5. Configuración de la Cámara HuskyLens (previo al primer arranque)

En el menú interno de la HuskyLens:

1. `General Settings > Protocol Type > Serial 9600` (**obligatorio** — el modo Auto-Detect introduce retardos de sincronización que rompen `huskylens.begin()`).
2. Entrenar las firmas de color rojo (IDs 1, 2, 3) y verde (IDs 4, 5, 6) con el algoritmo Color Recognition, apuntando a los postes de calibración a una distancia focal de 20-40 cm.
3. Ejecutar el bloqueo de exposición y balance de blancos (AE/AWB Lock) bajo las condiciones de luz reales del evento antes de guardar la calibración.
4. Guardar la calibración en la tarjeta SD (`Save to SD Card`) para no repetir el entrenamiento si el sistema se reinicia.

## 6. Configuración del Sensor VL53L5CX

1. Conectar el sensor al bus I2C secundario del ESP32 (ver pinout en el paso 7).
2. Inicializar la velocidad del bus I2C a **400 kHz (Fast Mode)** o **1 MHz (Fast Mode Plus)** en el firmware, para evitar cuellos de botella al transmitir la matriz completa de 64 zonas.
3. Verificar que la cubierta protectora del sensor esté libre de polvo, grasa o huellas — la refracción del haz láser por suciedad genera lecturas erróneas de distancia.
4. Confirmar en el firmware que solo se está leyendo la **fila inferior de la matriz** (índices 56 a 63) y que el umbral `UMBRAL_FRONTAL` está fijado en **350 mm**.

## 7. Verificación de Cableado (Pinout)

| Componente | Pin ESP32 (GPIO) | Tipo de Señal |
|---|---|---|
| Servo de dirección | GPIO32 | Salida PWM |
| Driver de motor — ENA | GPIO13 | Salida PWM |
| Driver de motor — IN1 | GPIO14 | Salida digital |
| Driver de motor — IN2 | GPIO27 | Salida digital |
| Ultrasónico frontal — Trigger | GPIO19 | Salida digital |
| Ultrasónico frontal — Echo | GPIO21 | Entrada digital |
| Ultrasónico izquierdo — Trigger | GPIO17 | Salida digital |
| Ultrasónico izquierdo — Echo | GPIO18 | Entrada digital |
| Ultrasónico derecho — Trigger | GPIO22 | Salida digital |
| Ultrasónico derecho — Echo | GPIO23 | Entrada digital |
| HuskyLens — RX | GPIO16 (Serial1) | UART |
| HuskyLens — TX | GPIO4 (Serial1) | UART |
| VL53L5CX — SDA | GPIO25 | I2C |
| VL53L5CX — SCL | GPIO26 | I2C |

Puntos críticos a verificar con multímetro antes del primer arranque:
- HuskyLens en `Serial1` remapeado a GPIO16(RX)/GPIO4(TX) — **no** en los pines UART1 por defecto del ESP32.
- VL53L5CX en el bus I2C secundario (GPIO25/26), separado del bus principal para no saturar el ancho de banda durante la transmisión de la matriz 8x8.

## 8. Flasheo y Primera Prueba

1. Conectar el ESP32 por USB-C.
2. Abrir el sketch principal del repositorio en `Src/`.
3. Compilar y subir (`Ctrl+U`).
   - Si el IDE no logra conectar (`Failed to connect to ESP32`), mantener presionado el botón físico **BOOT** de la placa justo cuando empiece la subida, y soltarlo apenas aparezcan los puntos de progreso (`Connecting....`) en la consola.
4. Abrir el Monitor Serie a `115200 baudios`.
5. Verificar en consola:
   - Lectura continua del sensor ultrasónico frontal (`Ping:`).
   - Que no se repita el mensaje `Begin failed!` de la HuskyLens.
   - Que el firmware reporte lecturas válidas de la matriz VL53L5CX (no ceros ni timeouts constantes).

## 9. Calibración Post-Instalación

- Verificar el punto neutro del servo (`centro`, actualmente calibrado en el firmware) contra la alineación física real de las ruedas — ajustar el valor si el chasis no avanza en línea recta.
- Confirmar que `carSpeed`, `carSpeedColor` estén calibrados para el voltaje real de las baterías el día de la prueba (el rendimiento varía con el estado de carga).
- Validar en pista el umbral de 350 mm del VL53L5CX y el rango de disparo del sensor ultrasónico frontal (42 cm a 52 cm) contra la geometría real del circuito de práctica.

## 10. Solución de Problemas Comunes

| Síntoma | Causa Probable | Solución |
|---|---|---|
| El puerto no aparece / falla la subida del código (`Failed to connect to ESP32`) | El ESP32 no entró en modo de descarga (bootloader) automáticamente | Mantener presionado el botón físico **BOOT** de la placa justo cuando el IDE empieza a compilar/subir, y soltarlo apenas aparezcan los puntos de progreso en la consola |
| `Begin failed!` repetido de la HuskyLens | Protocol Type mal configurado o cable RX/TX invertido | Revisar `Serial 9600` en el menú de la cámara y confirmar GPIO16(RX)/GPIO4(TX) |
| El servo o el motor no responden aunque el código sube bien | Step-Up mal calibrado o GND no unificado | Repetir la verificación eléctrica del paso 4 |
| Lecturas erráticas o en cero del VL53L5CX | Velocidad de bus I2C insuficiente, o cubierta del sensor sucia | Confirmar 400 kHz/1 MHz en el bus, limpiar la cubierta óptica |
| El robot esquiva bien un pilar pero desplaza el círculo verde delimitador | Limitación conocida: maniobras de esquiva por `delay()` bloqueante no reevalúan la posición del pilar a mitad de giro | Ver sección "Limitación Conocida" del README principal — mejora identificada, no resuelta aún |

---
