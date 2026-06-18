# 📘 Manual de Ingeniería y Ensamblaje : Trivilyn 3.0
### **TeamRobóticaCRV | World Robot Olympiad - Future Engineers 2026**

![Version](https://img.shields.io/badge/Version-3.0.4--Final-blue?style=for-the-badge) ![Build](https://img.shields.io/badge/Build-FDM_Optimized-orange?style=for-the-badge) ![Engineering](https://img.shields.io/badge/Level-Advanced-red?style=for-the-badge)

---

## 🏛️ 1. Filosofía de Diseño y Materiales
Trivilyn 3.0 ha sido diseñado bajo el paradigma de **Arquitectura de Capas Desacopladas**. El chasis no es solo un soporte, es un componente activo de la dinámica vehicular.

### 🔬 Especificaciones del Polímero
*   **Material:** PETG Industrial (Polietileno de Tereftalato Glicolado).
*   **Propiedades:** Alta tenacidad, ductilidad y resistencia térmica (Tg ≈ 80°C).
*   **Manufactura:** Impresión FDM con boquilla de 0.4mm, altura de capa de 0.2mm y 4 paredes perimetrales para maximizar la rigidez torsional.

---

## ⚙️ 2. Fase I: Planta Propulsora e Integración de Potencia
La base inferior gestiona las cargas mecánicas más altas y la transferencia de torque.

### 2.1 Bloque Motor y Transmisión Primaria
El motor **TurboSnake** debe estar perfectamente coaxial con la caja reductora para evitar la pérdida de eficiencia por fricción.

| Componente | Procedimiento Técnico |
| :--- | :--- |
| ![Base Motor](Team-Photos/base_motor_ind.png) | **Montaje de Baja Tolerancia:** Alinee la base del motor debajo de la plataforma principal. Inserte 4 tornillos M3 con arandelas de presión para mitigar el aflojamiento por vibración. |

> [!CAUTION]
> **PRECAUCIÓN DE CALOR:** El motor puede alcanzar temperaturas de 60°C. Asegúrese de que el flujo de aire sea constante. El uso de PETG es obligatorio aquí; el PLA se deformaría bajo estas condiciones.

### 2.2 Sistema de Dirección Digital (Steer-by-Wire)
Utilizamos un servo **HobbyPark de 35kg** para garantizar que el ángulo de dirección se mantenga bloqueado incluso bajo fuerzas centrífugas extremas.

| Actuador de Dirección | Integración |
| :--- | :--- |
| ![Servo](Team-Photos/servo_ind.png) | **Eliminación de Backlash:** Inserte el servo en el encastre frontal. Si existe un juego mayor a 0.1mm, utilice una capa de cinta Kapton para asegurar un ajuste por interferencia. |

---

## ⚡ 3. Fase II: Etapa de Potencia y Gestión "Quick-Change"
En competencia, la eficiencia en pits es tan importante como la velocidad en pista.

### 3.1 Riel en Cola de Milano para Baterías
Este sistema permite el cambio de celdas en menos de 8 segundos sin desarmar la estructura lógica.

| Driver L298N | Riel Quick-Change |
| :--- | :--- |
| ![Driver](Team-Photos/driver_ind.png) | ![Riel](Team-Photos/riel_macho.png) |

> [!IMPORTANT]
> **TIP DE ADHESIÓN:** Para fijar el riel macho, utilice **Adhesivo Epóxico Estructural**. Los pegamentos de cianoacrilato ("superglue") cristalizan con las vibraciones del motor y pueden fallar catastróficamente en carrera.

---

## 📡 4. Fase III: Segundo Piso (Percepción y Aislamiento)
Este nivel separa las señales de alta corriente de los buses de datos sensibles.

### 4.1 Espaciadores y Gestión de la Matriz Sensorial
Los espaciadores no solo elevan el chasis, actúan como filtros mecánicos para las vibraciones.

| Elevación Estructural | Ajuste de Sensores |
| :--- | :--- |
| ![Espaciadores](Team-Photos/espaciadores.png) | ![Corredera Sensor](Team-Photos/corredera_sensor.png) |

> [!TIP]
> **AJUSTE DE FOV (Field of View):** El sistema de corredera hembra para los sensores HC-SR04 debe calibrarse físicamente para que el haz ultrasónico incida en el centro de las paredes de la pista, evitando rebotes en el suelo o el techo.

| Montaje de Percepción | Bancos de Energía |
| :--- | :--- |
| ![Sensor Montado](Team-Photos/sensor_montado.png) | ![Baterias](Team-Photos/baterias_piso2.png) |

---

## 🧠 5. Fase IV: Tercer Piso (Unidad de Procesamiento Central)
Ubicación estratégica del Arduino Mega 2560 para maximizar el ancho de banda de comunicación con la HuskyLens.

### 5.1 Instalación del Arduino Mega
El "Cerebro" se coloca en el punto más alto para evitar el ruido electromagnético inducido (EMI) por las escobillas del motor de tracción.

| Chasis Superior | Integración Lógica |
| :--- | :--- |
| ![Piso 3](Team-Photos/tercer_piso.png) | ![Arduino](Team-Photos/arduino_montado.png) |

> [!IMPORTANT]
> **PRECAUCIÓN ELÉCTRICA:** Utilice tornillos de nylon o separadores aislantes. Un corto circuito entre el chasis (si tiene residuos de humedad) y la placa Arduino podría destruir los puertos UART.

---

## 🏎️ 6. Fase V: Geometría de Dirección y Tracción Final
Aquí es donde la teoría cinemática se convierte en movimiento.

### 6.1 Geometría de Ackermann y Varillaje
El acoplamiento de la palanca del servo con la base de dirección define el radio de giro de 31.56 cm.

| Palanca y Base | Acoplamiento de Dirección |
| :--- | :--- |
| ![Palanca](Team-Photos/palanca_servo.png) | ![Direccion Montada](Team-Photos/direccion_final.png) |

> [!TIP]
> **CONSEJO DE CALIBRACIÓN:** Antes de atornillar el brazo del servo, encienda el robot y envíe la señal de `94 grados` (neutro). Esto asegura que el centro mecánico coincida con el centro lógico.

### 6.2 Soporte de Ejes y Diferencial Posterior
El diferencial permite que las ruedas traseras giren a diferentes velocidades, evitando el subviraje en curvas cerradas.

| Soporte de Eje | Diferencial y Tracción |
| :--- | :--- |
| ![Soporte](Team-Photos/soporte_eje.png) | ![Diferencial](Team-Photos/diferencial_eje.png) |

---

## 🧪 7. Protocolo de Lubricación y Mantenimiento Químico
La fricción es el enemigo de la autonomía.

> [!CAUTION]
> **ADVERTENCIA QUÍMICA (ESC):** **¡PROHIBIDO EL USO DE GRASA DE LITIO O DERIVADOS DEL PETRÓLEO!** Estos químicos penetran las capas del PETG y causan Agrietamiento por Estrés Ambiental (ESC), destruyendo las piezas impresas.
> 
> **SOLUCIÓN:** Utilice exclusivamente **Vaselina Neutra** o lubricantes secos a base de PTFE (Teflón).

1.  Aplique una capa delgada de vaselina en el diferencial.
2.  Lubrique el tubo transversal de la dirección delantera para suavizar el retorno al centro.

---

## 🏁 8. Vista Final y Comprobación de Sistemas
Una vez finalizado, el Trivilyn 3.0 debería verse como una unidad monolítica y robusta.

![Trivilyn Final Lateral](Team-Photos/trivilyn_final_lat.png)
![Trivilyn Final Top](Team-Photos/trivilyn_final_top.png)

### ✅ Check-list de Verificación Final
- [ ] **Continuidad de GND:** ¿Hay una tierra común unificada?
- [ ] **Torque de Tornillos:** ¿Están todos los tornillos M3 apretados?
- [ ] **Despeje de Cables:** ¿Los cables están alejados de los engranajes del motor?
- [ ] **Alineación Visual:** ¿Las ruedas están paralelas en estado neutro?

 ## 🔗 Recursos y Descargas
      
*   [🛠️ Descargar Archivos .STL para Impresión 3D](./Archivos%20CAD)
*   [💾 Firmware de Navegación Abierta](./Src)
*   [📖 Documento de Estrategia de Control](./README.md)

---
**Documentación generada por ROBOTEAMCRV. Todos los derechos reservados 2026.**
  
