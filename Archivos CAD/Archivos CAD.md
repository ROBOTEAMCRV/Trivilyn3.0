# Modelado 3D y Componentes CAD: Chasis Trivilyn 3.0

En esta sección se encuentran almacenados todos los archivos de modelado tridimensional (formatos `.STL`) desarrollados a medida para la estructura modular de **Trivilyn 3.0**.

A diferencia de los chasis comerciales genéricos, toda la estructura fue diseñada desde cero en nuestro taller bajo una filosofía modular de tres niveles. Esto optimiza la distribución de peso, garantiza la resistencia ante impactos mecánicos y permite un acceso rápido a los componentes durante las asistencias en boxes.

---

## Parámetros de Fabricación en Impresión 3D

Para asegurar que los componentes soporten las tensiones dinámicas y los impactos inevitables contra los límites de la pista, las piezas fueron validadas bajo los siguientes estándares de manufactura:

* **Material Estructural:** **PETG (Polietileno Tereftalato Glicol).** Se seleccionó debido a su excelente resistencia al impacto y flexibilidad controlada, evitando la cristalización y fractura común en materiales como el PLA.
* **Altura de Capa:** Entre `0.20 mm` y `0.24 mm` (Equilibrio óptimo entre tiempo de impresión y adherencia intercapas).
* **Densidad de Relleno (Infill):** `40%` utilizando un patrón **Giroide** o **Rejilla**, los cuales ofrecen la mejor resistencia a la torsión.
* **Perímetros de Pared:** Mínimo de `4 capas`. Esta configuración garantiza que las zonas sometidas a esfuerzo por tornillería no cedan mecánicamente.

---

## Desglose de Componentes Estructurales

Los archivos están organizados según la arquitectura de tres niveles y los sistemas de soporte del robot:

### Estructura Principal
* **`Primer Piso.stl`:** Base inferior del robot. Actúa como la plataforma de potencia donde se anclan los sistemas de tracción y dirección, manteniendo el centro de gravedad lo más bajo posible.
* **`Segundo Piso.stl`:** Nivel intermedio del chasis. Aloja los sistemas de control y regulación de voltaje.
* **`Tercer piso.stl`:** Nivel superior del chasis. Utilizado para el aislamiento de componentes específicos y para dar rigidez estructural a la torre del robot.

### Sistema de Transmisión y Dirección
* **`Soporte Tren Delantero.stl`:** Bloque de montaje rígido para el sistema de dirección, diseñado para absorber las fuerzas laterales del servo sin transmitir flexiones al chasis.
* **`Soporte Caja de Engranajes.stl`:** Aloja y alinea de manera precisa el motor de tracción y la reducción mecánica, garantizando una transferencia de torque suave hacia el eje trasero.

### Mecanismo de Ajuste de Visión
* **`Riel Hembra Cola de milano.stl`:** Pieza clave del sistema de calibración física. Desliza sobre el riel macho del primer piso para realizar los cambios de las celdas 18650.

### Monturas de Percepción 
* **`Base sensor frontal.stl`:** Soporte dedicado para el sensor ultrasónico central, posicionándolo a una altura geométrica de **5.5 cm respecto al suelo**.
* **`Base sensor lateral.stl`:** Monturas para los sensores ultrasónicos izquierdo y derecho, orientados estratégicamente para el control de centrado y paralelismo respecto a las paredes en las rectas de la ronda libre.

---

## Directrices de Ensamble y Mantenimiento Técnico

1. **Estandarización de Tornillería:** Todo el ensamblaje emplea tornillos milimétricos M4 con tuercas de seguridad (inserto de nailon) para evitar desajustes provocados por las vibraciones en pista.
2. **Ajuste del Mecanismo Cola de Milano:** Se recomienda verificar la tolerancia del deslizamiento entre el riel hembra y el macho del segundo piso. Si es necesario, realizar un asentamiento suave con lija fina para asegurar un desplazamiento firme pero sin juego lateral.
3. **Mantenimiento Modular:** Al estar dividido en tres pisos independientes conectados por tornillería, el chasis permite separar los niveles rápidamente para sustituir componentes electrónicos o mecánicos dañados a contrarreloj en boxes.
