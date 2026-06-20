# Engineering Document/Trivilyn3.0 

Nuestro prototipo es un vehículo autónomo diseñado para la categoría futuros ingenieros temporada 2026 WRO. En el que el equipo combina sus conocimientos y destreza en la robótica(Mecánica, Electrónica, programación y automatización)  para la elaboración de (Trivilyn) y lograr el máximo desempeño en la categoría.

<img width="1280" height="518" alt="image" src="https://github.com/user-attachments/assets/348aa223-d3f9-4a99-beae-81b8cf399c66" />


# ÍNDICE

## 📌Tabla de Contenido

1. [Engineering Document](#engineering-documenttrivilyn30)

2. [Miembros de TEAMROBOTICACRV](#miembros-de-teamroboticacrv)

   * [Dennis Adrian Silva Riera](#dennis-adrian-silva-riera)

   * [Gianni Marcello Martucci Jerez](#gianni-marcello-martucci-jerez)

   * [Juan Andres Graterol Teran](#juan-andres-graterol-teran)

   * [Tutor - Luis Eduardo Paredes](#tutor---luis-eduardo-paredes)
  
   * [Trivilyn 3.0](#trivilyn30)

3. [Fotos de Trivilyn 3.0](#trivilyn-360-photos)

4. [Movilidad y Diseño Mecánico](#-movilidad-y-diseño-mecánico)

   * [Tracción](#tracción)
  
   * [Calculo de Transmición](#cálculo-analítico-de-la-relación-de-transmisión)
   
   * [Estudio Dinámico: Torque Necesario, Tracción y Distribución de Fuerzas](#estudio-dinámico-torque-necesario-tracción-y-distribución-de-fuerzas)
  
   *  [Dirección](#dirección)
  
   * [Base Inferior](#primer-piso) 

   * [Base Cetral](#segundo-piso)

   * [Base Superior](#tercer-piso)
   
5.[Arquitectura de Potencia y Sensores](#-arquitectura-de-potencia-y-sensores)

   * [Subsistema Electrónico](#1-subsistema-electrónico)

   * [Distribución Geométrica y Calibración de Sensores](#-distribución-geométrica-y-calibración-de-sensores)

   * [Sustentación de Valores Físicos en Pista](#-sustentación-de-valores-físicos-en-pista)

6. [Arquitectura de Software y Estrategia de Competencia](#arquitectura-software-y-estratrgia)

   * [Resumen del Proyecto](#-resumen-del-proyecto)

   * [Ronda Abierta](#ronda-abierta)
  
     * [Diagrama de Flujo](#-diagrama-de-flujo-open-challenge)

     * <a href="#maquina-estados"> Arquitectura del Software </a>

     * [Análisis de Rendimiento](#análisis-de-rendimiento-optimización-de-tiempo-vs-fiabilidad)

   * [Ronda Cerrada](#ronda-cerrada)
  
     * [Diagrama de Flujo](#-diagrama-de-flujo-closed-challenge)
     
7. [Pensamiento Sistémico y Decisiones de Ingeniería](#pensamiento-sistémico-y-decisiones-de-ingeniería)

 - [Temporada 2024 (Rexbot 1.0)](#temporada-2024-rexbot10)

 - [Temporada 2025 (Rexbot 2.0)](#temporada-2025-rexbot20)

 - [Temporada 2026 Trivilyn3.0](#temporada-2026-trivilyn30)
     
   * [ Paradoja de la Masa del Sensor y la Inercia Rotacional)](#a-la-paradoja-de-la-masa-del-sensor-y-la-inercia-rotacional-i_z)

   * [Gestión de Fricción](#2-gestión-de-fricción-termodinámica-y-compatibilidad-química-de-materiales)

   * [Adaptabilidad Sensorial](#3-adaptabilidad-sensorial-ante-el-entorno-de-la-pista)

   * [Sistema de Corredera de Baterías](#4-sistema-de-corredera-de-baterías-y-optimización-cinemática)

   * [Evolución del Sistema de Interconexión](#5-evolución-del-sistema-de-interconexión-y-blindaje-de-señales-emi)
       
8. [Desafíos Técnicos, Limitaciones y Soluciones en el Desarrollo](#desafíos-técnicos-limitaciones-y-soluciones-en-el-desarrollo)


    ## 📂 Estructura del Repositorio (Repository Directory Map)

Para agilizar la evaluación de los diferentes componentes del proyecto, puedes acceder directamente a los recursos y subcarpetas principales a través de los siguientes accesos directos:

* [Modelos Tridimensionales (Archivos CAD)](./Archivos%20CAD/)
  *Anclaje al repositorio central con los planos vectoriales nativos y archivos laminados segregados por pisos.*

* [Manual de Ensamblaje (Assembly Manual)](./Assembly_Manual/)
  *Guía paso a paso con esquemas mecánicos para la construcción y calibración del chasis modular.*

* [Planos y Circuitos (Schematics)](./Schematics/)
  *Acceso directo a la ingeniería electrónica del robot, incluyendo los diagramas de bloques, mapeo de pines (Pinout) y la red de distribución de potencia.*

* [Código Fuente (Src)](./src/)
  *Firmware del vehículo autónomo, algoritmos Failsafe de filtrado y control de la máquina de estados.*

* [Galería de Identidad (Team-Photos)](./Team-Photos/)
  *Registro fotográfico oficial del equipo, fases de codiseño en el laboratorio y preparación.*

* [Renderizado Interactivo (Trivilyn 360)](./Trivilyn_360/)
  *Modelos tridimensionales optimizados para visualización periférica completa y verificación geométrica.*

* [Desafíos en Pista (Videos)](./Videos/)
  *Registro audiovisual oficial de Trivilyn 3.0 ejecutando con éxito los desafíos de la competencia, demostrando en tiempo real la evasión de obstáculos y la estabilidad de los algoritmos de control.*
  ---
# MIEMBROS DE TEAMROBOTICACRV

## 👤Dennis Adrian Silva Riera

### Rol: Ingeniero Líder de Hardware e Integrador de Sistemas.

Diseño Mecánico: Se encarga del modelado en 3D de las piezas y el chasis, asegurando que todo sea ligero y funcional.

Electrónica: Responsable de conectar todos los componentes, la gestión de la batería y la ubicación estratégica de los sensores.

Gestión Digital: Administra el repositorio de GitHub y organiza toda la documentación técnica del proyecto.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/140671eb-8c9f-4bf1-bf3d-6eb409680a4d" />

## 👤Gianni Marcello Martucci Jerez

### Rol: Programador y Desarrollador de Lógica de Navegación.

Algoritmos de Navegación: Desarrolla la lógica que permite al robot detectar obstáculos y decidir hacia dónde moverse de forma autónoma.

Arquitectura del Código: Organiza la estructura del programa para que sea eficiente y responda rápido ante cualquier cambio en la pista.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/1bcc44ed-ea78-4fa7-93d5-581ea6aad23a" />


## 👤Juan Andres Graterol Teran

### Rol: Especialista en Ensamblaje y Asistente de Operaciones.

Montaje Físico: Se encarga del armado manual del prototipo, asegurando que cada tornillo y pieza esté en su lugar.

Apoyo Logístico: Colabora en la preparación de las pistas de prueba, recolección de datos y mantenimiento preventivo del robot.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/51b3d7c0-b54a-4267-ae77-e930a64322b0" />



## 👤Tutor - Luis Eduardo Paredes

### Rol: Orientar al equipo en la planificación del proyecto y el cumplimiento de los plazos de entrega.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/12b81259-f88b-43d7-be25-c19f183fe3eb" />

 ##  👤Trivilyn3.0 

 ### Rol: Vehículo Autónomo de Competición - Plataforma Oficial 2026.

<img width="810" height="885" alt="image" src="https://github.com/user-attachments/assets/b6bfbca7-b9b6-4e8b-a535-d11c9ce3f4d7" />
    
  * **Estatura y Peso:** Estructura modular optimizada en tres niveles con una masa total controlada de 1250 gramos.
    
  * **Habilidades de Percepción:** Visión artificial acelerada por IA con HuskyLens para reconocimiento colorimétrico y una red unificada de sensores ultrasónicos HC-SR04 para mapeo perimetral en tiempo real.
    
  * **Capacidad Motriz:** Dirección de alta agilidad basada en un sistema Steer-by-Wire (SbW) acoplado a un servo HobbyPark de 35 kg con giros de 40°, impulsado por un motor DC de alta revolución con caja reductora personalizada.
    
  * **Dieta Energética:** Sistema de alimentación triple e independiente basado en celdas 18650.


# Trivilyn 360 Photos

Para evidenciar la simetría, la distribución modular en tres niveles y el acabado de la manufactura aditiva del vehículo, se presenta la galería oficial en un formato de matriz técnica:

| 📸 Perfil de Inspección | 🖼️ Registro Visual (Render / Captura) |
| :--- | :--- |
| **Vista Superior**<br>• Permite evaluar la distribución de los componentes en el segundo piso y la alineación central. | <img width="400" alt="Perfil Superior" src="https://github.com/user-attachments/assets/5ea353f3-4b35-4c3e-9bb6-72a543cf638f" /> |
| **Vista Lateral Derecha**<br>• Muestra el despeje sobre el suelo (ground clearance) y el acople del tren motriz. | <img width="400" alt="Perfil Derecho" src="https://github.com/user-attachments/assets/5c40a96a-0570-45fe-94e5-adccd0af3df8" /> |
| **Vista Lateral Izquierda**<br>• Expone el acceso al sistema perimetral de alimentación y cableado lógico. | <img width="400" alt="Perfil Izquierdo" src="https://github.com/user-attachments/assets/cbf40dd8-de2d-4060-8c28-fb0e8f4901fa" /> |
| **Vista Frontal**<br>• Muestra la orientación de la HuskyLens, el soporte de sensores y los LEDs de contraste. | <img width="400" alt="Perfil Delantero" src="https://github.com/user-attachments/assets/d7749a1f-4eab-4707-9e4a-3e9ab4a34e1b" /> |
| **Vista Trasera**<br>• Evidencia el anclaje del motor principal y la salida estructurada de las líneas de potencia. | <img width="400" alt="Perfil Trasero" src="https://github.com/user-attachments/assets/659f38c5-4fa7-4f97-a464-c7725a822623" /> |
| **Vista Inferior (Chasis)**<br>• Expone la geometría del primer piso y el área libre para evitar la fricción con la pista. | <img width="400" alt="Perfil Inferior" src="https://github.com/user-attachments/assets/4d58e3ae-8c33-4a9e-904c-3e7a4e68819d" /> |


---


# 🔩 Movilidad y Diseño Mecánico

La arquitectura mecánica de Trivilyn3.0 representa la evolución definitiva del equipo hacia la optimización estructural y la eficiencia dinámica en la World Robot Olympiad (WRO) 2026. Tras analizar las limitaciones de agilidad, exceso de dimensiones y holguras mecánicas presentes en las plataformas previas Rexbot 1.25 y Rexbot 1.5, adoptamos un enfoque de diseño disruptivo basado en la premisa "Adaptarse para ganar".

---


El chasis de Trivilyn3.0 ha sido desarrollado desde cero utilizando un sistema híbrido de manufactura aditiva con polímeros avanzados (PETG y PLA), configurado en una estructura modular de tres niveles que optimiza al máximo el espacio y el centro de masa del vehículo. Cada pieza ha sido calculada para absorber las vibraciones mecánicas de la alta competencia, garantizando la rigidez necesaria para que los algoritmos de visión artificial operen con total precisión.

---


Este capítulo desglosa los principios físicos, cinemáticos y de distribución de fuerzas que gobiernan la movilidad de Trivilyn3.0, demostrando cómo se logra un control milimétrico del vehículo mediante un sistema de dirección Steer-by-Wire (SbW), una caja reductora a medida de alta eficiencia y una gestión inteligente del peso.


## Tracción:

- La tracción del prototipo esta constituido por 4 ruedas de goma extraídas de un kit de lego EV3, estas tienen como medida del neumático es de 43mm de diámetro exterior y su respectiva llanta(rin) 29mm.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/2fb7151d-4170-44b2-8d3b-63890c571fb5" />

* Anteriormente(Rexbot1.0), el prototipo utilizaba ruedas plásticas rígidas de mayor diámetro.
  
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/ee28689a-d265-4b38-bbb7-19ae411dfde6" />


Sin embargo en 2025 para para Rexbot2.0 y actualmente la temporada 2026 para Trivilyn3.0, se decidió utilizar las ruedas de goma de 43 mm por las siguientes ventajas técnicas:

Mejora de Tracción: El compuesto de caucho del kit EV3 ofrece un coeficiente de fricción superior, eliminando el deslizamiento en aceleraciones rápidas.

Optimización del Centro de Gravedad: Al reducir el tamaño de las ruedas respecto a las versiones anteriores, se logró bajar el chasis, aportando mayor estabilidad en las curvas cerradas y evitando volcamientos.

Torque Efectivo: Un diámetro menor permite que el motor DC trabaje con una carga menor, logrando una respuesta de arranque más ágil y precisa.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/a69a4758-90fd-44ca-a29e-b00389318156" />

## ¿Como logramos que se mueva con un solo motor?

Esto se logra mediante una caja de engranajes realizada a medida, que posee un eje tipo cruz basado en los que vienen en los kits de Lego, hechos de acero con medidas de 2.8 mm de ancho y 4.2 mm de alto; su longitud es de 119 mm. Tiene un refuerzo de teflón industrial alrededor del eje para evitar ser doblado o pandeado por el peso del prototipo.

La caja reductora o caja de engranajes esta conformada internamente por 3 engranejes 
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/d757209c-56f3-45bb-a624-5c35fda9360d" /> 

- Trivilyn se desplaza gracias a lo mencionado anteriormente, pero el que se encarga de dar el inicio del movimiento es un motor DC de 3 a 6 voltios, logrando entre 13 mil y 15 mil RPM.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/db57e1e8-c39f-4611-a939-cd46dfc346db" />

Esta insertado en la parte lateral de la caja de engranajes de la siguiente manera

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/51318156-a986-46b9-8569-d86d30154f6d" />

Aclaramos que estos motores se extrajeron de un turbo snake 

<img width="894" height="465" alt="image" src="https://github.com/user-attachments/assets/b64f1439-2ba3-4914-9b02-4640ddfbcb7d" />

y se pueden extraer de distintos tipos de vehículos a control remoto como:

* **Vehículos Acrobáticos Tipo "Stunt" o Doble Cara (Genéricos de Amazon/AliExpress):** Diseñados para maniobras de alto impacto y giros de 360 grados. Sus motores internos poseen un torque de arranque elevado, ideal para romper la inercia inicial en prototipos que superan la línea de los 1000 gramos de masa.


---

* **Modelos de Competición Escala Mini 4WD (Tipo Tamiya):** Estos kits emplean motores ultra estandarizados (como la serie Mabuchi 130). Destacan por su ligereza, imanes de alta calidad y un régimen de revoluciones por minuto masivo, lo que facilita su acoplamiento directo en cajas reductoras diseñadas a medida.

---

* **Automóviles de Fricción de Escala Mayor (Tipo Maisto o Similares):** Aunque carecen de electrónica de radiofrecuencia, los mecanismos internos de estos vehículos albergan conjuntos de engranajes y motores de inercia pesados. Son una excelente fuente de componentes mecánicos y bobinados de alta durabilidad para resistir la fatiga por uso continuo.

---

* **Vehículos de Radio Control Semiprofesionales (Escala 1:24 o 1:16):** Modelos comerciales que, al sufrir fallos en sus placas lógicas principales, dejan intactos motores de las series 130 o 180. Estos componentes ofrecen una estabilidad térmica superior y un consumo de corriente optimizado bajo cargas de trabajo constantes.


Este motor es el corazón del desplazamiento y uno de los componentes principales para que Trivilyn tenga su desempeño. 

Análisis Cinematómico y Dinámico del Tren de Engranajes (Caja Reductora 78:1)

Para vencer la inercia del chasis impreso en PETG y maximizar el torque en el eje motriz trasero, Trivilyn 3.0 implementa una caja reductora de eje compuesto de tres etapas con trenes de engranajes de dientes rectos. El sistema utiliza una configuración de piñones con conteos de dientes específicos de **8, 30, 5, 26, 5 y 20 dientes** para lograr una optimización del momento torsor.

### Cálculo Analítico de la Relación de Transmisión

La relación de reducción total se calcula multiplicando las relaciones de transmisión individuales de cada una de las tres etapas de engranajes en cascada:

* **Etapa 1 (Piñón del Motor a Engranaje Intermedio 1):** Con un piñón conductor de 8 dientes y un engranaje conducido de 30 dientes:
  **R1 = 30 / 8 = 3.75**
  *La velocidad angular se reduce 3.75 veces, incrementando el torque en la misma proporción.*

* **Etapa 2 (Piñón Intermedio 2 a Engranaje Intermedio 3):** Con un piñón conductor coaxial de 5 dientes y un engranaje conducido de 26 dientes:
  **R2 = 26 / 5 = 5.2**
  *La velocidad remanente de la primera etapa sufre una reducción adicional de 5.2 veces.*

* **Etapa 3 (Piñón Intermedio 4 a Engranaje del Eje Diferencial):** Con un piñón conductor de 5 dientes y un engranaje conducido final de 20 dientes:
  **R3 = 20 / 5 = 4.0**
  *La última etapa reduce el vector de velocidad 4 veces más antes de transferir la energía a las ruedas.*

* **Cálculo de Reducción Total (R_total):**
  **R_total = R1 x R2 x R3 = 3.75 x 5.2 x 4.0 = 78**

Esto establece una **Relación de Reducción Nominal de 78:1**. Por cada 78 rotaciones completas del eje del motor de alta velocidad (15,000 RPM), el eje motriz de las ruedas de caucho de 43 mm ejecuta una sola revolución, transformando la velocidad angular en fuerza de tracción neta en pista.

---

### 2. Análisis de Rendimiento Dinámico: Velocidad vs. Torque Real

Para proyectar el rendimiento real del prototipo en pista, se evalúa el efecto del tren de reducción sobre los vectores cinemáticos de salida. No obstante, el cálculo real debe considerar el **coeficiente de eficiencia mecánica (Eficiencia Global)**, el cual modela las pérdidas de energía por fricción parásita, calor por rozamiento y desalineaciones menores en el chasis.

| Parámetro Cinematómico | Efecto Físico de la Reducción | Ecuación Estructural Teórica |
| :--- | :--- | :--- |
| **Velocidad Angular (n_salida)** | **Disminuye de forma lineal** 78 veces respecto a la velocidad de entrada del motor. | **n_salida = n_entrada / 78** |
| **Torque Neto (M_salida)** | **Aumenta de forma proporcional** 78 veces, multiplicado por la eficiencia de transmisión. | **M_salida = M_entrada x 78 x Eficiencia** |

*Donde:*
* **n_entrada:** Velocidad del motor Turbo Snake en vacío (aproximadamente 15,000 RPM).
* **M_entrada:** Torque nominal instantáneo generado por el eje del motor.
* **Eficiencia Global del Tren:** Estimada analíticamente en un **85%** (0.85) para engranajes rectos de tres etapas acoplados sobre bujes de bronce, absorbiendo las pérdidas por fricción termodinámica.

---

### 3. Justificación Mecánica de la Configuración 78:1

> [!NOTE]
> **El Compromiso Velocidad/Fuerza (Trade-off):**
> Un motor que opera directamente a 15,000 RPM patina instantáneamente en las curvas debido a la falta de torque estático, quemando el puente H por sobrecorriente. La reducción de 78:1 reduce la velocidad en el eje de la rueda a unas manejables e hiperestables **192 RPM bajo carga máxima**, dotando a Trivilyn 3.0 de la fuerza necesaria para mantener la aceleración constante en las curvas cerradas y garantizando que las ruedas de 43 mm mantengan el agarre mecánico (grip) sin pérdidas por derrape lateral.

## Estudio Dinámico: Torque Necesario, Tracción y Distribución de Fuerzas

Para asegurar que el motor de tracción (extrayendo el núcleo de un Turbo Snake) sea capaz de romper la inercia del vehículo a máxima aceleración, evitar el estancamiento térmico (stall) y optimizar el agarre en pista, desarrollamos un modelo matemático basado en las especificaciones físicas de Trivilyn3.0:

* Masa Total del Vehículo: 1250 gramos = 1.25 kg
* Peso Total: 1.25 kg * 9.81 m/s² ≈ 12.26 Newtons
* Radio de las Ruedas Traseras: 43 mm de diámetro / 2 = 21.5 mm = 0.0215 metros
* Relación de Reducción de la Caja: 78:1 (Caja reductora a medida con ejes de acero)

---

### 1. Cálculo del Torque Estático Mínimo en las Ruedas (Breakout Torque)

El torque mínimo necesario en el eje de las ruedas traseras para vencer la fricción estática del caucho EV3 contra la superficie de la pista (asumiendo un coeficiente de fricción estática conservador mu_s ≈ 0.6) se calcula mediante la relación:

Torque_ruedas = Peso * mu_s * radio

Torque_ruedas = 12.26 N * 0.6 * 0.0215 m ≈ 0.158 Nm = 1.61 kg-cm

* Multiplicación por la Caja Reductora (78:1): Gracias a la impresionante reducción mecánica fabricada por el equipo, el torque que el motor Turbo Snake necesita entregar en su piñón de entrada es extremadamente bajo:

Torque_motor = Torque_ruedas / Relación_Reducción = 1.61 kg-cm / 78 ≈ 0.0206 kg-cm

* Conclusión Mecánica: Operar el motor bajo la línea sobreelevada de 10V estables garantiza que el motor trabaje en la zona de máxima eficiencia de su curva de potencia, logrando aceleraciones explosivas a PWM 190 sin riesgo de sobrecalentamiento en las bobinas o derretimiento del soporte de PETG.

---

### 2. Distribución de Carga y Centro de Masas Estratégico

La distribución del peso de los 1250 gramos se planificó de forma asimétrica pero controlada a través de la arquitectura de pisos, logrando un balance de fuerzas óptimo para un vehículo de tracción trasera (RWD):

               DISTRIBUCIÓN DE FUERZAS E INERCIA (TRIVILYN 3.0)
               
      [Tren Delantero]                                   [Tren Trasero]
     (Dirección SbW/Servo)                             (Tracción/Motor/Batería 3)
           │                                                  │
           ▼                                                  ▼
     35% del Peso (~437.5g)                             65% del Peso (~812.5g)
  [Baja inercia angular para]                        [Máxima Fuerza Normal (N)]
   [giros rápidos de 40°]                            [Elimina el derrape / Grip total]

   <img width="1080" height="810" alt="image" src="https://github.com/user-attachments/assets/fb2b0b93-4538-4a43-9931-fc3f5ad4f808" />

* Eje Trasero (65% de la Masa ≈ 812.5g): Al alojar el motor, la caja de engranajes de acero reforzada con teflón y el cartucho de cola de milano en la parte posterior inferior, se maximiza la Fuerza Normal sobre las ruedas de goma de 43mm. A mayor fuerza normal, mayor es la fuerza de tracción máxima utilizable antes de que las ruedas patinen en el arranque.
* Eje Delantero (35% de la Masa ≈ 437.5g): Al fijar la electrónica y los sensores en el segundo y tercer piso de forma retrasada, el tren delantero queda lo suficientemente ligero como para que el servomotor HobbyPark de 35kg rompa la fricción lateral de forma instantánea, logrando cambiar el ángulo de ataque a 40° por lado en milisegundos sin arrastrar el frente del carro.
---
La caja de engranajes mencionada anteriormente se sostiene con una base diseñada en 3D por el equipo. (Recordamos que los diseños como este se encuentran en el apartado de Archivos CAD).

<img width="942" height="621" alt="image" src="https://github.com/user-attachments/assets/ba459d5c-70a8-4925-a69b-d3ea4a817476" />

Esta base funciona como una especie de tapa y abrazadera realizada a medida, evitando vibraciones y fallos para sostener toda la tracción trasera de Trivilyn; encaja con los soportes del eje trasero principal, siendo así las partes laterales de la caja de engranajes y la parte central de la caja de engranajes.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/969327b4-2068-40c5-84bb-7d25c7d60139" />

que al lograr encajar con el sistema de engranajes se fija a la primera base de Trivilyn por 4 tornillos

Si se puede observar el soporte en la parte inferior tiene una especie de “Vena” 

<img width="821" height="595" alt="image" src="https://github.com/user-attachments/assets/fd59e9b5-5196-427c-8350-e0658c74a73f" />

Es una extencion de filamento cuya funcion es solucionar que en versiones anteriores de este soporte se fracturaba esa zona problema que resuelve esta “vena” que actúa como un refuerzo y proporciona varias ventajas como:

- La vena añade una estructura perpendicular o diagonal que "amarra" las capas principales. Al tener una geometría curva, las líneas de extrusión de la impresora envuelven la pieza, creando una especie de "esqueleto" externo que mantiene las capas unidas bajo presión.

- Esto hace que la pieza sea mucho más resistente a la flexión. En un robot de competencia, los motores y el movimiento generan vibraciones; la vena asegura que el soporte se mantenga rígido y no "oscile", lo cual terminaría quebrando el PETG.

## Dirección: 

La movilidad en la parte delantera: aquí nos referimos al sistema de dirección (control de giros del robot), ruedas frontales y todos los componentes de estos para unirse entre sí.

Para esta parte de Trivilyn3.0 nos basamos en la plataforma estable de Trivilyn 2025; Para esta temporada 2026 hemos conservado el sistema de dirección por su alta confiabilidad, pero hemos aplicado dos optimizaciones críticas en la respuesta dinámica y la durabilidad de los materiales, las cuales son:

1.Principalmente imprimimos los componentes nuevamente en PETG porque es un material mas resistente al desgaste y posibles fracturas que el PLA.

El **PETG (Tereftalato de Polietileno Glicol)** es un copoliéster termoplástico ampliamente utilizado en la manufactura aditiva (impresión 3D) de componentes robóticos estructurales y de alta resistencia. A diferencia del PLA convencional, el PETG destaca por su excelente balance entre tenacidad, flexibilidad y resistencia química, lo que lo convierte en el polímero ideal para soportar los esfuerzos dinámicos y las vibraciones mecánicas dentro del chasis del vehículo autónomo.

### ¿Por qué PETG?

- Durante la competencia, los motores DC y los drivers de potencia generan calor. El PLA puede empezar a ablandarse o deformarse si está cerca de una fuente de calor constante o si el robot se deja bajo el sol/luces intensas del evento. El PETG mantiene su integridad estructural.

- El PETG es más "tenaz" (ductilidad). Tiene la capacidad de absorber energía deformándose elásticamente antes de romperse. En un choque, una pieza de PETG tiene más probabilidades de flexionarse y volver a su forma, mientras que una de PLA se rompería, dejando al robot fuera de la competencia.

- El PLA es biodegradable y sensible a la humedad (higroscópico), lo que puede degradar sus propiedades mecánicas con el tiempo. El PETG es resistente al agua y a muchos químicos, lo que garantiza que las piezas del robot no se vuelvan quebradizas meses después de haber sido impresas.


2.Se Realizo un cambio al tubo transversal.Este cambio del del tubo consiste en su material no en sus medidas o forma, decidimos hacerlo de bronce en un torno por las principales ventajas:

- En la version anterior el tubo era de plastico.El plástico contra plástico genera mucha fricción y calor, lo que provoca que los ejes de LEGO se desgasten ("se limen") con el tiempo, perdiendo su forma de cruz.

- Al ser un material con propiedades autolubricantes, el bronce actúa como una superficie de sacrificio suave. Es mucho más amigable con el plástico que otros metales o que el propio roce plástico-plástico.

- El tubo de bronce aporta una rigidez estructural externa. Al encamisar o soportar el eje con bronce, obliga al eje a mantenerse recto, asegurando que toda la fuerza del servo llegue a las ruedas sin pérdidas por flexión.

- Los conectores de plástico suelen tener tolerancias holgadas (pequeños movimientos flojos).Cosa que no nos podemos permitir para una competencia como la WRO, ese pequeño juego hace que el robot "baile" en las rectas y reduce la precision.

<img width="610" height="540" alt="image" src="https://github.com/user-attachments/assets/9c4a2c56-16b4-4613-b91b-083027a05eef" />


Ya teniendo claro esto, podemos iniciar con explicar: ¿qué hace que se mueven las ruedas frontales? El encargado de esto es un servomotor que está fijado a la base principal de Trivilyn con sus respectivos tornillos y tuercas. Este servomotor no es convencional como los modelos SG90 o MG95; Es un servomotor HobbyPark de 35 kg (Modelo HD3523MG). Sistema de movimiento que se implementó en Rexbot 2.0 y decidimos conservar esta parte, ya que cumple su función de manera precisa.

Especificaciones del servomotorHobbyPark 35kg (Modelo HD3523MG):

Torque (Fuerza):
* A 6.0V: ~29 kg-cm
* A 7.4V: ~35 kg-cm
* Velocidad:
* A 6.0V: 0.14 seg / 60°
* A 7.4V: 0.12 seg / 60°
* Voltaje de operación: 6.0V a 8.4V (soporta baterías LiPo 2S directamente).
* Tipo de motor: Coreless (sin núcleo), lo que permite una aceleración más rápida y un funcionamiento más suave que los motores estándar.

Engranajes: Metálicos de alta precisión (Stainless Steel & Aluminum). Esto es lo que le permite manejar los 35kg de presión sin romperse.

Carcasa: Aluminio CNC, Ayuda a disipar el calor del motor durante uso intensivo.

Rodamientos: Doble rodamiento de bolas para reducir la fricción en el eje principal.

Ángulo de control: Generalmente 180° o 270° (según la configuración de fábrica, pero es programable).

<img width="894" height="872" alt="image" src="https://github.com/user-attachments/assets/0a50d7c1-13f1-46e7-8fce-1cee34be54ef" />

Que el equipo adquirido en Amazon. ¿Por qué no se usan servos convencionales? Esto tiene un motivo, ya que utilizamos versiones más convencionales en prototipos anteriores de nuestro robot. (El porqué de esta decisión y los retos por los que tuvo que pasar el equipo para tomar esta decisión se pueden conseguir más a detalle en el apartado de «Pensamiento sistémico y decisiones de ingeniería: [Temporada 2025](#temporada-2025-rexbot20)).

## Tipo de Direccion y Como funciona

- Este contiene un sistema de dirección (Steer-by-Wire) que cada rueda puede moverse independientemente, aunque están montadas en un eje común (lo cual sugiere una posible adaptación diferencial) Ya que la rueda interior gira ligeramente más que la otra, de modo que el robot se mantiene en el mismo arco sin deslizamiento. (Derrape). 

- Con este sistema de direccion, logramos obtener resultados de que trivilyn logre un giro con angulo de 80 grados(40° por lado)

Para validar el comportamiento mecánico del sistema **Steer-by-Wire (SbW)**, se documentó el puente de dirección en sus tres estados fundamentales. El actuador HobbyPark de 35kg modifica el ángulo de ataque de las ruedas sin juego mecánico visible (*backlash*).

| Registro Fotográfico | Estado de Giro | Ángulo | Descripción de la Dinámica en Pista |
| :---: | :--- | :---: | :--- |
| <img src="https://github.com/user-attachments/assets/3996da37-adc2-49ce-8bea-2aadb797fa20" width="250" alt="Giro Izquierda" /> | **Viraje Absoluto a la Izquierda** | ~30° a 40° | El puente se desplaza en sentido horario para correcciones críticas y curvas cerradas. |
| <img src="https://github.com/user-attachments/assets/c9c211bb-01a7-4c43-8560-b99a818e1f05" width="250" alt="Dirección Neutra" /> | **Posición Neutra (Línea Recta)** | 0° | El puente se alinea de forma perpendicular al chasis. Estado de mínima fricción y máxima aceleración. |
| <img src="https://github.com/user-attachments/assets/335919bc-559d-4829-b921-131f51ff0fa4" width="250" alt="Giro Derecha" /> | **Viraje Absoluto a la Derecha** | ~30° a 40° | El puente se desplaza en sentido antihorario para evasión rápida de obstáculos y señales. |

### 🛠️ Justificación Técnica del Sistema SbW

1. **Optimización del Radio de Giro Real:** El rango extendido de 40° por lado permite que el robot complete maniobras de evasión y estacionamiento en espacios confinados, solucionando de raíz las limitaciones de agilidad geométrica presentes en los antiguos prototipos de la serie Rexbot.
2. **Mitigación del Desgaste y Derrape:** Al forzar mecánicamente la divergencia de las ruedas durante el viraje (Ackermann), se reduce la fricción parásita de las llantas contra la superficie de rodadura, optimizando el consumo del Power Budget y garantizando un avance fluido.
3. **Control Predictivo y Calibración:** Al no depender de varillajes mecánicos complejos expuestos a holguras físicas, las desviaciones milimétricas de la dirección se corrigen directamente mediante software de control en milisegundos, asegurando un comportamiento idéntico tanto en sentido horario como antihorario de la carrera.

---

>[!IMPORTANT]
> **Calibración del Punto Neutro en el Firmware:**
> Al inicializar la máquina de estados en el Arduino Mega, el pulso PWM enviado al servo HobbyPark debe ajustarse exactamente al valor de microsegundos que garantice la perpendicularidad perfecta mostrada en el estado neutro. Cualquier desviación física milimétrica en el acople se corrige mediante el software de calibración de compensación para evitar derivas (*drifting*) en tramos rectos.

- siendo así mas ágil para llegar a cumplir sus objetivos, (giros a gran velocidad, sortear objetos de manera optima, salir del estacionamiento en paralelo).


---

Para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero, esta consiste en 3 partes principales:

1. Encaje de palanca de acero a base en 3D

   
Esta base fue rediseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y, también, para que encajara perfectamente la pieza de hierro a presión y evitar todo el juego posible (imprecisión de los componentes).

2.Luego de encajar esta pieza, utilizamos un tipo de abrazadera, que sostiene el buje del eje con forma de cruz extraido de un kit Legoeo EVE3


3.Para centrar y estabilizar su eje utilizamos retenes de lego amarillos 
<img width="1200" height="899" alt="image" src="https://github.com/user-attachments/assets/5e4e163a-b2bf-42c3-9c0c-e68d3291c89c" />

Dos por la parte interior y uno por la parte exterior por cada lado. Estos se encargan de sujetar los ejes de las ruedas al sistema de dirección; luego, el diferencial «tubo transversal», ya antes lubricado con vaselina.

# 🏗️ Arquitectura Modular: Desglose Estructural por Pisos

# Primer piso

La base inferior al igual que las demas piezas de Trivilyn3.0 esta realizada en impresión 3D del material PETG de la marca Creality el cual adquirimos de la tienda oficial de Creality ubicada en Caracas 

<img width="720" height="908" alt="image" src="https://github.com/user-attachments/assets/2a5402ab-edbf-4f81-a66b-1d7afbf8ecc6" />


La base tiene unas medidas de 90mm de ancho × 170mm de largo x 48mm de alto 

<img width="1026" height="602" alt="image" src="https://github.com/user-attachments/assets/fdf955ae-db07-4ce8-8c70-926ecb760103" />


con una forma innovadora en su diseño como las líneas de relieve en la parte superior

<img width="1092" height="500" alt="image" src="https://github.com/user-attachments/assets/3c8b125a-6743-4085-a913-d51589e3d74d" />

Estas cumplen una función muy importante en el diseño de manera directa la cual es dar mayor rijides a la base para evitar deformaciónes o fracturas.Para esto el equipo se inspiro en las formas de los chasis de los vehiculos.

Aunque anteriormente nunca hemos tenido problemas con deformaciónes empleamos estos ("Refuerzos") para prevenir problemas en un futuro y Trivilyn3.0 pueda soportar cualquier irregularidad

Ya explicado esto se pueden observar:

<img width="983" height="669" alt="image" src="https://github.com/user-attachments/assets/f2c2b3cd-d91e-468b-ba42-1c95b16432f7" />


Esta forma decreciente en la parte frontal de la base es el espacio necesario para que el sistema de dirección tenga una movilidad de 40° por lado, y fue diseñado de esta forma en base al sistema de dirección que implementamos en Trivilyn.

En la base se encuentran 9 orificios 8 para tornillos, 4 para el servomotor que poseen un ancho de 4.5mm que es la medidad del encaje de los tornuillos que trae el servomotor de fabrica.Todas estas medidas fueron realizadas por un vernier que funciona de la siguiente manera:

### Funcionamiento y Lectura del Vernier

- El vernier funciona mediante la superposición de dos escalas: la Regla Fija (milímetros) y el Nonio (la escala móvil que da la precisión decimal)

<img width="3997" height="2284" alt="image" src="https://github.com/user-attachments/assets/36449bad-08c8-4096-86d2-ca1e4a0e47d8" /> 

1. Lectura de la Escala Principal (Enteros)
Primero, observa dónde se ubica el cero (0) de la escala móvil (nonio) respecto a la regla fija.

- Si el cero del nonio pasó la marca de los 20 mm pero no llega a los 21 mm, tu medida base es 20 mm.

2. Lectura del Nonio (Decimales)

- Para obtener los decimales (el .2 mm), se debe buscar cuál línea del nonio coincide exactamente en una línea recta con cualquier línea de la regla fija.

<img width="1008" height="1056" alt="image" src="https://github.com/user-attachments/assets/c6a20c74-3cda-4f26-a4d6-2d18b6695170" />

<img width="781" height="458" alt="image" src="https://github.com/user-attachments/assets/ad453807-c352-4319-b679-7ee19adf160e" />


- 4 tornillos para el soporte de la tracción trasera,utilizamos tornillos de 4mm en vez de otras medidas por lo siguiente razon:

- Esta decisión se basa en un análisis de resistencia a la cizalladura, ya que este componente soporta el torque reactivo de los motores. El diámetro de 4 mm ofrece una superficie de contacto superior con el chasis de PETG, minimizando la fatiga del material por vibración y garantizando que la geometría del tren motriz permanezca inalterada ante aceleraciones de alta intensidad.

- En piezas impresas en 3D, un agujero muy grande reduce el área de las paredes de relleno (infill), lo que puede debilitar estructuralmente el soporte en lugar de fortalecerlo. El M4 permite mantener una estructura sólida alrededor del tornillo sin comprometer la resistencia de la pieza impresa.

- El motor utilizado no generan el torque suficiente para romper un tornillo de acero M4. Por lo tanto, usar un M6 o M5 no aportaría ninguna seguridad extra real, solo penalizaría el rendimiento del robot.

<img width="682" height="628" alt="image" src="https://github.com/user-attachments/assets/43382cb3-3df2-4cfe-af51-d2b36bcc4ef9" />

El agujero más grande de todos con forma rectangular es el orificio donde se encaja el servomotor de la dirección con unas medidas de 40.2mm*20.2mm  

Esos 0.2mm extra en el diseño para el encaje de la pieza no son un error y su explicacion es la siguiente:

- Aunque se diseñe un hueco de 20 mm, el material alrededor de ese hueco tiende a contraerse hacia adentro mientras se enfría, reduciendo el espacio real disponible. Los 0.2 mm adicionales compensan esa contracción del polímero, asegurando que el componente mantenga un "ajuste deslizante" (clearance fit).

- Las impresoras 3D funcionan depositando cordones de plástico (extrusión). La boquilla (nozzle) suele ser de 0.4 mm, pero el plástico se aplasta ligeramente al salir.Este aplastamiento hace que las paredes internas de un hueco sean siempre unas micras más gruesas de lo que dicta el modelo digital. Al añadir 0.2 mm de tolerancia, estámos compensando el exceso de flujo (over-extrusion) y las irregularidades microscópicas de las capas (capas de 0.2 mm de altura), permitiendo que las superficies deslicen sin quedar atrapadas por la fricción de las capas.

<img width="1050" height="525" alt="image" src="https://github.com/user-attachments/assets/48e42870-3c93-4fa8-b5ce-ad1c5384dbb6" />

Esta base, posee 3 pilares que se encargan de sostener el segundo piso posicionados estratégicamente 2 en la parte trasera y una en la parte frontal estás se encargan de soportar los demás pisos de Trivilyn

<img width="1035" height="609" alt="image" src="https://github.com/user-attachments/assets/e42034b6-7c6a-4100-a12e-f25d8e6446b7" />

Sus medidas son de 7 mm de largo x 6.5 mm de ancho x 45 mm de alto y, en la parte inferior de cada pilar, se implementaron soportes en forma de rampa en la base de los pilares que sostienen el segundo nivel del chasis. Esta geometría de cartela estructural tiene como objetivo principal la triangulación de fuerzas, proporcionando rigidez ante los momentos flectores generados por la inercia del robot en fases de aceleración y frenado. El diseño inclinado no solo optimiza la distribución de cargas hacia el chasis principal, sino que mejora la viabilidad de la impresión en PETG al eliminar la necesidad de soportes externos, garantizando una unión mecánica superior entre niveles.

<img width="967" height="591" alt="image" src="https://github.com/user-attachments/assets/75062dcb-3c39-4e53-b115-7a81c80a3a00" />

Para finalizar es necesario analizar la integración en el "primer piso" o chasis inferior del vehículo un sistema para la extracción de 1 par de baterias 18650 que se ubican en el. Este plano fundamental no solo actúa como el soporte rígido de la suspensión y los ejes de tracción, sino que ha sido diseñado geométricamente para encapsular el contenedor de baterías sin interferir con los actuadores ni comprometer la distancia al suelo ( distancia al suelo ).

<img width="1206" height="616" alt="image" src="https://github.com/user-attachments/assets/8dd94d39-3d53-4fd0-aa05-a83744581030" />

El riel guía macho de la corredera está integrado directamente en la matriz del chasis inferior, ubicado en el espacio simétrico comprendido entre el eje de dirección delantero y el conjunto motor-reductor trasero. Esta disposición central asegura que el volumen de las celdas 18650 ocupa un espacio que básicamente no restringe el radio de giro de las ruedas delanteras ni la cinemática de los eslabones de dirección.

  <img width="1047" height="600" alt="image" src="https://github.com/user-attachments/assets/86313b49-ee50-43eb-a047-0a2b3f0958b3" />


 Al formar parte del primer piso, el cartucho deslizable queda protegido perimetralmente por la estructura sólida del chasis impreso en PETG. Esto significa que las baterías no están suspendidas ni expuestas a impactos directos en caso de colisión; el chasis actúa como un exoesqueleto protector. Además, al situarse en el nivel más bajo, el peso del banco de energía se descarga directamente sobre los puntos de apoyo de los ejes, evitando flexiones mecánicas en las placas superiores del segundo y tercer piso.

-  La corredera macho cuenta con un tope mecánico en el extremo interno que alinea automáticamente los terminales de presión de las celdas con el bloque de distribución del primer piso. Desde este punto basal, las líneas de alimentación de alta corriente (conductores de calibre adecuado para soportar los picos del motor y el servo) ascienden de manera vertical y ordenada a través de pasacables integrados hacia el segundo piso, donde se conectan al interruptor general ya los módulos de regulación. Esto mantiene el primer piso libre de bucles de cableado sueltos que pueden atascarse con elementos externos de la pista o con el propio movimiento de la corredera.

## Especificaciones de Fabricación y Tolerancias Geométricas

- Material de Fabricación: Polímero de Polietileno Tereftalato Glicolizado ( PETG ). Se seleccionó este material sobre el estándar PLA debido a su alta resistencia al impacto, superior tenacidad y resiliencia ante esfuerzos mecánicos de flexión, además de su inmunidad química frente a agentes lubricantes industriales.

- Parámetros de Fabricación: Relleno de tipo giroscópico al 35% con 4 perímetros de pared exteriores. Esta configuración genera una estructura interna alveolar con una relación resistencia-peso óptima, capaz de absorber las vibraciones mecánicas de alta frecuencia del motor sin transmitir fatiga por esfuerzo a las uniones del chasis.

- Ajuste Mecánico del Riel: El canal hembra integrado en el chasis presenta una tolerancia geométrica de +0.2 mm respecto a la corredera macho de las baterías. Este margen de holgura de precisión es crítico: previene el juego mecánico o las oscilaciones del banco de energía durante las aceleraciones transversales, pero mantiene el coeficiente de fricción lo suficientemente bajo para permitir un deslizamiento manual suave y fluido.

## Mecanismo Deslizable en Corredera Lateral (Macho-Hembra)
El sistema de alimentación no utiliza contenedores fijos ni requiere el desmontaje de los niveles superiores. El sistema está compuesto por dos subconjuntos mecánicos interconectados:

Riel Macho Integrado: Una cavidad longitudinal con guías en ángulo de geometría trapezoidal (similar a una cola de milano invertida), extruida directamente en el centro geométrico del primer piso. Su ubicación interaxil aprovecha el espacio muerto comprendido entre el servo de dirección y el tren motriz trasero, optimizando la distancia libre al suelo a un valor constante de 15 mm .

<img width="1102" height="604" alt="image" src="https://github.com/user-attachments/assets/79137ab0-fe7e-4b8f-9caf-549a608a4891" />


Cartucho Hembra Porta-Celdas: Un contenedor compacto impreso en PETG que aloja firmemente dos celdas de litio de formato 18650 dispuestas en paralelo. Cuenta con ranuras laterales que se acoplan simétricamente al riel hembra del chasis y una pestaña ergonómica en el extremo exterior que facilita el agarre y la tracción manual para el operario.

<img width="1093" height="632" alt="image" src="https://github.com/user-attachments/assets/c77e3653-c885-49a8-bc6c-6fa2db4e3d2f" />


________________________________________________________________________________________________________
### Explicación sistema Cola de Milano 

El diseño de la interfaz de deslizamiento entre el chasis inferior (riel macho) y el cartucho porta-celdas (riel hembra) implementa un perfil prismático con geometría de cola de milano (unión trapezoidal angular). Esta decisión de diseño sustituye a las guías planas tradicionales con el objetivo de aprovechar las propiedades mecánicas de auto-alineación y restricción de esfuerzos multiaxiales que ofrece esta configuración geométrica.

<img width="225" height="225" alt="image" src="https://github.com/user-attachments/assets/d61266ee-3ee3-43b1-aa0a-c83a0a44c314" />


A diferencia de los rieles de sección cuadrada o en "T", donde las fuerzas de torsión se concentran de forma crítica en ángulos rectos de 90°(provocando zonas de alta concentración de esfuerzos y fracturas por cizalladura), la cola de milano distribuye las cargas a lo largo de planos inclinados (típicamente configuradas a un ángulo de flanco = 60°).Cuando el robot experimenta una fuerza centrífuga lateral a PWM 190, el flanco inclinado descompone la fuerza normal en componentes vectoriales, aumentando la fricción estática interna de contacto y bloqueando el conjunto firmemente en su sitio. Cuanto mayor es la fuerza que intenta separar el cartucho lateralmente, más se acuña la geometría dentro de su contraparte.La implementación de este sistema proporciona las siguientes ventajas:

- Al introducir el cartucho, la conicidad natural de los flancos laterales actúa como una guía autocentrante. Esto compensa pequeños errores de aproximación manual del operario bajo condiciones de estrés en competencia, encauzando mecánicamente el porta-celdas hacia los terminales eléctricos de fondo.

- Estabilidad de la Distancia al Suelo ( Ground Clearance ): Al quedar la junta entrelazada de forma interna, el espacio total ocupado por el mecanismo se reduce al espesor nominal del chasis, permitiendo un despeje constante de 15 mm respecto al suelo sin protuberancias externas que puedan encallarse en las imperfecciones de la pista.

- Compensación de Desgaste por Fricción: Las superficies anguladas se asientan mejor con el uso continuo. El sutil desgaste microscópico provocado por el ciclo de inserciones no genera holgura holgada (como ocurriría en un riel cuadrado), sino que permite que el cartucho se asiente de manera más íntima dentro del cono receptor.

>[!NOTE]
> Consideración de Tolerancia Crítica en Manufactura Aditiva (Impresión 3D) 
Al imprimir perfiles en cola de milano de forma horizontal, el fenómeno de la gravedad puede provocar un leve colapso de las capas superiores del riel hembra ( overhangs sin soporte). Para contrarrestar esto en Trivilyn3.0, el ángulo de los flancos se limitó estrictamente  60° respecto a la horizontal. Esto permite que las impresoras depositen el filamento PETG utilizando puentes térmicos autosoportados, manteniendo la fidelidad dimensional del canal intacta y eliminando la necesidad de soportes internos que arruinarían el acabado superficial y el coeficiente de fricción de la guía.

>[!TIP]
>Al preparar el código G ( G-code ) en el software de laminado (PrusaSlicer, Cura, etc.), la pieza matriz del chasis inferior (riel hembra) debe orientarse obligatoriamente de forma plana sobre la cama de impresión (planos de los ejes XY) .
>
>La importancia de esta configuración de fabricación radica en la física del material anisotrópico (las impresiones 3D son más débiles en la unión entre capas):
>
>- Alineación de Filamentos: Esta orientación garantiza que los hilos de plástico extruido corran de forma longitudinal, paralelos a la longitud del riel de la cola de milano.
>
>- Resistencia Estructural: Las fuerzas de tracción y cizallamiento laterales que ejerce el cartucho de baterías en las curvas cerradas actuarán de forma perpendicular a la deposición de las capas. Esto aprovecha la resistencia máxima del polímero PETG en su plano sólido molecular, eliminando por completo el riesgo de delaminación o desprendimiento de los rieles del primer piso durante la carrera.

## Topes Mecánicos y Retención Dinámica (Sistemas de Seguridad)

Para contrarrestar las fuerzas de inercia y la transferencia de carga transitoria durante frenados bruscos o cambios de dirección extremos a regímenes de alta velocidad (PWM 190), el diseño mecánico de Trivilyn3.0 incorpora dos sistemas de seguridad geométricos por hardware tolerantes a fallas:

* **Tope de Profundidad Trasero:** Una pared sólida dispuesta al final del riel macho que actúa como final de carrera física. Su función es detener el avance del cartucho móvil exactamente en el punto concéntrico donde los contactos de presión ejercen la interfaz eléctrica óptima con el bloque de distribución basal, evitando sobrecargas mecánicas en los terminales.
* **Sistema de Limitación por Pasador y Ranura de Seguridad:** Para evitar que el contenedor de energía se desprenda o sea expulsado por completo del chasis durante los mantenimientos de emergencia a alta presión en boxes, se diseñó una restricción prismática integrada. El riel hembra (solidario al contenedor de la batería 18650) incorpora un orificio cilíndrico pasante calibrado. A través de este agujero se introduce un tornillo de seguridad cuya punta sobresale internamente para acoplarse y navegar de forma concéntrica dentro de una ranura longitudinal tallada en el riel macho (ubicado en la base del primer piso).

<img width="1014" height="622" alt="image" src="https://github.com/user-attachments/assets/c6c19c90-5cf5-41dd-b428-0f03df9510b4" />


## Interfaz de Conexión y Guiado de Cableado
Al formar parte del primer piso, el cartucho deslizable queda protegido perimetralmente por la estructura sólida del chasis, la cual actúa como un exoesqueleto protector ante colisiones. Desde el bloque de distribución basal, las líneas de alimentación de alta corriente (conductores de calibre adecuado para soportar los picos del motor de tracción y el servomotor de 35 kg) ascienden de manera vertical y ordenada a través de pasacables integrados hacia el segundo piso.

Esta disposición mantiene el primer piso completamente libre de bucles de cableado sueltos que pueden atascarse con elementos externos de la pista o interferir con la cinemática del sistema de dirección y el propio movimiento de la corredera.

# Segundo piso

Para el segundo piso de Trivilyn 3.0, el diseño tuvo una reestructuración, siendo la más notoria su tamaño: su anchura aumentó de 90 mm a 100 mm, mantuvo sus 181.50 mm de largo y su altura aumentó de 5 mm a 38 mm en el momento en que se implementó el sistema para regular la altura de los sensores.
<img width="1060" height="664" alt="image" src="https://github.com/user-attachments/assets/f934e917-c560-4c97-a5e7-f0c92a428258" />

<img width="1066" height="640" alt="image" src="https://github.com/user-attachments/assets/b309783a-532b-4e0a-9540-0df9a5505ec8" />

Se observan refuerzos triangulares (nervios) en los pilares laterales de la base beige. Estos refuerzos aseguran que, aunque el sensor esté en su posición más alta, la estructura no vibre, manteniendo la estabilidad de la "mirada" de Trivilyn3.0 durante aceleraciones bruscas.

<img width="1016" height="640" alt="image" src="https://github.com/user-attachments/assets/efd4178f-201e-4202-8be9-622de4fc47dc" />

Se implementó un refuerzo perimetral de 2 mm x 3mm en los laterales del segundo piso para optimizar la relación resistencia-peso del chasis. Este diseño incrementa la rigidez mecánica de la plataforma, mitigando las vibraciones que podrían afectar la precisión de los sensores. Asimismo, funciona como un sistema de contención para la gestión de cableado y protección contra impactos laterales, garantizando la integridad de los componentes electrónicos en condiciones de alta exigencia dinámica.

<img width="1039" height="667" alt="image" src="https://github.com/user-attachments/assets/657d39a6-d7f9-4340-aa42-89521c47e9d5" />



Antes de continuar con la explicación de el sistema de regulacion de altura de los sensores,Esta base posee 3 orifios los cuales encajan perfectamente con los 3 pilares de la base inferios de esta manera se fijan entre si, despues a este diseño se le incorporo los sistemas de "Corredera" en la parte frontal y laterales quedando de la siguiente forma:

<img width="1013" height="611" alt="image" src="https://github.com/user-attachments/assets/2dda79fa-1549-480b-8738-4f1b53c8e473" />

Ahora ¿Por qué se agrando su ancho? se agrando para poder darle espacio de giro ya que se reestructuró el posicionamiento de los sensores , ahora su altura es ajustable mediante a y un sistema de corredera diseñado en 3D por nosotros de la siguiente manera: 

### ¿como funciona?

En lugar de usar piezas comerciales limitadas, diseñamos un sistema de rieles macho-hembra impreso en PETG (Sistema de cola de milano). El acoplamiento entre el soporte del sensor y el segundo nivel se basa en un sistema de corredera de precisión. Mediante una interfaz de rieles y una ranura longitudinal, se logra una integración que permite el ajuste vertical milimétrico. El bloqueo se realiza mediante un sistema de sujeción por fricción con tornillos de acero, lo que garantiza que la calibración de altura sea permanente durante la competencia, absorbiendo las vibraciones del tren motriz sin comprometer la orientación del eje óptico de los sensores.

<img width="1184" height="600" alt="image" src="https://github.com/user-attachments/assets/dc379124-fe33-4ab5-8225-4c344223a759" />

El sistema utiliza una ranura longitudinal que permite un desplazamiento milimétrico.

<img width="976" height="577" alt="image" src="https://github.com/user-attachments/assets/b9aa1daa-26fc-4287-86c7-361bd882a361" />

Se observa cómo el soporte del sensor encaja en un riel vertical del chasis. Esta geometría actúa como una guía lineal, restringiendo el movimiento del sensor para que solo pueda desplazarse hacia arriba o hacia abajo.Esto proporciona benficios técnicos en el diseño como :

- Eliminar cualquier posibilidad de rotación o desviación lateral (eje X e Y). Al asegurar que el sensor siempre mire hacia adelante de forma perfectamente perpendicular, garantizamos que las ondas ultrasónicas regresen correctamente al receptor, evitando errores de lectura por ecos desviados.

En la pieza beige se aprecia una ranura vertical alargada. Esta es la ranura longitudinal que mencionamos antes.El cual su funcionamiento es hacer que el agujero circular del soporte azul se alinea con esta ranura. Al insertar un tornillo y apretarlo con una tuerca por el lado opuesto, se genera una fuerza de compresión que "atrapa" ambas piezas.

Una vez ajustada la altura a la que se quiere que trabaje el sensor, se utiliza un conjunto de tornillo y tuerca M4 para comprimir las piezas de la corredera. Esto crea una unión por fricción que es inmune a las vibraciones de los motores, evitando que el sensor se deslice hacia abajo durante la carrera. 

Este diseño permite fijar el sensor a cualquier altura dentro del rango de la ranura, permitiendo que el robot se adapte a cualquier tipo de paredes en la WRO 2026 sin necesidad de piezas nuevas.

### Sujeción de los sensores

Diseñamos el soporte con paredes laterales que abrazan el PCB del sensor. El secreto de este encaje es la tolerancia (la holgura entre piezas). No es un agujero suelto; es un encaje que calculamos con 0.15 mm a 0.2 mm menos que la medida real del sensor. Esto obliga al plástico PETG a deformarse microscópicamente al insertar el sensor, creando una presión constante que lo mantiene firme en su lugar sin necesidad de tornillos adicionales.

<img width="1007" height="607" alt="image" src="https://github.com/user-attachments/assets/b92c1d87-224a-4abf-9301-7581e3dc5041" />

El círculo que se ve en la pieza azul en la parte superior es el agujero para el tornillo M4. Está centrado para que la fuerza de bloqueo (del mecanismo de corredera que hablamos antes) se distribuya uniformemente, evitando que el soporte del sensor baje o se mueve de su posicion.

<img width="1050" height="1280" alt="image" src="https://github.com/user-attachments/assets/56d30ba7-4585-45e1-bbdd-756e6ca9f833" />

La estructura ilustrada muestra la ingeniería de encaje de interferencia diseñada específicamente para el sensor ultrasónico. El soporte abraza la placa (PCB) con tolerancias de precisión calculadas para el filamento PETG, utilizando una sujeción por fricción que elimina la necesidad de adhesivos. El diseño permite dejar expuestos los pines de conexión para facilitar el cableado, mientras que el orificio superior central permite que un tornillo M4 ejerza una fuerza de bloqueo axial. Esto garantiza que el sensor permanezca alineado en su eje óptico, eliminando cualquier movimiento parásito durante las vibraciones de la competencia.

Temporada 2026: "Adaptarse para ganar"

La experiencia en la Nacional 2025 dejó una lección clara: la rigidez excesiva en el diseño mecánico es una debilidad. Por ello, para la temporada 2026, el equipo ha adoptado la filosofía de "Adaptarse para ganar" .

La capacidad de ajustar la altura del sensor en cuestión de segundos durante las prácticas nos otorga una ventaja competitiva crítica. Si las especificaciones de las paredes cambian o si la pista presenta irregularidades imprevistas, Trivilyn 3.0 puede recalibrar su "visión física" mecánicamente. Esto evita la necesidad de realizar cambios de último minuto en el código de detección de distancia, permitiendo que el software se mantenga estable mientras el hardware se adapta al entorno.

# Tercer piso

El tercer piso de Trivilyn 3.0 rompe con los esquemas de placas planas convencionales mediante un rediseño total estructurado en forma de "Cabina Monolítica de Polígono Cerrado" . La geometría exterior toma inspiración automotriz y aeroespacial de vehículos de alto rendimiento.

<img width="1003" height="621" alt="image" src="https://github.com/user-attachments/assets/a3a6098a-792f-43c9-aca0-985b77d3924a" />

asemejandose a vehiculos como:

- Buga de Carreras, Prototipo de Cross-Country o Fastback Off-Road
<img width="275" height="183" alt="image" src="https://github.com/user-attachments/assets/651aa2bf-e9a9-4847-9a90-d9ba0834eefe" />


-  Vehículos Militares Blindados (MRAP / Humvee Modernos)
<img width="300" height="168" alt="image" src="https://github.com/user-attachments/assets/0158f6df-4120-48de-b617-732ce44e412c" />

## Geometría de Rigidez Estructural Interna

<img width="1204" height="626" alt="image" src="https://github.com/user-attachments/assets/c8acd693-c83b-4391-a0b1-6e80aeb0a8cc" />

Debido a que las piezas fabricadas mediante modelado por deposición fundida (FDM) presentan un comportamiento mecánico anisotrópico (menor resistencia en el eje Z entre capas de impresión), un encapsulado completamente hueco sería propenso a fracturas por cizalladura o flexión ante la manipulación repetida en cajas o choques en pista.

Para solucionar esta limitación física sin penalizar el peso general del robot, integramos tres nervaduras transversales de refuerzo en la sección inferior interna del encapsulado superior. Estas vigas longitudinales fueron extruidas directamente en el modelado CAD original y aportan los siguientes beneficios:

Reducción del Momento Flector: Estas costillas actúan como tensores que limitan la elasticidad del polímero PETG bajo cargas de compresión vertical. Eviten que la cara superior de la cabina se hunda ante presiones de agarre externas durante el mantenimiento rápido.

Mitigación de Vibraciones de Alta Frecuencia: Al actuar como un esqueleto rígido interno, las nervaduras desplazan la frecuencia de resonancia natural del encapsulado. Esto evita que las vibraciones inducidas por el motor DC a 15.000 RPM desestabilicen mecánicamente los componentes de percepción óptica (HuskyLens) situados en las inmediaciones.

Preservación de Tolerancias: Impiden que la contracción térmica natural del PETG durante la fase de enfriamiento de la impresión 3D deforme las paredes laterales, garantizando un acoplamiento micrométrico constante con los niveles inferiores.

>[!TIP]
>Para mitigar la anisotropía en las zonas críticas del encapsulado, configuramos una altura de capa de 0,2 mm y se incrementa el número de perímetros de pared ( perimeters ) a 4 en el rebanador ( slicer ). Esto asegura que las líneas de extrusión de PETG corran continuas a lo largo de los nervios de refuerzo, incrementando presionando la resistencia al esfuerzo cortante transversal sin necesidad de aumentar el porcentaje de relleno ( infill ), manteniendo la cabina extremadamente ligera.

## Grabado en Relieve Identificativo

La cara frontal externa (el plano inclinado estilo Trophy Truck ) integra una extrusión tipográfica texturizada con el nombre de "TeamCRV Venezuela".

<img width="971" height="556" alt="image" src="https://github.com/user-attachments/assets/88c5eea5-59aa-4b8f-a401-3e9150170681" />

 Más allá del valor estético, reglamentario y de identidad de equipo para la WRO, este relieve altera básicamente la superficie plana de la pieza. Las letras extruídas actúan como un patrón de micronervaduras de refuerzo 
 y rompen la continuidad de la cara plana, incrementando significativamente la resistencia a la torsión de la sección frontal del polímero. Si el robot sufre una colisión directa a alta velocidad, este alivio distribuye las líneas de estrés mecánico a lo largo de la tipografía, evitando que el plástico se agriete o se fracture el frente de la cabina.

 
 
  
 # ⚡ Arquitectura de Potencia y Sensores

Este apartado documenta de manera exhaustiva la distribución de energía, el aislamiento de ruido eléctrico y la configuración del sistema de sensores de Trivilyn3.0. El diseño ha sido calculado para garantizar la estabilidad del procesamiento de visión artificial y la respuesta inmediata de los actuadores bajo condiciones críticas de competencia.

<img width="627" height="720" alt="image" src="https://github.com/user-attachments/assets/8bce33b1-e27e-4b23-8107-16ee9a2bd6ae" />

---


## 1. Subsistema Electrónico

La selección de la plataforma electrónica y el sistema de alimentación de **Trivilyn 3.0** responde a criterios estrictos de robustez industrial, tolerancia a ruidos electromagnéticos (EMI), gestión eficiente del *Power Budget* y velocidad de procesamiento síncrono. A continuación, se desglosa el análisis técnico detallado, la justificación de ingeniería y las observaciones críticas de cada componente integrado en el bus de potencia y datos:

---

### 1.1 Unidad de Procesamiento Central: Arduino Mega 2560 (ATmega2560)
<img width="747" height="370" alt="image" src="https://github.com/user-attachments/assets/129cf89f-161e-4113-b4e4-155771fb7835" />

* **Descripción Técnica:** Microcontrolador de 8 bits basado en la arquitectura RISC AVR. Opera a una frecuencia de reloj de 16 MHz, cuenta con 256 KB de memoria Flash, 8 KB de SRAM, 4 KB de EEPROM y 4 puertos UART independientes por hardware (`Serial0` a `Serial3`).
* **Justificación de uso:** La complejidad algorítmica de la Ronda Cerrada y la Ronda Abierta exige la ejecución paralela de tareas de telemetría, control cinemático y decodificación de datos ópticos. La implementación del Arduino Mega 2560 es fundamental debido a sus periféricos nativos:
  * **Puertos UART Dedicados por Hardware:** A diferencia de chips menores como el ATmega328P (Arduino Uno), que se ven obligados a emular puertos serie mediante software (`SoftwareSerial`) —lo cual bloquea las interrupciones del sistema y ralentiza el ciclo de reloj—, el Mega posee buses independientes. Esto nos permite mapear la cámara inteligente HuskyLens en el bus de alta velocidad `Serial1` (9600 baudios) de forma dedicada, mientras mantenemos la línea `Serial0` limpia para la transmisión de telemetría y diagnóstico a 115200 baudios hacia la interfaz de control en los *pits*, eliminando cualquier tipo de latencia en el bucle principal (`loop()`).
  * **Capacidad de Expansión I/O y Temporizadores:** El chasis requiere temporizadores de hardware independientes para modular las señales PWM del driver de los motores y los pulsos del servomotor Coreless, evitando conflictos de registros concurrentes con los pines de interrupción de la matriz ultrasónica.

> [!TIP]
> **Optimización de Memoria:** Al compilar el firmware para el ATmega2560, se hace un uso extensivo de la macro `F()` en todos los comandos `Serial.println(F("..."))`. Esto fuerza al compilador a almacenar las cadenas de texto estáticas de la telemetría directamente en la memoria Flash (256 KB) en lugar de saturar la memoria SRAM (8 KB), garantizando la estabilidad del puntero del programa durante ejecuciones prolongadas.

---

### 1.2 Sensor de Percepción Artificial: HuskyLens AI Camera
<img width="689" height="230" alt="image" src="https://github.com/user-attachments/assets/03099237-a20d-437a-9c90-f220e3a858e1" />

* **Descripción Técnica:** Cámara inteligente de visión artificial equipada con el procesador Kendryte K210 (arquitectura RISC-V de doble núcleo de 64 bits con FPU y un acelerador de redes neuronales KPU integrado para procesamiento convolucional).
* **Justificación de uso:** Resolver la evasión de pilares de color en pasillos confinados requiere procesar matrices densas de píxeles a frecuencias superiores a los 30 cuadros por segundo (FPS). Ejecutar esta carga matemática directamente en el procesador principal del robot causaría un desbordamiento inmediato de la memoria RAM y un colapso en el control de tracción:
  * **Procesamiento en el Borde (Edge AI):** La HuskyLens actúa como un coprocesador independiente. Ejecuta de forma autónoma el pipeline de segmentación cromática, análisis geométrico y emparejamiento de firmas de color. Una vez procesada la imagen, reduce toda la carga visual a un paquete simplificado de coordenadas y dimensiones de bloques (`xCenter`, `yCenter`, `height`) que se envía al Arduino Mega en formato de pocos bytes, liberando ciclos críticos de CPU.
  * **Inmunidad Cromática y Flexibilidad Estructural:** Gracias a la capacidad de registrar múltiples IDs para una misma firma (IDs 1, 2, 3 para bloques rojos / IDs 5, 6 para bloques verdes), el software compensa las variaciones en el balance de blancos, la degradación de la luz artificial en el recinto y las sombras físicas generadas por el propio carro, garantizando que el umbral proxémico (`result.height > 90`) se dispare exactamente a la distancia planificada.

> [!IMPORTANT]
> **Consistencia del Protocolo:** En el menú interno de la HuskyLens, el protocolo de comunicación debe estar configurado estrictamente en **Serial 9600** de forma manual. El modo de detección automática (*Auto-Detect*) introduce retardos parásitos de sincronización en el arranque que pueden hacer fallar la subrutina `huskylens.begin()`, congelando la inicialización del robot.

---

### 1.3 Matriz de Navegación Periférica: Sensores Ultrasónicos HC-SR04
<img width="830" height="473" alt="image" src="https://github.com/user-attachments/assets/09f9270d-5997-43a4-8419-0a0a0f5e190a" />

* **Descripción Técnica:** Transductores piezoeléctricos de proximidad que operan mediante la emisión y recepción de ráfagas de ondas mecánicas de alta frecuencia (40 kHz). Poseen un rango de detección analítico de 2 cm a 400 cm con una resolución de 3 mm y un ángulo de apertura cónico de 15°.
* **Justificación de uso:** Aunque la visión artificial resuelve la clasificación de los obstáculos, la cámara posee un campo de visión (FOV) angular limitado que genera zonas ciegas inmediatamente delante y a los flancos del parachoques frontal. La matriz tri-sensorial (Izquierdo, Centro, Derecho) cubre geométricamente estas deficiencias:
  * **Lazo de Control Reactivo de Seguridad:** Los sensores ultrasónicos operan como la última línea de defensa física del vehículo. En los pasillos aleatorios de 40 cm de la WRO, las colisiones ocurren en fracciones de segundo. Si la cámara experimenta latencia, el sensor central (`middleDistance`) interrumpe el flujo óptico al registrar distancias críticas de `1 cm a 3 cm`, obligando al chasis a entrar en las subrutinas de escape inmediato.
  * **Estabilización de Centrado por Software:** Al conectarse en paralelo mediante la librería optimizada `NewPing`, el firmware calcula de forma matemática el error de posicionamiento lateral respecto a las paredes laterales sin bloquear el microcontrolador. Esto permite ejecutar microajustes proporcionales rápidos de `30 ms` en el servo de dirección, extinguiendo el error acumulado antes de que el carro se desvíe y golpee los muros de contención.

> [!CAUTION]
> **Aislamiento Acústico por Vibración:** A frecuencias de motor elevadas (PWM > 150), los armónicos mecánicos se transmiten a través del chasis de PETG e inducen lecturas falsas en las cápsulas receptoras del HC-SR04. Es obligatorio instalar empaques de fricción flexibles o soportes amortiguados en las bases impresas de los sensores para desacoplar físicamente el transductor de la estructura del chasis.

---

### 1.4 Actuador de Dirección: Servomotor HobbyPark 35 kg (Coreless Digital)
<img width="350" height="350" alt="image" src="https://github.com/user-attachments/assets/6598b323-92e6-47f2-b0f7-e96b0bd68659" />

* **Descripción Técnica:** Servomotor digital de alto rendimiento equipado con piñonería interna de acero inoxidable y aleaciones metálicas, motor interno de tecnología *Coreless* (sin núcleo) para una aceleración angular ultra rápida y doble rodamiento de bolas en el eje principal. Entrega un par de torsión máximo de hasta 35 kg-cm a un voltaje de alimentación de 7.4V.
* **Justificación de uso:** La arquitectura estructural de Trivilyn 3.0 distribuye componentes pesados en dos niveles, elevando la carga vertical y el momento de inercia sobre el eje delantero. Las ruedas de caucho de 43 mm generan una resistencia friccional estática considerable sobre la superficie de la pista:
  * **Supresión Absoluta de la Deflexión y Holgura (Drifting):** El uso de servomotores estándar de plástico (como los de 9g) o metálicos de gama baja (15 kg) introduce un juego mecánico o histéresis en el varillaje de dirección debido a la flexión de sus componentes internos bajo carga. Esto provocaría que el carro se desvíe de forma aleatoria en las rectas. Los 35 kg-cm de torque bloquean rígidamente la posición del tren delantero, asegurando que el ángulo absoluto neutro (`centro = 94°`) se mantenga perfecto.
  * **Velocidad de Respuesta Dinámica:** El motor *Coreless* carece de la masa de un rotor de hierro convencional, lo que reduce su inercia rotacional interna. Esto permite que el servo alcance su deflexión máxima de forma casi instantánea, un factor crítico para ejecutar con éxito los microajustes laterales de 30 ms y los giros de escape cerrados en curvas de pasillos de 40 cm.

> [!NOTE]
> **Alineación por Software:** Debido al enorme torque del actuador, cualquier desalineación geométrica en el varillaje de dirección forzará al servo a consumir corriente de forma continua en reposo. El punto neutro real se fijó matemáticamente en el firmware a `94°` (`centro`), absorbiendo mecánicamente las tolerancias milimétricas del ensamblaje del puente delantero sin estresar el motor.

---

### 1.5 Etapa de Potencia y Tracción: Driver L298N (Puente H Doble)
<img width="850" height="600" alt="image" src="https://github.com/user-attachments/assets/9c6837ce-75a8-4913-ad2f-8942f42c5d77" />

* **Descripción Técnica:** Controlador de motores de alta potencia integrado basado en la arquitectura de transistores bipolares de unión (BJT). Soporta corrientes de operación continuas de hasta 2A por canal (con picos de 3A), voltaje lógico de 5V y un bus de potencia capaz de manejar hasta 46V, incorporando a nivel de circuito diodos de conmutación rápida para la supresión de fuerzas contraelectromotrices (picos inductivos).
* **Justificación de uso:** El motor de tracción principal Turbo Snake opera a regímenes de hasta 15,000 RPM con una caja reductora de relación 78:1, lo que exige un control preciso del ciclo de trabajo del voltaje para modular la aceleración y absorber las transiciones bruscas de marcha atrás:
  * **Modulación Lineal de la Curva de Velocidad (PWM):** El L298N traduce de forma limpia las instrucciones de ciclo de trabajo enviadas desde el Arduino Mega a través del pin `ENA`. Esto permite al robot sostener un perfil de velocidad crucero controlado (`carSpeed = 50`) en las rectas para estabilizar las lecturas ultrasónicas y, al mismo tiempo, inyectar potencia máxima instantánea (`PWM 180`) en las subrutinas de viraje cerrado para vencer la fuerza centrífuga.
  * **Resistencia a Inversiones Dinámicas de Carga:** En la Ronda Cerrada, al detectar un bloqueo frontal, el software conmuta instantáneamente de la función `forward()` a la función `back()`. Esta transición genera corrientes inversas masivas causadas por el motor cuando actúa momentáneamente como un generador eléctrico. El robusto encapsulado del L298N y sus diodos de protección disipan esta energía en forma de calor sin quemar las salidas lógicas del microcontrolador.

> [!CAUTION]
> **Gestión Térmica Colectiva:** Debido a las conmutaciones agresivas PWM y las reversas instantáneas ejecutadas para escapar de los muros, el integrado L298N opera cerca de su límite térmico. Es mandatorio mantener libre de obstrucciones el disipador de aluminio negro de fábrica y situarlo en una zona del chasis con flujo de aire directo para evitar cortes por protección térmica interna (*thermal shutdown*).

---

### 1.6 Sistema de Almacenamiento de Energía: Celdas de Ion de Litio 18650 
<img width="900" height="900" alt="image" src="https://github.com/user-attachments/assets/74ad6fd1-5339-46d6-8e2c-350f0f616a41" />

* **Descripción Técnica:** Banco de baterías compuesto por celdas cilíndricas recargables de química de Ion de Litio (Li-ion) formato 18650, conectadas en una configuración de dos celdas en serie (2S) para entregar un voltaje nominal de 7.4V y un voltaje de carga pico de 8.4V, caracterizadas por una alta densidad energética y una tasa de descarga sostenida de alta corriente.
* **Justificación de uso:** Los sistemas reactivos robóticos de alta velocidad sufren un fenómeno crítico denominado "marrón de voltaje" (*voltage brownout*). Cuando el servomotor de 35 kg ejecuta un movimiento brusco al mismo tiempo que el motor de tracción demanda torque máximo para un rebase, el consumo de corriente se eleva instantáneamente a varios amperios.
  * **Prevención de Reseteos por Caída de Tensión Parásita:** Las baterías convencionales (como las alcalinas o las de NiMH) poseen una resistencia interna elevada. Ante demandas pico de corriente, su voltaje cae drásticamente por debajo del umbral mínimo de operación (5V), lo que provocaría el reinicio parásito del Arduino Mega o la pérdida de sincronía del bus serie de la HuskyLens en plena carrera. Las celdas de alta descarga 18650 poseen una resistencia interna extremadamente baja. Esto les permite bombear ráfagas masivas de corriente de forma instantánea manteniendo la curva de voltaje completamente plana y estable.
  * **Relación Peso-Potencia en Chasis Impresos (PETG):** El formato de celdas 18650 ofrece una densidad de energía superior, empaquetando la autonomía y potencia necesarias para completar las 3 vueltas reglamentarias a máxima velocidad dentro de un volumen cilíndricos compacto y ligero. Esto reduce la masa inercial total del vehículo y evita sobrecargar mecánicamente el segundo piso del chasis.

> [!IMPORTANT]
> **Masa de Tierra Común:** Al alimentar el tren motriz y el servo directamente desde el pack 18650 (7.4V) y el circuito lógico desde el regulador de Arduino, es estrictamente crítico unificar la masa (`GND`) de la batería con la de la placa de control. La ausencia de una referencia de tierra común introduce ruido flotante en las líneas de control del servo y corrompe los pulsos lógicos del puente H.

## 2. Topología del Hardware y Estándar de Colorimetría Crítica del Cableado

En el diseño avanzado de Trivilyn3.0, el cableado no se considera un mero elemento de interconexión pasiva, sino un subsistema crítico de la arquitectura de potencia y señal. Para mitigar los riesgos de error humano en los fosos (*pits*) bajo situaciones de alta presión, optimizar la mantenibilidad del vehículo y anular los acoplamientos electromagnéticos parásitos, hemos estandarizado de forma estricta la siguiente colorimetría industrial:


----
## 3. Topología del Hardware (Percepción y Control)

El sistema electrónico se divide en tres capas fundamentales: Control Central, Visión Artificial y Telemetría Ultrasónica.

* *Microcontrolador Central:* Arduino Mega 2560. Elegido por su alta disponibilidad de pines, múltiples puertos serie por hardware y memoria extendida para gestionar las instrucciones lógicas de navegación.
* *Coprosamiento de Visión:* Cámara inteligente *HuskyLens*.
    * Protocolo de Comunicación: Conectada mediante interfaz *UART (Puertos dedicados TX/RX)* del Arduino Mega. Esta conexión por hardware garantiza una transmisión de datos de telemetría bidireccional limpia, de alta velocidad y libre de las colisiones de bus comunes en entornos I2C satura-dos.
* *Matriz de Proximidad (Trifocal):* 3 Sensores Ultrasónicos *HC-SR04* posicionados estratégicamente (Izquierda, Centro, Derecha) para generar un mapa perimetral de obstáculos en tiempo real.

---

## 4. Presupuesto de Potencia (Power Budget) y Distribución Independiente

Para erradicar el problema más crítico en robótica móvil —los reinicios del procesador por caídas de tensión (voltage sags) y el ruido de alta frecuencia en los sensores— el diseño eléctrico de Trivilyn3.0 rechaza los buses comunes y opta por un **aislamiento físico total mediante tres bancos de energía independientes** (6 celdas 18650 en total). 

Esta arquitectura separa de forma redundante las cargas lógicas de las inductivas, aplicando además una estrategia de distribución de masas donde solo el banco de tracción utiliza el sistema de extracción rápida por corredera.

### Desglose Eléctrico de los Bancos de Energía

| Subsistema Alimentado | Configuración de Baterías | Voltaje Nominal | Regulación / Modulación | Propósito y Ventaja de Ingeniería |
| :--- | :---: | :---: | :---: | :--- |
| **Línea 1: Lógica y Percepción** | 2x 18650 en Serie | 7.4V - 8.4V | Voltaje Directo de Batería (Línea Limpia) | Alimenta directamente al Arduino Mega a través de su pin de entrada regulada. El bus interno distribuye los 5V puros a la cámara HuskyLens y los 3 sensores HC-SR04. Al ser una línea dedicada sin motores acoplados, la HuskyLens procese imágenes en alta velocidad sin caídas de telemetría por ruido. Las celdas están fijas en el segundo piso. |
| **Línea 2: Actuación de Dirección** | 2x 18650 en Paralelo | 3.7V - 4.2V | *Elevador de Voltaje (Step-Up)* a **6.5V Constantes** | Dedicado exclusivamente al servomotor HobbyPark de 35kg de la dirección SbW. La configuración en paralelo duplica la capacidad de corriente disponible. El Step-Up garantiza un torque de salida idéntico y preciso, incluso si las celdas empiezan a descargarse. Alojado de forma fija en el segundo piso. |
| **Línea 3: Sistema de Tracción e Iluminación** | 2x 18650 en Serie | 7.4V - 8.4V | *Step-Up (10V)* + *Step-Down Secuencial (3.2V)* | **Este es el único banco alojado en la corredera inferior en cola de milano**. Alimenta el motor DC a través de un módulo Step-Up de alta potencia regulado a 10V fijos hacia el Driver MOSFET para maximizar la velocidad (PWM 190). Adicionalmente, de la salida de 10V se deriva un regulador Step-Down secundario a 3.2V dedicado en exclusiva a la red de LEDs, protegiéndolos de sobrevoltajes. |

---

### 📊 Tabla de Consumo Nominal y Pico de Componentes

El presupuesto de cargas eléctricas se calculó modelando el peor escenario dinámico coincidente en pista, incorporando las etapas de elevación y reducción de voltaje reales del sistema:

| Componente | Voltaje de Operación | Consumo en Reposo (Idle) | Consumo en Carga Máxima (Peak) | Banco de Alimentación | Impacto Sistémico en la Misión |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **Microcontrolador Arduino Mega 2560** | 7.4V (Vbat) | 50 mA | 80 mA | Banco 1 (Lógica Directo) | Cerebro lógico; procesa la máquina de estados y las lecturas analógicas/digitales. |
| **Cámara de Visión HuskyLens** | 5V | 220 mA | 380 mA | Banco 1 (Vía Bus 5V Arduino) | Algoritmos de IA para detección de señales de tráfico y pilares cromáticos. |
| **3x Sensores Ultrasónicos HC-SR04** | 5V | 45 mA (15 mA c/u) | 60 mA (20 mA c/u) | Banco 1 (Vía Bus 5V Arduino) | Red tri-sensorial para evasión de muros perimetrales mediante multiplexación temporal. |
| **Servomotor de Dirección HobbyPark (35kg)** | 6.5V | 100 mA | 2,500 mA (Stall) | Banco 2 (Dirección vía Step-Up) | Actuador de la cinemática Steer-by-Wire (SbW); alta demanda de corriente en virajes bruscos. |
| **Motor de Tracción DC (Turbo Snake)** | 10V | 300 mA | 4,500 mA (Stall) | Banco 3 (Tracción vía Step-Up) | Sistema de propulsión posterior a más de 15,000 RPM. Operar a 10V fijos maximiza el torque continuo en aceleración (PWM 190). |
| **Circuito de Iluminación (2x LEDs)** | 3.2V | 20 mA | 40 mA | Banco 3 (Vía Step-Down de 10V) | Iluminación de contraste para optimizar el umbral de detección de la HuskyLens en pista. |

---

> [!NOTE]
> **Auditoría de Capacidad de las Baterías y Mitigación de Riesgos en Fosos**
> Las celdas 18650 utilizadas en el sistema de dirección presentaban una etiqueta comercial de 8,800 mAh. Tras realizar un análisis basado en la densidad energética límite del litio y las dimensiones de la celda, el equipo de ROBOTEAMCRV determinó que este valor es nominal/falso (típico en el mercado de consumo masivo).
> 
> * **Mitigación y Factor de Seguridad:** Para el diseño seguro de Trivilyn3.0, estimamos una capacidad real de **2,200 a 2,500 mAh** por celda. Al conectar el Banco 2 en paralelo, la capacidad real efectiva se eleva a un rango de 4,400 a 5,000 mAh, asegurando corriente de sobra para el servo de 35kg. 
> * **Estrategia de Distribución de Masas por Pisos:** Para optimizar la estabilidad dinámica del vehículo, se decidió fijar las **4 celdas correspondientes a la Lógica (Banco 1) y a la Dirección (Banco 2) en la estructura del segundo piso**. Dado que estos subsistemas consumen menos potencia y no requieren recambios de emergencia, se priorizó su fijación estructural. Por el contrario, el Banco 3 (Tracción e Iluminación) opera bajo el régimen severo del Step-Up a 10V absorbiendo picos masivos de corriente. Por ello, justificamos mecánicamente colocar **únicamente estas 2 baterías en el cartucho de cola de milano del primer piso**. Esto nos permite realizar el recambio rápido (*Quick-Change*) del sistema motriz en menos de 10 segundos sin alterar el torque de la dirección ni desestabilizar el voltaje de los sensores fijos ubicados en el piso superior.

---

## 📈 Análisis de Rendimiento y Cálculo de Autonomía Real del Vehículo

Para validar la viabilidad operativa de Trivilyn3.0 en condiciones de competencia extrema, el equipo desarrolló un modelo matemático de descarga basado en la capacidad real auditada de nuestras celdas 18650 (2,500 mAh por celda). Al tener tres bancos de energía independientes, calculamos la autonomía teórica y real de cada subsistema de forma aislada para identificar el eslabón más débil de la cadena energética.

#### 1. Banco 1: Lógica y Percepción (2 celdas en Serie = 7.4V / 2,500 mAh)
Este banco alimenta al Arduino Mega de forma directa, el cual distribuye a la HuskyLens y los 3 ultrasonidos.
* Consumo promedio constante: 50 mA (Arduino) + 300 mA (HuskyLens promedio) + 45 mA (Sensores) = 395 mA (0.395 Amperios).
* Cálculo de Autonomía Teórica: Capacidad (2,500 mAh) / Consumo (395 mA) = 6.32 horas.
* Al no tener pérdidas por reguladores conmutados externos en esta línea, la autonomía neta estimada se mantiene firme en **5.8 horas de autonomía continua.**

#### 2. Banco 2: Actuación de Dirección (2 celdas en Paralelo = 3.7V / 5,000 mAh efectivos)
Este banco alimenta exclusivamente al servomotor de 35kg montado en el segundo piso mediante el elevador Step-Up a 6.5V. En una carrera de velocidad, el servo no está bloqueado todo el tiempo; estimamos un régimen de trabajo dinámico del 40%.
* Consumo promedio estimado en pista: 600 mA (0.6 Amperios).
* Cálculo de Autonomía Teórica: Capacidad efectiva (5,000 mAh) / Consumo (600 mA) = 8.33 horas.
* Aplicando Factor de Eficiencia del Step-Up (80%): 8.33 x 0.80 = **6.66 horas de autonomía continua.**

#### 3. Banco 3: Sistema de Tracción e Iluminación (2 celdas en Serie = 7.4V / 2,500 mAh)
Este es el banco alojado en el cartucho de cola de milano del primer piso. Alimenta el circuito Step-Up a 10V para el motor DC Turbo Snake y, en cascada, el Step-Down secundario de 3.2V para la iluminación. Elevar el voltaje a 10V incrementa la demanda de corriente en las celdas base.
* Consumo promedio severo demandado a las baterías en carrera: 2,300 mA (Motor a PWM 190 + pérdidas de conversión) + 30 mA (Leds corregidos por la eficiencia del Step-Down) = ~2,330 mA (2.33 Amperios).
* Cálculo de Autonomía Teórica en las celdas: Capacidad (2,500 mAh) / Consumo (2,330 mA) = 1.07 horas.
* Aplicando el Factor de Eficiencia combinado de la etapa de potencia (85%) y la degradación térmica por alta velocidad: 1.07 x 0.85 = 0.91 horas. Esto equivale a **54 minutos de autonomía en carrera pura a máxima velocidad.**

---

### 🏁 Conclusión del Análisis de Rendimiento (Criterio Quick-Change)

El desglose matemático final demuestra de forma contundente por qué el diseño de Trivilyn3.0 acertó al colocar **únicamente el Banco 3 en el sistema de corredera extraíble**. 

Mientras que el cerebro lógico y la dirección pueden operar por más de 5 horas seguidas sin necesidad de tocar las 4 baterías del segundo piso, el sistema de tracción consume la energía rápidamente debido a la enorme exigencia de elevar el voltaje a 10V estables para exprimir las 15,000 RPM del motor. 

Con 54 minutos de autonomía real bajo pruebas, Trivilyn puede completar holgadamente todas las rondas clasificatorias sin caídas de rendimiento. Sin embargo, el mecanismo de cola de milano nos permite sustituir este cartucho en los fosos de manera preventiva en solo 15 segundos, garantizando que el sistema motriz trabaje siempre en la cresta de su curva de potencia sin comprometer la electrónica sensible del segundo piso.

## 5. Mitigación de Fallas y Decisiones Críticas

### Aislamiento de Tierras (GND)

> [!IMPORTANT]
>  Al utilizar tres bancos de baterías físicamente separados, es estrictamente obligatorio interconectar todos los cables negativos (*GND Común*) en un solo nodo central del Arduino Mega. Sin esta referencia cero unificada, las señales lógicas UART de la HuskyLens y los pulsos de los ultrasonidos sufrirían de flotación, provocando lecturas erróneas o la pérdida completa de paquetes de datos.

### Lógica del Sistema de Iluminación Regulada (3.2V)
¿Por qué elevar el voltaje a 10V para luego regularlo a 3.2V en los LEDs?

1. *Estabilidad Lumínica:* Los motores de tracción generan picos de demanda masivos al arrancar o frenar. Si los LEDs se conectaran directo a la batería, parpadearían, afectando el balance de blancos y el umbral de reconocimiento de color de la HuskyLens.
   
2. *Filtrado de Ruido:* El elevador a 10V actúa como una "barrera de aislamiento". Al pasar luego por el regulador de 3.2V, los LEDs reciben una energía limpia y constante, asegurando que la HuskyLens siempre vea la pista con la misma intensidad de luz, eliminando falsos positivos en el reconocimiento de señales.

---

## 6. Interacción del Sistema (Pensamiento Sistémico)

El flujo secuencial de potencia y datos durante una maniobra compleja (ej. evasión u obstáculo en el estacionamiento) se ejecuta de la siguiente manera:

1. *Fase de Percepción:* Los 3 sensores HC-SR04 miden distancias de los bloques laterales a 5V estables. Simultáneamente, la HuskyLens procesa la pista y envía las coordenadas por el puerto serie Serial1 (TX/RX) del Mega.
2. *Fase de Procesamiento:* El Arduino Mega procesa las lecturas de proximidad y los datos de visión artificial de manera paralela gracias al ancho de banda libre de la conexión UART.

## 📡 Distribución Geométrica y Calibración de Sensores

Este capítulo detalla la fundamentación matemática, física y de diseño mecánico detrás de la disposición espacial de la red de sensores de Trivilyn3.0. La correcta ubicación geométrica del hardware de percepción es tan crítica como la optimización de los algoritmos de control; una desalineación de milímetros o de pocos grados en los vectores de lectura puede degradar por completo la fiabilidad del vehículo a altas velocidades.

## 1. Vector Frontal: Telemetría de Viraje y Geometría de Giro

El sensor ultrasónico frontal se encuentra montado estrictamente sobre el plano de simetría longitudinal del chasis ($X = 0$), en la sección más avanzada del parachoques. Su propósito principal es monitorear el vector de aproximación frontal (middleDistance) para disparar la transición al subestado de viraje de la Máquina de Estados Finitos (FSM).

### A. Física del Cono de Emisión y Ecos Parásitos

Los transductores piezoeléctricos del sensor HC-SR04 operan emitiendo ráfagas de ultrasonido a una frecuencia de 40 kHz. Este haz acústico posee una dispersión natural cónica con un ángulo de apertura de aproximadamente alfa ≈ 15° a 30° (dependiendo de la ganancia del transductor).

Para calcular el ancho del área de detección (W_detect) a una distancia de colisión crítica (d = 50 cm), empleamos la siguiente relación trigonométrica:

W_detect = 2 * d * tan(alfa / 2)

Para un ángulo de apertura nominal de alfa = 15°:

W_detect = 2 * 50 cm * tan(7.5°) ≈ 100 cm * 0.1316 = 13.16 cm

>[!CAUTION]
>Efecto de Rebote Multipath y Ruido por Suelo: Si el sensor frontal se posiciona a una altura inferior a $3\text{ cm}$ respecto al suelo, el lóbulo inferior del cono de emisión ultrasónico impactará contra la pista de la WRO, generando "ecos fantasmas" que el software interpretará como obstáculos frontales inexistentes. La altura óptima del sensor frontal en Trivilyn 3.0 está fijada a un mínimo de $4.5\text{ cm}$ sobre el nivel del suelo.

### B. Cinemática del Punto Dulce de Giro 42 cm \le d \le 52 cm bajo Dirección Steer-by-Wire

Esta calibración SbW elimina el deslizamiento lateral (derrape) al mantener ambas ruedas en el mismo arco de giro, logrando un ángulo de deflexión máximo de $\beta = 40^\circ$ por lado (izquierdo y derecho), lo que equivale a un barrido de dirección total de 80° de tope a tope (lock-to-lock). El rango de disparo del sensor frontal está directamente sincronizado con esta capacidad cinemática:

- Límite Inferior 42 cm: Gracias al agresivo ángulo de deflexión de 40° por lado provisto por el sistema SbW, el robot es capaz de realizar virajes sumamente cerrados. Si la aproximación desciende de 42°, el tiempo de respuesta del servomotor HobbyPark ($t_{\text{resp}} \approx 0.12 s y el momento lineal del chasis empujarán el parachoques delantero contra la pared exterior antes de que las ruedas completen la deflexión de 40°

- Límite Superior 52 cm): Iniciar el giro SbW de 40° de forma anticipada (lecturas frontales superiores a 52° cerrará demasiado rápido el radio de giro del chasis. Esto provocará que la rueda trasera interna "muerda" o choque directamente contra la esquina o vértice interno del muro.

## 2. Vectores Laterales: Control de Centrado Dinámico y Prevención de Cross-Talk

Los sensores ultrasónicos laterales se orientan de forma estrictamente ortogonal al eje longitudinal del chasis (90° la izquierda y derecha). Son los encargados de alimentar el bucle cerrado de microcorrecciones reactivas.

### A. Alineación Coaxial vs. Desfase Longitudinal

En prototipos anteriores, la desalineación longitudinal de los sensores laterales provocaba un desfase de tiempo en el cálculo del diferencial de distancia. En Trivilyn 3.0, ambos sensores laterales están posicionados exactamente sobre el eje del centro de masa (CoM) transversal.

Esta disposición garantiza que cualquier corrección de dirección generada por el algoritmo de control afecte por igual la lectura de ambos lados, evitando la inestabilidad por oscilaciones amplificadas (over-correction).

### B. Mitigación de Interferencia Cruzada (Cross-Talk)

Cuando dos sensores ultrasónicos idénticos operan en paralelo en un entorno cerrado y estrecho de $40\text{ cm}$, el pulso emitido por el sensor izquierdo puede rebotar de manera errática e ingresar en el receptor del sensor derecho.

Para erradicar esta interferencia física en Trivilyn3.0, el software implementa un protocolo de muestreo alternado temporal (secuenciado por flancos de reloj) gobernado por la librería NewPing de la siguiente manera:

<img width="1280" height="698" alt="image" src="https://github.com/user-attachments/assets/80062ac3-155d-4d2c-b181-e47e458e09c4" />



>[!IMPORTANT]
>Aislamiento Acústico del Soporte: El PETG de las piezas de la corredera puede propagar vibraciones mecánicas directamente del chasis al sensor en forma de "ruido de conducción sólida". Hemos diseñado paredes de acoplamiento de friction de 2 mm que rodean el cuerpo del transductor, actuando como un filtro mecánico pasivo que disipa las vibraciones por encima de los 20 kHz.

##  Sensor de Visión: Geometría de Proyección Tridimensional (HuskyLens)



---

### Configuración Espacial y Calibración del Ángulo de Cabeceo (Pitch)

El sensor de visión artificial HuskyLens está estratégicamente posicionado en el eje de simetría central de la sección superior frontal (segundo piso del chasis). Para optimizar la matriz de píxeles y el reconocimiento colorimétrico en la Ronda Abierta, la cámara no se dispone en paralelo al plano de la pista, sino que implementa un ángulo de inclinación descendente estático de cabeceo (Pitch, Theta_tilt) calibrado con precisión milimétrica.

Esta inclinación geométrica es crítica para:
* **Optimización del Campo de Visión (FOV):** Maximiza el área de barrido sobre el asfalto a corta y mediana distancia, asegurando la detección oportuna de las líneas de carril y códigos de color sin perder resolución en el horizonte lejano.
* **Transformación de Coordenadas Bidimensionales:** Permite al algoritmo de la máquina de estados proyectar la posición de los objetos del plano de la imagen (u, v) al plano real de la pista (X, Y), calculando la distancia matemática exacta hacia las marcas de referencia.
* **Aislamiento de Inercia Rotacional (Iz):** Al estar firmemente anclada al soporte híbrido del segundo piso, la línea de visión del sensor permanece estable frente a las desaceleraciones y transferencias de masa del vehículo durante los giros de 40 grados del sistema Steer-by-Wire (SbW).

---

## 📥 Sustentación de Valores Físicos en Pista

Para garantizar que el vehículo autónomo mantenga una navegación continua y fluida en la Ronda Abierta de la WRO 2026, el despeje de la ecuación se calibra bajo las siguientes restricciones operacionales:

1. **Garantía de Frenado Seguro:** El valor resultante de `d_min` se sincroniza con el tiempo de respuesta de la máquina de estados y la velocidad crucero del carro, asegurando que cualquier cambio de color o carril sea detectado antes de que el chasis pise la línea.

2. **Mitigación de Distorsión Óptica:** Al controlar estrictamente el ángulo `Theta_tilt`, se evita que la perspectiva de la cámara deforme la geometría de las marcas, manteniendo el margen de error del reconocimiento colorimétrico por debajo del 1.5%.

3. **Estabilidad Dinámica:** Esta relación matemática permite que el sistema Steer-by-Wire (SbW) anticipe el radio de giro óptimo en ambos sentidos de carrera (horario y antihorario) sin necesidad de recalibraciones físicas de última hora.

La cámara debe ser capaz de detectar tanto los pilares de color Rojo/Verde (cuya altura típica es de $15\text{ cm}$) como la línea de parqueo Magenta en el suelo. Para calcular la distancia de la zona ciega ($d_{ciega}$) por delante del robot, aplicamos la siguiente fórmula trigonométrica basada en la cotangente:

$$d_{min} = h_{sensor} \cdot \tan\left(90^\circ - \theta_{tilt} - \frac{FOV_{vertical}}{2}\right)$$

Definición de las variables:

$h_{cam} = 12.5\text{ cm}$ (Altura de la lente de la cámara en el tercer piso).

$V_{FOV} = 48^\circ$ (Campo de visión vertical de la HuskyLens).

$\theta_{tilt} = 22^\circ$ (Ángulo de inclinación o cabeceo descendente de la cámara).

Cálculo paso a paso en limpio:

Sumamos el ángulo de inclinación y la mitad del campo de visión vertical de la cámara:


$$22^\circ + \frac{48^\circ}{2} = 22^\circ + 24^\circ = 46^\circ$$

Calculamos la cotangente de ese ángulo acumulado ($46^\circ$):


$$\cot(46^\circ) \approx 0.9657$$

Multiplicamos el resultado anterior por la altura física de la cámara ($12.5\text{ cm}$):


$$d_{ciega} \approx 12.5\text{ cm} \cdot 0.9657 \approx 12.07\text{ cm}$$

Este ángulo óptimo de inclinación de $22^\circ$ reduce la zona ciega a tan solo $12.07\text{ cm}$ por delante de la carrocería. Esto garantiza que cuando el robot se aproxime a un pilar, la HuskyLens nunca lo pierda de vista antes de que el tren de dirección Steer-by-Wire inicie de forma autónoma la maniobra evasiva.

>[!CAUTION]
>Error por Reflexión Lumínica (Glint): Un ángulo de inclinación demasiado agresivo ($\theta_{\text{tilt}} > 35^\circ$) expone el sensor óptico a reflejos directos de las luminarias del recinto del evento sobre la pista brillante. Esto altera drásticamente los valores de saturación y tono de la imagen, provocando falsos negativos de detección (o confundiendo el Magenta del parqueo con Rojo). El valor de $22^\circ$ ha demostrado ser el umbral de mayor robustez bajo iluminación artificial variable.

## Sistema de Correderas de Precisión: Adaptabilidad en Pista

La gran lección de la temporada pasada fue la necesidad de ajustar físicamente la altura de lectura de los sensores. Las irregularidades del terreno de competencia y los desniveles milimétricos en el material de las paredes de la WRO exigen un ajuste ágil.


# Arquitectura Software y Estratrgia

## 📄 Resumen del Proyecto

Este documento técnico detalla la arquitectura lógica, el modelado algorítmico y la estrategia de control dinámico del vehículo autónomo **Trivilyn 3.0**, desarrollado por nosotros (TEAMROBOTICACRV) para competir en la categoría *Future Engineers* de la *World Robot Olympiad (WRO)*. El sistema de software y hardware ha sido diseñado y optimizado para resolver con máxima eficiencia dos escenarios de alta complejidad en una pista confinada de 3 × 3 metros:

* **Ronda Abierta (Navegación Estocástica por Ecosonación):** Ejecución de navegación autónoma en un entorno variable con restricciones de paso críticas (pasillos estrechos de hasta 40 cm). El control se basa exclusivamente en una matriz ultrasónica periférica de alta frecuencia para el mapeo tridimensional de distancia, el conteo automatizado de esquinas y la ejecución de una maniobra de estacionamiento de precisión tras completar de forma exitosa las tres vueltas reglamentarias.
* **Ronda Cerrada (Navegación Dinámica con Visión Artificial):** Gestión de navegación libre y evasión proactiva de obstáculos aleatorios diferenciados cromáticamente (Rojo/Verde), procesados en tiempo real mediante el sensor de visión computacional HuskyLens. El vehículo implementa un sistema de control en lazo cerrado (*closed-loop*) que integra filtros digitales para el autocentrado constante, algoritmos de rectificación cinemática ante colisiones estructurales y una lógica de fin de carrera gobernada por la segmentación y detección precisa de un marcador de color Magenta.

# Ronda Abierta

## 📊 Diagrama de flujo Open challenge

La **Ronda Abierta** de **Trivilyn 3.0** está gobernada por un sistema de navegación autónoma basado exclusivamente en el análisis de variables físicas y volumétricas mediante la **matriz ultrasónica periférica**. Al operar sin asistencia óptica, el vehículo autónomo se enfrenta al reto de cartografiar el entorno en tiempo real basándose únicamente en el tiempo de vuelo (ToF) de las ondas mecánicas de alta frecuencia emitidas por sus sensores.

El software desarrollado por el equipo para esta ronda implementa un algoritmo de barrido estocástico continuo. El microcontrolador interroga de forma secuencial a cada sensor ultrasónico para triangular la posición de las paredes de la pista. La lógica de control procesa estas lecturas milimétricas y calcula instantáneamente el diferencial de potencia en los motores. Esto permite que el robot esquive las paredes manteniendo la velocidad de crucero máxima permitida por el chasis, evitando colisiones ciegas y compensando la inercia rotacional sin desviarse del vector de ataque general.

A continuación, se detalla la arquitectura algorítmica y el diagrama de flujo que gobierna el comportamiento, las rutinas de muestreo ultrasónico y los criterios de evasión del prototipo durante la ejecución de la ronda abierta:

<img width="906" height="752" alt="image" src="https://github.com/user-attachments/assets/f2a88623-6a1f-42c0-80fa-0eabb43b0d0b" />

  ---
## ⚙️ Arquitectura del Software (Máquina de Estados de Misión) <a id="maquina-estados"></a>

El software se basa en un modelo de Control Reactivo gestionado por una Máquina de Estados Finitos (FSM) jerárquica. Este modelo permite coordinar tanto el control dinámico del vehículo como la lógica de misión
(conteo de vueltas y estacionamiento).

### A. Fase de Inicialización y Calibración Estática
Para garantizar un arranque reproducible, se implementó una rutina de configuración única controlada por la variable de estado pepe(inicializada en 0).

> [!NOTE] 
> El uso de nombres no convencionales para las variables ( pepe, grasa, tilin,lecler,lewis) es un legado de las fases de prototipado de 2024. Lo que inició como una dinámica de equipo para mitigar la fatiga en el laboratorio, se ha mantenido como un estándar de identidad en nuestro código, simbolizando la evolución histórica del proyecto.

Alineación del Tren Delantero: Mediante la instrucción myservo.write(75), el sistema establece un ángulo absoluto de dirección. A diferencia de un motor de tracción, el servomotor permite fijar una posición angular exacta, eliminando desviaciones en el vector de salida.

Gestión de Inercia: Integramos un delay()estratégico para permitir la transición del estado de reposo al movimiento cinematográfico, estabilizando el voltaje del sistema antes de iniciar la lectura de sensores.

Bloqueo de Estado ( pepe++): Este incremento actúa como un interruptor lógico irreversible. Al cambiar el valor de la variable, el flujo del programa garantiza que la secuencia de salida no se reejecute, cediendo el control total a la lógica autónoma.

### B. Algoritmo de Navegación y Evasión Dinámica

El sistema procesa la información de una red tri-sensorial ultrasónica mediante dos lógicas principales:

1.Corrección de Trayectoria (Control Bang-Bang): 
El vehículo monitorea constantemente los vectores laterales ( leftDistancey rightDistance). Ante un umbral crítico de aproximación (< 25cm), el sistema activa microajustes de dirección . Estos son pulsos de corrección de 25 ms en ángulos específicos (73°/115°) que rectifican el rumbo sin inducir oscilaciones incontrolables ( efecto zig-zag ), manteniendo el centro de masa alineado con el carril. 

2.Cinemática de Viraje (Gestión de Esquinas): 
La maniobra de giro se dispara cuando el sensor frontal detecta un rango de colisión inminente entre 42 cm y 52 cm.

- Optimización de la Radio de Giro: Este rango de 10 cm es el "punto dulce" técnico. Girar antes de los 52 cm provocaría un impacto con el vértice interno; girar después de los 42 cm reduciría el ángulo de ataque, provocando una colisión con el muro exterior.

- Compensación de Torque: Durante el viraje, el servo alcanza su deflexión máxima y el PWM del motor aumenta de 80 a 180 . Este incremento de potencia es fundamental para vencer la fricción lateral generada por el ángulo de las ruedas y garantizar que el impulso cinético complete la curva con éxito.

### C. Protocolo de Finalización y Estacionamiento

La misión concluye mediante una validación de estado acumulativo. Al cumplirse la condición if (pepe > 12), que representa las 12 intersecciones de las 3 vueltas reglamentarias, el robot inicia su rutina de cierre:

- Avance de Seguridad: Se ejecuta una traslación final controlada por tiempo ( 2000 ms).

- Posicionamiento final: El sistema asegura que el eje posterior cruce la línea de meta, logrando el estacionamiento autónomo dentro del cuadrante de origen bajo las normativas de la WRO.
  
## Justificación de la Estrategia 

La arquitectura del software de Trivilyn 3.0 no solo se encarga de la navegación reactiva, sino que gestiona una base de datos de estado interno mediante variables de control para garantizar la adaptabilidad y el éxito de la misión sin intervención humana.

### 1. Heurística de Decisión: Algoritmo "Tilin/Grasa"

Para que el vehículo sea completamente autónomo ante cualquier configuración o sentido de la pista, implementamos una lógica de decisión binaria e irreversible que se dispara en la primera intersección crítica.

#### A. Diagrama de Flujo Lógico de Decisión en Lazo Cerrado
El siguiente esquema representa el pipeline de toma de decisiones del microcontrolador al encontrarse con la primera pared frontal del circuito:

<img width="1280" height="698" alt="image" src="https://github.com/user-attachments/assets/a67e4347-520c-4d58-8ea3-244f883ccd23" />


### 2. Gestión de Actuadores y Dinámica de Potencia

El código maneja perfiles de velocidad diferenciados para optimizar el consumo y la tracción:

Velocidad de Crucero ( carSpeed = 65): Configuración para tramos rectos, optimizando la estabilidad de lectura de los sensores.

Velocidad de Maniobra ( carSpeedCurvas = 90): Durante las funciones derecha()e izquierda(), el PWM aumenta para vencer la resistencia por fricción de los neumáticos de 43mm en el momento del giro.

### 3. Control de Lazo Cerrado: Micro-ajustes Laterales

Para mitigar el error acumulado, el código implementa una rutina de activador reactivo:

Umbral de colisión (9 cm): Si cualquiera de los sensores laterales detecta una proximidad menor a 9 cm, se interrumpirá el flujo principal para ejecutar un pulso de corrección de 30 ms .

El sistema utiliza centros de dirección específicos según el sentido de la carrera ( centroAo centroH), compensando mecánicamente cualquier desviación propia del chasis impreso en 3D.

### 4. Procesamiento de Señal y Filtrado de "Eco Nulo"

Debido a que las paredes de la WRO pueden generar reflexiones erráticas, se implementó una condición de validación en las lecturas:

Filtro distance > 1: Esta instrucción filtra las lecturas de 0 cm que genera la librería NewPingcuando no recibe retorno. Al ignorar estos "ecos nulos", evitamos que el robot realice maniobras de evasión ante obstáculos inexistentes.


### 5. Registro de Variables de Control (Telemetría Interna)
| Variable | Función Técnica | Propósito en Misión |
| :--- | :--- | :--- |
| pepe | Contador de Estados | Gestión de arranque, conteo de esquinas y fin de carrera. |
| tilin / groso | Banderas de Sentido | Bloqueo lógico del sentido de la pista (Horario/Antihorario). |
| lewis / lecrer | Contadores de Rendimiento | Registro interno de maniobras ejecutadas por flanco. |
| middleDistance | Vector frontal | Disparador de subrutinas de giro (Umbral 32 cm). |

## Estrategia de Competición y Gestión de Riesgos

Dada la naturaleza de la competencia, donde se dispone de dos intentos por ronda, hemos diseñado una estrategia de dos fases basada en el compromiso entre confiabilidad y velocidad.

 1.Protocolo de Ejecución de Ronda
   
- Primer Intento (Modo Consistencia - 100% Fiabilidad):

 El objetivo principal es asegurar el puntaje máximo de la misión.

se configuro un PWM limitado a 100-140.

Se logro un tiempo de 40 Segundos . Al reducir la velocidad, eliminamos la inercia excesiva en las curvas de los pasillos aleatorios, permitiendo que los sensores ultrasónicos tengan una ventana de lectura óptima y que los microajustes laterales sean casi imperceptibles.

- Segundo Intento (Modo Alto Rendimiento - 80% Fiabilidad):

Reducción drástica del tiempo para mejorar el desempate ( tie-break ).

configuramos PWM dinámico (hasta 190 en curvas).

Realizando esta prueba obtuvimos como resultado un Tiempo récord de 25 segundos . De este modo, el robot opera al límite de sus capacidades mecánicas y lógicas.

## Análisis de Rendimiento: Optimización de Tiempo vs Fiabilidad

En el desarrollo de Trivilyn 3.0 , el enfoque principal fue la navegación en Centro Aleatorio (pasillos de 40 cm). Realizamos una comparativa entre nuestra configuración base y nuestra configuración de alto rendimiento para la WRO.

- Prueba de Consistencia (Lenta)	40 seg	100%	Navegación conservadora, correcciones suaves

  <img width="1221" height="618" alt="image" src="https://github.com/user-attachments/assets/0cc12374-9470-4a28-a08c-0c9216a4e385" />


- Prueba de Velocidad (Rápida)	25 seg	80%	Agresividad en curvas (PWM 190) y aceleración máxima.

  <img width="1231" height="620" alt="image" src="https://github.com/user-attachments/assets/d65d0253-3925-47d5-8445-2d506e6343b8" />

  
###  Justificación Técnica de la Tasa de Error en Alta Velocidad

Pasar de 40 a 25 segundos implica duplicar la velocidad media del vehículo. Según nuestros datos, el descenso del 20% en la confiabilidad se debe a tres factores físicos críticos:

1. Latencia de Muestreo Ultrasónico (Sensor Lag)
   
A máxima velocidad, el robot registra más distancia entre cada pulso del sensor ( sonar.ping_cm()).

Efecto: En un pasillo aleatorio de 40 cm, el margen de maniobra es mínimo. Si el sensor emite un pulso y el robot se mueve 10 cm antes de recibir el eco, la decisión de giro se toma con una posición "desfasada", provocando que el chasis golpee la esquina interna.

2. Inercia y Momento Lineal
   
El peso del segundo piso (140 mm de ancho) y los componentes generan una inercia que es difícil de detener instantáneamente.

 Al entrar en una curva a 25 segundos de ritmo, la fuerza centrífuga empuja al robot hacia el muro exterior. Aunque el software ordene girar, los neumáticos de caucho de 43mm pueden sufrir un deslizamiento lateral ( deriva ), alterando el ángulo de salida y obligando al sistema de microajustes a trabajar al límite.

3. Ruido Ultrasónico por Vibración Mecánica
   
A PWM 180, los motores de 15,000 RPM generan vibraciones de alta frecuencia que pueden interferir con la cápsula del sensor ultrasónico.

Efecto: Esto genera lecturas "fantasmales" o ecos falsos. Aunque nuestro filtro distance > 1elimina los ceros, la vibración puede causar variaciones de ±2 cm en la lectura, suficientes para disparar una corrección lateral innecesaria en un pasillo tan estrecho como el de 40 cm.

 ## Conclusión: 
 
- Trivilyn 3.0 ha pasado de ser un diseño reactivo simple a un sistema autónomo capaz de analizar su entorno, corregir su trayectoria milimétricamente y tomar decisiones lógicas basadas en la historia de la misión. La combinación de una estructura mecánica robusta y un software resistente nos permite afrontar la competencia con un alto grado de confianza.

## Ensayos Cinemáticos y Navegación Continua.

- [Reto abierto Antihorario](https://youtu.be/W1Fzfe-SBlg?si=Vv0s_NBfPZ1VnEKG)

- [Reto abierto Horario](https://youtu.be/3rMMLZdWGc4?si=xGYyjhSCZMpKUZd_)


# Ronda cerrada 

El firmware de la Ronda Cerrada de **Trivilyn 3.0** está diseñado bajo un paradigma de **Control Reactivo Híbrido** de ejecución síncrona en un microcontrolador ATmega2560 (Arduino Mega). El sistema unifica la telemetría probabilística de una matriz de tres sensores ultrasónicos HC-SR04 y el procesamiento de visión computacional en tiempo real de la cámara inteligente HuskyLens para la toma de decisiones críticas en milisegundos.

---

## 📊 Diagrama de flujo closed challenge

Para garantizar la repetibilidad de los resultados, la estabilidad en pista y una toma de decisiones eficiente en milisegundos, la lógica de control de **Trivilyn 3.0** se estructuró formalmente bajo el modelo de una **Máquina de Estados Finitos (FSM)**. Esta arquitectura de software fragmenta el comportamiento dinámico del vehículo autónomo en estados discretos, mutuamente excluyentes y gobernados por transiciones estrictas. Las condiciones de transición dependen directamente del flujo continuo de datos provenientes del vector sensorial (HuskyLens y matriz ultrasónica).

La implementación de este modelo conceptual no solo previene bloqueos en el hilo principal de ejecución del microcontrolador, sino que optimiza los ciclos de reloj al jerarquizar los procesos. De este modo, los algoritmos de evasión de emergencia tienen prioridad absoluta sobre las tareas secundarias de telemetría y navegación de crucero. 

A continuación, se presenta el mapa analítico y el diagrama de flujo detallado que gobierna la sincronización, los bucles de control y los criterios de decisión que determinan el comportamiento autónomo del prototipo en tiempo real:

<img width="1185" height="896" alt="image" src="https://github.com/user-attachments/assets/47361b28-2b61-4326-98ea-6a762af9a9ea" />


### A. Fase de Inicialización y Calibración del Vector de Ataque

Para asegurar un comportamiento cinemático simétrico desde el primer milisegundo de la carrera, el firmware ejecuta una rutina de arranque único. En esta etapa, las variables críticas del sistema se estructuran bajo métricas de rendimiento dinámico, abstrayendo los identificadores de desarrollo hacia funciones formales de ingeniería:

* **Calibración de Punto Neutro Coaxial (`centro`):** Mediante la instrucción `myservo.write(80)`, el tren delantero ejecuta un pulso de orientación inicial, seguido por un ajuste a `94°`. Este desfase calibrado absorbe las tolerancias físicas del puente de dirección impreso en PETG y suprime la deriva lateral (*drifting*).
* **Control de Tracción Principal (`carSpeed`):** Modulación por Ancho de Pulsos (PWM) balanceada entre estabilidad en rectas (`PWM 50`) y par de fuerza incremental en curvas o bloques de color (`PWM 70`).
* **Secuencia de Escape Inicial y Bloqueo (`pepe`):** Variable de control inicializada en `0`. Al arrancar, el robot ejecuta un avance rectilíneo retrasando la activación de los lazos de interrupción por `1000 ms` mediante `forward()`. Esto estabiliza el voltaje del sistema y evita falsos positivos ópticos. Acto seguido, el incremento `pepe++` actúa como un interruptor lógico irreversible (*single-shot*) que transfiere el control a la FSM de exploración activa.
* **Registro de Fin de Carrera:** Cuando este mismo contador acumulativo supera el umbral crítico de evasiones (`pepe > 12`), el firmware interpreta la culminación de las 3 vueltas, ejecuta una subrutina de frenado dinámico y detiene el tren motriz por completo de forma reglamentaria.
* **Filtros de Histéresis Temporal (`winnie` / `winnieV`):** Retardos temporales dinámicos (`delay(220)`) aplicados tras la detección de bloques de color para evitar que los rebotes ópticos (*chatter*) reanuden la búsqueda antes de que el chasis complete físicamente la maniobra de rebase.

---

### B. Lazo de Telemetría Ultrasónica y Evasión Periférica (Matriz Tri-Sensorial)

El vehículo procesa el entorno mediante tres transductores HC-SR04 gestionados por la librería de alta eficiencia `NewPing`. Esta configuración evita los bloqueos críticos del procesador (asociados al uso de `pulseIn`) y computa distancias simultáneas para resolver el centrado dinámico dentro del pasillo de 100 cm.

---

### 1. Lógica de Evasión Crítica Frontal

- El sistema de navegación de proximidad utiliza la librería optimizada `NewPing` para gestionar tres transductores ultrasónicos en una configuración de triple flanco (Izquierdo, Central, Derecho). Esta matriz computa distancias simultáneas para evitar colisiones contra los muros de la pista:

La maniobra de emergencia se dispara cuando el sensor frontal (`middleDistance`) registra una barrera inminente en el rango de `1 cm a 3 cm`. El microcontrolador suspende el procesamiento de imágenes y evalúa de forma binaria los flancos laterales:
* **Si `leftDistance <= rightDistance`:** Se asume proximidad crítica al muro izquierdo. Se activan las banderas de bloqueo interno (`tilin++`, `lecrer++`) y se ejecuta la subrutina `derecha()`, la cual invierte el sentido de tracción (`back()`) y deflexiona el servo a `70°` para pivotar el frente.
* **Si `leftDistance > rightDistance`:** Se detecta proximidad al muro derecho. Se activan las banderas de flanco opuesto (`grasa++`, `lewis++`) y se gatilla la subrutina `izquierda()`, aplicando una reversa con deflexión angular de `125°` para liberar el chasis de la colisión.

#### 2. Lazo Cerrado de Microajustes Proporcionales Laterales
Para evitar que el robot golpee los muros en los tramos rectos de los pasillos aleatorios, el firmware monitorea continuamente los flancos laterales en un rango de seguridad de `40 cm`:
* **Proximidad Izquierda (`leftDistance <= 40 cm`):** El servo aplica de forma instantánea un ángulo de ataque de `105°` hacia la derecha durante `30 ms` antes de retornar al punto neutro (`centroH`).
* **Proximidad Derecha (`rightDistance <= 40 cm`):** El servo desvía la dirección a `75°` hacia la izquierda durante `30 ms` antes de restablecer el rumbo neutro (`centroA`).
Este algoritmo actúa como un corrector de rumbo continuo que estabiliza el avance del robot sin inducir inercias parásitas.

 A continuación se detallan las justificaciones técnicas por las cuales el equipo implementóNewPing :

- Eliminación del Bloqueo del Procesador ( Código sin bloqueo )
La función nativa de Arduino pulseIn()es bloqueadora . Cuando se ejecuta, el microcontrolador detiene por completo el hilo del programa principal esperando a que el pin de Echo cambie de estado.

Si un obstáculo está lejos o el pulso se pierde (eco nulo), pulseIn()puede congelar el procesador hasta por 1 segundo (por su tiempo de espera por defecto).

A una velocidad de carrera donde el motor Turbo Snake gira a 15.000 RPM, un retraso de incluso 50 ms significa que el robot avanza a ciegas varios centímetros, provocando una colisión ineludible.

Solución de NewPing: Utiliza interrupciones de hardware y temporizadores internos altamente optimizados que permiten realizar el muestreo en un esquema no bloqueante . El procesador solicita la lectura y puede continuar ejecutando la lógica de la cámara HuskyLens o los movimientos del servo mientras el hardware calcula el eco.

- Gestión Eficiente de Múltiples Sensores en Paralelo
Trivilyn 3.0 utiliza una matriz trisensorial (Izquierdo, Centro, Derecho). Leer tres sensores de forma secuencial con el método clásico multiplica el tiempo de retraso por tres.

NewPingestá diseñado específicamente para gestionar arreglos de múltiples sensores mediante un método de programación síncrona por intervalos. Permite intercalar los pulsos acústicos (ajustados en el firmware a delay(50)) evitando el asincronismo o solapamiento acústico (que el eco del sensor izquierdo sea recibido incorrectamente por el sensor central) sin comprometer el ciclo de reloj del ATmega2560.

- Filtrado Integrado de Datos Erráticos ( Filtrado Digital )
Los sensores de ultrasonido HC-SR04 sufren constantemente de ruido acústico debido a las vibraciones mecánicas del chasis a PWM 180 y las reflexiones parásitas en las esquinas de la WRO.

El método clásico requiere que el programador desarrolle manualmente bucles y promedios matemáticos, lo que satura la memoria dinámica.

Solución de NewPing: Cuenta con la función optimizada sonar.ping_median(votos), la cual realiza múltiples lecturas consecutivas a nivel de registros de hardware, descarta los valores atípicos (picos de ruido) y devuelve la mediana estadística del rango real. Esto proporciona una telemetría limpia y estabiliza los microajustes del servo de dirección.

- Control del Fenómeno de "Eco Nulo" y Retorno Cero
Cuando un pulso ultrasónico choca contra una superficie inclinada o un material que absorbe el sonido (como ciertos plásticos o acrílicos de la pista), el eco nunca regresa al receptor.

Con el código nativo, esto genera lecturas erráticas o tiempos de espera máximos destructivos.

Solución de NewPing: Si el pulso supera la distancia máxima configurada ( MAX_DISTANCE 400), la librería aborta inmediatamente la espera y devuelve un valor de 0 cm. Esto permitió al equipo diseñar el filtro condicional estricto if (middleDistance <= 3 && middleDistance > 1)para ignorar estos ceros lógicos (ecos nulos) y evitar que el robot ejecute volantazos o correcciones fantasma ante pasillos completamente vacíos.

---

El robot ignora los bloques lejanos y solo activa las rutinas de rebase cuando el objeto ingresa al área de influencia crítica, evaluando su posición respecto al eje central de la pantalla (`xOrigin = 188`).

### C. Matriz de Decisiones Ópticas Basada en Firmas de Color:

| ID Registrado | Clasificación Óptica | Ubicación en Pantalla | Subrutina Ejecutada | Dinámica del Rebase en Pista |
| :---: | :--- | :--- | :---: | :--- |
| **ID 1, 2, 3** | Pilar Rojo | `xOrigin >= 188` (Derecha) | `rojoderecha()` | Deflexiona a `130°` (izq), acelera a `PWM 70` por `700ms`, contragira a `63°` por `1250ms` para evadir por fuera y recupera el centro. |
| **ID 1, 2, 3** | Pilar Rojo | `xOrigin < 188` (Izquierda) | `rojoizquierda()` | Deflexiona a `125°` (izq), modula velocidad por `500ms`, contragira a `65°` por `970ms` para esquivar el bloque por el flanco interno. |
| **ID 5, 6** | Pilar Verde | `xOrigin <= 135` (Izquierda) | `verdeizquierda()` | Deflexiona a `60°` (der absoluta), sostiene el avance por `700ms`, contragira a `133°` por `1350ms` para equilibrar y estabiliza a `centro`. |
| **ID 5, 6** | Pilar Verde | `xOrigin > 130` (Derecha) | `verdederecha()` | Deflexiona a `70°` (der), desplaza el chasis por `500ms`, contragira a `130°` por `620ms` y cierra la maniobra de rebase limpio. |

>[Nota]
> Las firmas de color duplican múltiples IDs (IDs 1, 2, 3 para Rojo / IDs 5, 6 para Verde) en el algoritmo para dar soporte continuo a los bloques aprendidos bajo diferentes condiciones de luz artificial y degradaciones cromáticas en el recinto de la competencia.*

---

### D. Protocolo de Fin de Carrera y Parada de Seguridad

La conclusión de la Ronda Cerrada se gestiona de manera automatizada mediante la variable acumulativa de ciclos de evasión (`pepe`). Al cumplirse la condición condicional `if (pepe > 12)`, que representa de forma estadística la culminación de las 3 vueltas reglamentarias del circuito:
* El firmware ejecuta un avance lineal residual de posicionamiento.
* Desenergiza los canales del puente H L298N aplicando un estado de baja impedancia absoluta mediante la función `stop()`.
* Detiene el reloj del microcontrolador de forma indefinida mediante un bloqueo secuencial (`delay(1000000000)`), asegurando que el robot permanezca estático dentro del cuadrante de meta y evitando penalizaciones por desborde de pista.

---

# Pensamiento Sistémico y Decisiones de Ingeniería 


## Temporada 2024 Rexbot1.0 

Trivilyn, a través de los años, ha tenido muchos cambios desde su primera versión en 2024 hasta lo que es el día de hoy.

2024 Rexbot 1.0: Principalmente, su diferencia es el tamaño y sus mecanismos. Esta versión es muy rudimentaria, hecha con materiales reciclados. Este robot tuvo tres versiones principales durante su transcurso para llegar a la final internacional de Turquía.

1.ª Regional (Mérida):

Su chasis estaba conformado por dos niveles: la planta inferior (base) fue seleccionada de un kit ya prefabricado y su planta superior fue cortada con un Dremel, con bastantes imperfecciones. Su dirección fue extraída de un vehículo a control remoto con un sistema de corredera que funcionaba con un servomotor SG90 que, al girar para un lado, sube la corredera y, al bajar, tenía el efecto contrario; obtenía así un efecto palanca hacia los lados para mover sus ruedas delanteras con un eje que las une, hecho con acetato.

<img width="540" height="610" alt="WhatsApp Image 2026-05-02 at 3 45 30 PM" src="https://github.com/user-attachments/assets/6b317619-f90c-4da6-9673-602f6808ba73" />
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/4567f543-373a-48aa-b031-3e49976f67c4" />

Por parte de tracción, tenía un motor DC de 5 V extraído de un vehículo a control remoto con su caja de engranajes. Para su detección utilizaba un sensor ultrasónico en la parte frontal; como placa (cerebro) utilizaba un Arduino Mega. Alimentado todo por dos baterías 18650 de 3.8 V, este modelo tuvo muchísimos fallos, los cuales fueron:

1.Falta de potencia en ambos motores: tanto el servo no lograba mover la dirección eficientemente, como a la tracción con el motor DC le costaba mucho avanzar a Rexbot 1.0.

2.Falta de detección a los costados para alcanzar un buen desempeño en la ronda abierta (falta de sensores ultrasónicos).

3.Falta de sensor ocular para la ronda cerrada (cámara).

4.Su dirección tenía un rango de giro muy corto, lo que provocaba que, para dar las curvas a 90 grados, tuviera que retroceder y avanzar.

5.Falta de baterías o fuente de energía: solamente utilizamos dos baterías 18650. Con Rexbot 1.0 logramos hacer la ronda abierta.

## Nacional Caracas 2024

Para Rexbot 1.25 logramos corregir diferentes errores, pero aún no era lo suficientemente ágil, ya que estaba constituido por un gran tamaño, y su mayor fallo: la detección de colores, ya que utilizamos un sensor RGB. Este prototipo cuenta con su base principal y una superior; en la base inferior contiene el sistema de dirección y el sistema de tracción. Ya aquí corregimos su problema de giro y de torsión. De la siguiente forma:

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/faed6657-303a-47ff-9fc6-edd169ceeb7b" />

Su sistema de dirección ahora es tipo palanca; este sistema de dirección cuenta con una palanca que va fija desde el brazo del servomotor hasta el eje de una de las ruedas, que conecta con la otra. Así, el servomotor, al girar hacia la izquierda o derecha, mueve esa palanca. Tiene un sistema de calibración hecho con un tornillo y una especie de tuerca para así calibrar y que las ruedas no queden torcidas, evitando que el prototipo vaya desviado. Cabe recalcar que este fue uno de los mayores fallos; con muchas pruebas y al probar con diferentes métodos, nunca logramos la precisión necesaria para llegar a un rendimiento del 100%.

## Final internacional Turquía 2024 

(Rexbot 1.5): Este prototipo no obtuvo muchos cambios estructurales desde la nacional en Caracas, pero sí en su rendimiento. Su mayor modificación fue aumentarle el tamaño y agregarle un sensor ocular: la cámara HuskyLens.

Esta nos ayudó mucho en la detección de objetos y su color (señales de tráfico), ya que contiene una IA integrada que funciona de la siguiente manera: captura los valores RGB, los procesa y, mediante los resultados obtenidos, envía un ID previamente aprendido.

Su mayor error residió en el sistema de tracción y en su tamaño, ya que medía 25 x 20 cm , alcanzando casi los límites preestablecidos. Por su volumen y poca agilidad, se nos hacía muy complicado estacionar y esquivar objetos. Para obtener más información sobre este proyecto y nuestros antecedentes, pueden consultar nuestro GitHub de ese año:https://github.com/ROBOTEAMCRV/roboteamCRV.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/df8c4775-64dc-434d-8a1c-3e324067e544" />


# Temporada 2025 Rexbot2.0 

Para la etapa de las regionales, comenzamos el diseño desde cero con una reestructuración completa, lo que nos permitió corregir la mayoría de los errores cometidos en versiones anteriores.

Iniciamos diseñando el sistema de dirección y determinando el rango de giro necesario. Después de investigar y analizar los fallos anteriores, optamos por un sistema de dirección Steer-by-Wire . En este esquema, cada rueda posee cierto grado de independencia a pesar de estar montadas sobre un eje común, lo que sugiere una adaptación diferencial o la flexibilidad del tubo transversal.

Este diseño permite que la rueda interior gire ligeramente más que la exterior, logrando que el robot se mantenga en el mismo arco de giro sin deslizamientos ( derrapes ). Una vez definida la mecánica de giro, diseñamos una base inspirada en la aerodinámica de un F1 .

Esta base es multifuncional y se utiliza por ambas caras:

- Cara inferior: Sirve como base para la caja reductora del sistema de tracción y permite evidenciar gran parte del sistema de dirección.

- Cara superior: Soporta la electrónica y los niveles adicionales del chasis.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/64a613a7-76f1-4cb8-94ee-6a2d8fbced16" />


Cara superior: contiene el L298(driver) un porta baterias de 2, 18650 y el servo motor mg995r.

La dirección funciona de la siguiente manera para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/990524b0-c7c8-45d3-a1f3-fc57e4ee0549" />
Esta base fue rediseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y, también, para que encajara perfectamente la pieza de hierro a presión, evitando todo el juego posible (imprecisión de los componentes).

Luego de encajar esta pieza, utilizamos un tipo de abrazadera que sujeta el buje del eje con forma de cruceta. Este ajuste mecánico es fundamental para asegurar que la transferencia de movimiento sea directa y sin pérdidas de energía, garantizando la estabilidad estructural de la base frente a las cargas operativas del robot.

para centrar y estabilizar su eje utilizamos retenes de lego amarillos
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/59f4dda6-5a0e-40dc-ad73-3c9c41af3f34" />

 Los dos retenes internos se colocan para fijar el eje al diferencial «tubo transversal», ya antes lubricado con vaselina.

Nos dimos cuenta de que, si no lo lubricamos antes de probar el vehículo, le va a costar más realizar los giros y se pueden producir variaciones o inconsistencias al momento de girar. La lubricación con vaselina reduce la fricción entre las piezas móviles del diferencial, permitiendo que las ruedas giren a diferentes velocidades de manera fluida, lo que mejora la precisión de la trayectoria y evita el desgaste prematuro de los componentes impresos o mecánicos.

## Lubricación

Inicialmente, se utilizó grasa azul industrial, pero se observó una degradación acelerada en los componentes impresos en 3D. La grasa azul suele contener aditivos de litio o solventes derivados del petróleo que son agresivos con polímeros como el PLA o el PETG . Estos químicos provocan agrietamiento por tensión (ESC) , penetrando las capas de la impresión y debilitando la unión molecular, lo que causaba que las piezas se volvieran quebradizas.

Ventaja de la vaselina: Se seleccionó vaselina neutra por ser un compuesto químicamente inerte. Proporciona una viscosidad ideal para los ejes de metal/plástico de Trivilyn3.0 , asegurando una lubricación suave que no reacciona con el polímero del chasis, prolongando así la vida útil de los mecanismos.

## Sistema de tracción: 

Su tracción se basa en un eje tipo cruz (inspirado en los kits de LEGO) fabricado en acero, con medidas de 2,8 mm de ancho y 4,2 mm de alto. El eje tiene un largo de 119 mm y cuenta con un refuerzo de teflón industrial a su alrededor para evitar que se doble o sufra pandeo por el peso del prototipo. Este eje está unido a la caja reductora, la cual está compuesta por tres engranajes que trabajan de la siguiente manera:
<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/b0dcd599-29eb-494f-a5d7-9d299ea3cc98" />
<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/af8053d1-77d3-4b1d-8618-e3ee2fdb3cc5" />
<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/e3f04edd-f908-440c-adf8-31eedef2714c" />


 Comenzamos con el segundo piso: 
 
 Está alberga lo que son el sistema de energía (baterías, elevadores y reguladores de voltaje) y sensores ultrasónicos, tiene una forma rectangular con esquinas ovaladas(imagen), Se distribuye de la siguiente manera: 
 

 3 porta baterias, uno de dos baterías 18650 en serie y uno de 1 sola batería 18650, porque están separadas? Las dos tienen diferentes utilidades, el de dos baterías en serie va hacia la placa microcontroladora Arduino mega, estando ambas cargadas llegando a un voltaje total de 8.2v. y el de una sola alimenta independientemente al servo motor de la dirección. En este piso  encontramos las conexiones de tierra común del servomotor y los LED para observar de mejor manera los obstáculos. Tercer piso( sensor ocular y cerebro(Arduino mega) Está base es la más pequeña de todas tiene una forma rectangular con esquinas ovaladas de 15x7cm, contiene la cámara huskyleans en la parte frontal y el Arduino mega en la parte posterior el Arduino mega.

## Nacional Caracas temporada 2025

Para la nacional no se realizaron muchos cambios de diseño radicales; en su lugar, nos enfocamos en implementar mejoras en los modelos existentes y en la corrección de errores mecánicos críticos.

El cambio principal fue la sustitución del servomotor MG996R por un servomotor HobbyPark de 35 kg . Esta actualización fue fundamental, ya que nos proporcionó la fuerza y ​​la precisión necesarias para controlar la dirección de manera eficiente, eliminando las holguras y permitiendo un manejo mucho más exacto durante la competencia.

## Evolución 2025

Una de las mayores complicaciones que enfrentamos fue que Trivilyn no avanzaba en línea recta, pues siempre presentaba un ligero desvío. Para solucionar este problema, realizamos diversas pruebas; comenzamos desarmando el servomotor para identificar la raíz del fallo y notamos que el MG996R tenía demasiada tolerancia entre sus engranajes, lo que causaba un "juego" o espacio muerto que originaba ese desvío.

Evolución de la dirección: 

inicialmente, utilizamos un servo MG995R de 5 kg de torque, pero tras detectar sus fallas y pasar por un proceso de prueba y error, experimentamos con los siguientes métodos:

Grasa azul (gruesa): Intentamos compensar el juego mecánico con lubricantes de alta viscosidad, pero esto resultó contraproducente; al servo le costaba mucho girar y no alcanzaba la agilidad necesaria.

Grasa de grafito: Probamos esta alternativa buscando una mejor lubricación, pero no era lo suficientemente densa para eliminar el espacio entre los engranajes y corregir la imprecisión en la dirección.

Finalmente, comprendimos que el problema no era la lubricación, sino la calidad y el ajuste de los componentes internos del motor, lo que nos llevó a buscar una solución más robusta a nivel de hardware.
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/680dbfbb-ae77-4ce0-a641-e7bd5e0aa9b1" />


Para la 3ra prueba tratamos de ponerle teflón a los engranajes, el problema de esta solución era que si funcionaba al principio, pero al hacer varias pruebas y al pasar el tiempo cada vez tendría más desvío.

En la siguiente gráfica  podemos observar con datos reales, como al realizar pruebas era mayor su desgaste, con 3 pruebas es casi nulo el desvió, pero al seguir utilizándolo se va desviando mas. 
<img width="1024" height="425" alt="image" src="https://github.com/user-attachments/assets/98f9c708-b818-4080-a304-b838973416ce" />

Para finalizar compramos el servomotr hobbypark de 35kg con las siguientes especificaciones Técnicas:

- Torque Máximo : 35 Kg. 

- Voltaje de Operación : Rango de DC 4.8V a 8.4V (Alto Voltaje/HV). 

- Construcción de la Carcasa : Cuerpo de aluminio anodizado, fabricado mediante mecanizado CNC para una disipación de calor superior.

- Tren de Engranajes : Engranajes de acero inoxidable de alta resistencia para soportar cargas elevadas.  

- Eje de Salida (Spline Gear) : Estándar de$\Phi 5.9$con 25 dientes (25T). 

- Protección Ambiental : Sellado completo a prueba de agua (Waterproof) en la carcasa superior, media e inferior.  

- Tipo de motor : Motor central (Motor de núcleo).  Tipo de Señal : Digital y programable de forma inteligente.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/d55865b6-9db7-48a9-8f4e-8266a64ae5b0" />

Este ajuste nos llevó a un mejor rendimiento. Aunque no eliminamos el desvío al 100 %, logramos mejorarlo hasta un punto en el que fuera corregible a través de código.

Esto lo logramos debido a su construcción, este servomotor, genera un desvío constante siempre hacia el mismo lado. Al ser un error sistemático y no aleatorio, se vuelve predecible y, por lo tanto, compensable mediante programación.

En el código, implementamos una instrucción para enviar al servo en el sentido contrario al desvío de forma periódica. Por ejemplo, si el prototipo tiende a desviarse hacia la izquierda, programamos el servo para que, cada ciertos milisegundos, gire 3 grados hacia la derecha y regrese inmediatamente al centro.

Es importante destacar que, según los datos que recopilamos, la magnitud de este desplazamiento varía en función de la velocidad del robot; Por lo tanto, es necesario ajustar los parámetros de compensación dinámicamente para mantener la trayectoria recta en diferentes ritmos de marcha.
<img width="1079" height="232" alt="image" src="https://github.com/user-attachments/assets/c268ba6c-5119-434d-b968-0c0b843d085d" />

# Temporada 2026 Trivilyn3.0

## Evolución 2026

El pensamiento sistémico define que un vehículo autónomo de alto rendimiento no es simplemente una colección de motores, sensores y algoritmos aislados, sino un sistema cerrado interconectado. Cada modificación física altera la dinámica del software, la compatibilidad química de las interfaces mecánicas y la robustez de las señales ante perturbaciones del entorno de la WRO.

## Lógica de Interconexión: Física del Chasis vs. Calibración del Software

El punto de disparo de nuestros sensores no se eligió al azar; es el resultado de un análisis sistémico que interconecta la distribución física de los componentes con la respuesta dinámica del vehículo. El siguiente análisis describe esta dependencia fundamental.

### Desglose del Análisis Sistémico

1. **Ubicación del Sensor (Efecto en la Percepción):**
   Al posicionar los sensores ultrasónicos en la parte más avanzada del parachoques delantero, maximizamos la *Ventana de Lectura*. El sensor detecta la pared con anticipación, lo que otorga al microcontrolador una "ganancia de tiempo" crítica para procesar los datos antes de ejecutar el giro.

2. **Distribución de Masas (Efecto en la Dinámica):**
   Llevar los sensores y soportes tan adelante provoca que el *Centro de Masa (CoM)* se desplace hacia el eje frontal. Esto altera la *Inercia Rotacional* del robot durante los virajes bruscos, introduciendo una tendencia al subviraje (el coche tiende a seguir recto) y desviaciones en la trayectoria ideal de salida.

3. **La Solución Lógica (Punto de Disparo Integrado):**
   Para contrarrestar el subviraje físico provocado por la distribución de masas, y aprovechando la ganancia de tiempo de la ventana de lectura, calibramos el *Punto de Disparo por software a exactos 42 cm*. 
   
   Este umbral de 42 cm compensa perfectamente el tiempo que tarda la dirección *Steer-by-Wire* (SbW) en vencer la inercia del tren delantero, asegurando que el robot inicie la subrutina de giro en el momento óptimo sin colisionar con la pared exterior ni cerrarse antes de tiempo.

---

## A. La Paradoja de la Masa del Sensor y la Inercia Rotacional (I_z)

Para optimizar el software, la tentación inicial fue colocar el sensor ultrasónico en un parachoques muy alargado. Sin embargo, la física gobierna este comportamiento mediante la ley de la Inercia Rotacional ($I_z = \sum m_i \cdot r_i^2$). 

Esta ecuación demuestra que la resistencia de un objeto a cambiar de dirección depende de su masa ($m$), pero se incrementa **exponencialmente** según la distancia ($r$) respecto al centro de giro (el "efecto martillo"). Si alejábamos en demasía el sensor del centro del robot, el servomotor de la dirección requería un torque excesivo para iniciar el viraje, generando un "efecto péndulo" parásito que destruía la precisión en línea recta.

### 📊 Glosario Cinemático y Desglose de Variables de Control

| Variable | Nombre Técnico | Valor Nominal | Impacto Físico en la Misión |
| :---: | :--- | :---: | :--- |
| $v_{\text{robot}}$ | Velocidad de Crucero Lineal | $1.2\text{ m/s}$ ($120\text{ cm/s}$) | Es la velocidad real de desplazamiento del chasis en las rectas. Indica que el vehículo avanza $120\text{ cm}$ por cada segundo transcurrido. |
| $v_{\text{sonido}}$ | Velocidad de Propagación Acústica | $\approx 343\text{ m/s}$ | La constante física del sonido en el aire a una temperatura estándar de boxes ($20^\circ\text{C}$). Es el medio físico que usan los sensores para medir distancias. |
| $t_{\text{vuelo}}$ | Tiempo de Vuelo del Eco | $2.45\text{ ms}$ | El intervalo de tiempo que le toma a la onda mecánica salir del sensor, chocar contra el muro del pasillo y regresar al receptor a la distancia de disparo ($42\text{ cm}$). |
| $t_{\text{ciclo}}$ | Período de Refresco de Telemetría | $87\text{ ms}$ | El tiempo total que tarda el microcontrolador en actualizar secuencialmente la red de 3 sensores (Frente, Izquierda, Derecha) para evitar interferencia cruzada (*cross-talk*). |
| $d_{\text{avance}}$ | Distancia de Desplazamiento Ciego | $\approx 10.44\text{ cm}$ | El espacio físico lineal que el robot recorre en la pista hacia el obstáculo mientras el sensor frontal está en espera y el Arduino procesa los flancos laterales. |

---

### 🧠 Desglose Pedagógico de las Ecuaciones Fundamentales### A. Desglose del Análisis Sistémico de Percepción y Masa
1. **Ubicación del Sensor (Efecto en la Percepción):** Al posicionar los sensores ultrasónicos en el extremo más avanzado del parachoques delantero, se maximiza la *Ventana de Lectura Temprana*. El sensor detecta la pared perimetral con anticipación, otorgando al microcontrolador una ganancia de tiempo crítica para procesar las lecturas antes de iniciar el viraje.
2. **Distribución de Masas (Efecto en la Dinámica):** Desplazar el hardware de soporte de los sensores hacia el extremo frontal desplaza inevitablemente el *Centro de Masa (CoM)* hacia adelante. Esto incrementa de forma crítica la **Inercia Rotacional ($I_z$)** del vehículo durante virajes rápidos, introduciendo una fuerza de subviraje física (tendencia a seguir recto) y oscilaciones parásitas en las rectas ("efecto péndulo").
3. **La Solución Lógica (Punto de Disparo Integrado):** Para contrarrestar el subviraje mecánico y aprovechar la ventana de lectura, se calibró por software el **Punto de Disparo a exactamente 42 cm**. Este umbral matemático compensa el retraso dinámico de la dirección *Steer-by-Wire* (SbW) para vencer la inercia del tren delantero, ejecutando la maniobra en el momento óptimo sin colisionar con la pared exterior ni cerrar la trayectoria antes de tiempo.

---

### B. Análisis Dinámico y Temporal del Sistema Ultrasónico

#### 1. El Factor Multiplicador en el Tiempo de Vuelo ($2 \cdot d$)
En la ecuación del eco ultrasónico:

$$t_{\text{vuelo}} = \frac{2 \cdot d}{v_{\text{sonido}}}$$

El uso del multiplicador **$2$** responde a que el sonido debe realizar un trayecto bidireccional continuo (ida hacia el obstáculo y vuelta hacia el receptor). Omitir este factor en el firmware provocaría un error del $50\%$ en la estimación de distancia en el bucle cerrado de control, causando giros anticipados destructivos.

#### 2. La Paradoja del "Pestañeo" Electrónico ($t_{\text{ciclo}} = 87\text{ ms}$)
Si los tres sensores ultrasónicos se dispararan simultáneamente, el receptor del sensor izquierdo captaría las ondas rebotadas por el sensor central debido a la dispersión cónica del sonido. Este fenómeno, denominado **interferencia cruzada (*cross-talk*)**, generaría lecturas falsas de proximidad. 

La decisión de ingeniería fue implementar una multiplexación por división de tiempo (*Time-Division Multiplexing*):
* **Sensor Izquierdo:** Activo de $0\text{ ms}$ a $29\text{ ms}$.
* **Sensor Central (Frente):** Activo de $29\text{ ms}$ a $58\text{ ms}$.
* **Sensor Derecho:** Activo de $58\text{ ms}$ a $87\text{ ms}$.

Por lo tanto, la tasa de refresco efectiva para el sensor frontal es de $87\text{ ms}$. Durante este intervalo, el robot se desplaza basándose exclusivamente en la última información conocida.

#### 3. El Fenómeno del Avance Transitorio Ciego ($d_{\text{avance}} = 10.44\text{ cm}$)
Aplicando la ecuación cinemática de movimiento rectilíneo uniforme ($d = v \cdot t$), multiplicamos la velocidad real del chasis por el tiempo de retraso de la telemetría:

$$d_{\text{avance}} = 120\text{ cm/s} \cdot 0.087\text{ s} = 10.44\text{ cm}$$

Este resultado matemático revela que el robot avanza casi **$10.5\text{ centímetros}$ completamente "a ciegas"** entre cada actualización del sensor frontal. 

#### 4. Justificación Crítica del Umbral de los 42 cm
Al recibir el paquete de datos en el instante en que el sensor frontal estimó originalmente una distancia de $42\text{ cm}$, el vehículo ya se encuentra físicamente a una distancia real de:

$$d_{\text{real}} = 42\text{ cm} - 10.44\text{ cm} \approx 31.56\text{ cm}$$

Este valor de $31.56\text{ cm}$ coincide exactamente con el radio mínimo de giro físico del chasis de Trivilyn3.0 cuando las ruedas se desvían a su ángulo máximo de $\beta = 40° bajo la cinemática de dirección SbW. Si el umbral del código se programara por debajo de los $42\text{ cm}$, el espacio real remanente sería inferior al límite cinemático de giro del vehículo, derivando en un impacto frontal destructivo directo contra la pared de la WRO.

---

### C. Cohesión de Componentes: Dirección SbW y Agarre Lateral

La tracción posterior de Trivilyn3.0 emplea neumáticos de caucho de alta fricción. Al ejecutar la curva de forma reactiva, el robot debe generar una fuerza centrípeta que altere el vector de trayectoria de su centro de masa. Si el disparo se retrasara por debajo de los 42 cm, el chasis se vería obligado a exigir un cambio de dirección instantáneo y sumamente agresivo en las ruedas frontales para no chocar.

Desde la perspectiva de la física de partículas, esto somete a los neumáticos a la ley del **Límite de Fricción Estática**:

$$F_f \le \mu_s \cdot N$$

* **$F_f$ (Fuerza de Fricción Lateral):** Es la fuerza de agarre que las llantas delanteras deben ejercer contra la pista para obligar al chasis a cambiar de dirección.
* **$\mu_s$ (Coeficiente de Fricción Estática):** Es el factor de adherencia química entre el caucho de los neumáticos y la lona de la pista WRO.
* **$N$ (Fuerza Normal):** El peso neto del robot ejerciendo presión vertical sobre el suelo ($N = m \cdot g$).

Esta fórmula matemática demuestra que los neumáticos tienen un "presupuesto" máximo de agarre limitado por el producto $\mu_s \cdot N$. Si el robot intenta girar de golpe porque detectó la pared demasiado tarde, la fuerza lateral requerida para completar la curva supera el límite máximo de fricción estática. En ese instante, las ruedas agotan su capacidad de adherencia y rompen su contacto estático con el suelo, transicionando inmediatamente a **fricción dinámica (derrape por pérdida de tracción)**. 

Al derrapar, el coeficiente de fricción cae drásticamente. Las llantas frontales se deslizan sin oponer resistencia, provocando un efecto de **subviraje** (el vehículo pierde la capacidad de direccionar y continúa desplazándose en línea recta debido a su propia inercia). Programar el punto de disparo a **exactamente $42\text{ cm}$** distribuye el viraje a lo largo de una trayectoria curva más suave y prolongada. Esto reduce la demanda de fuerza centrípeta instantánea, manteniendo la fuerza lateral requerida holgadamente por debajo del límite crítico de $\mu_s \cdot N$. De esta forma, se garantiza un guiado limpio, predecible y con tracción perfecta en todo momento.

---

## 2. Gestión de Fricción, Termodinámica y Compatibilidad Química de Materiales

La lubricación y la protección contra el desgaste en Trivilyn3.0 no son actividades secundarias de mantenimiento, sino variables críticas de la física interna de la transmisión y la suspensión del robot.

### A. Compatibilidad Química y Prevención del ESC (Environmental Stress Cracking)
Durante el desarrollo de prototipos previos (Rexbot 1.25), el uso de grasas industriales multiusos y aceites líquidos minerales para lubricar la transmisión provocó fallas mecánicas catastróficas por fracturas súbitas en los soportes y dientes de engranajes impresos en PLA y PETG.

El análisis científico reveló que los aceites minerales y las grasas de base petroquímica actúan como agentes de **agrietamiento bajo esfuerzo ambiental (Environmental Stress Cracking - ESC)**. Estos compuestos químicos penetran en los micro-huecos intercapas inherentes al proceso de impresión FDM. Al estar sometidos a cargas mecánicas continuas, el lubricante mineral debilita las fuerzas de *Van der Waals* entre las cadenas del polímero, promoviendo la propagación microscópica de grietas intercapas hasta la fractura súbita de la pieza.

Para solucionar este fallo de manera sistémica en Trivilyn3.0, se implementó el uso exclusivo de **vaselina neutra** (petrolato de alta pureza) debido a sus excelentes propiedades de ingeniería:
* **Inercia Química de Polímeros:** Al ser un hidrocarburo saturado de cadena larga, no interactúa químicamente con el PETG ni el PLA. No disuelve las uniones poliméricas ni induce ESC, manteniendo intacta la rigidez del material impreso bajo torque máximo.
* **Viscosidad y Resistencia Centrífuga:** A diferencia de los aceites finos de baja densidad que son expulsados de los engranajes por efecto de la fuerza centrífuga a altas revoluciones, la consistencia pastosa de la vaselina provee una película lubricante de alta viscosidad estática que permanece adherida a los dientes de los piñones.
* **Termodinámica a Altas RPM (15,000 RPM):** El motor DC extraído del vehículo *Turbo Snake* opera en un rango extremo de 13,000 a 15,000 RPM. Esta alta rotación en el piñón de ataque de bronce genera una gran fricción y elevación localizada de la temperatura. La vaselina neutra forma una barrera térmica que disipa el calor por rozamiento, evitando que la temperatura del eje metálico alcance el punto de **transición vítrea del PETG (approx 75° a 80°, lo que ablandaría el alojamiento del motor y desalinearía los engranajes destruyendo la transmisión.

### B. Estabilidad Dinámica del Tren Delantero (Tubo Transversal)
En el sistema de suspensión y dirección delantero, la vaselina neutra se aplica en el interior del tubo transversal de bronce. El bronce posee propiedades naturales autolubricantes debido a su bajo coeficiente de fricción estática ($\mu_s$). 

Al engrasar la interfaz entre el eje de acero interno y la camisa de bronce con vaselina, se elimina la fricción mecánica residual. Si este eje experimentara micro-atascamientos por fricción seca, el impacto sistémico destruiría la lógica de control del robot:
1. El chasis se inclinaría de forma asimétrica al momento del viraje.
2. Esto desvía el eje óptico de la cámara HuskyLens, desplazando el centroide de detección cromática de los pilares de la pista.
3. Alteraría los vectores de reflexión de los sensores ultrasónicos, introduciendo lecturas erróneas de las distancias laterales en el lazo cerrado de control y provocando un fallo crítico en la trayectoria.

> [!NOTE]
> **Universalidad y Mantenimiento de Emergencia**
> Una de las mayores ventajas de la vaselina neutra sólida sobre los lubricantes sintéticos especializados de teflón o litio es su accesibilidad global. Al ser químicamente neutra y de grado comercial, el equipo puede realizar reparaciones y mantenimientos de emergencia en boxes en cualquier competencia utilizando petrolato comercial común, sin alterar la calibración física de las piezas del chasis.

---

## 3. Adaptabilidad Sensorial ante el Entorno de la Pista

El pensamiento sistémico comprende que el robot no interactúa en un vacío, sino en una simbiosis directa con la pista física. Una de las lecciones de ingeniería más valiosas adquiridas en la Final Nacional de la WRO 2025 con el prototipo Rexbot 2.0 fue el fallo de lecturas ultrasónicas debido a las variaciones estructurales de los muros.

* **El Problema Físico (Eco Nulo):** El diseño anterior poseía soportes estáticos y rígidos para los sensores HC-SR04. Cuando la pista de competencia presentaba un desnivel en el suelo o paredes perimetrales más bajas que las de entrenamiento, el cono acústico del sensor pasaba por encima de la pared o impactaba la esquina superior de la misma, generando un rebote disperso no captado por el receptor (un fenómeno de "eco nulo" o lectura fantasma).
* **La Solución por Diseño Flexible en Trivilyn3.0:** Para la temporada 2026, decidimos reemplazar la rigidez estructural por el principio de diseño adaptativo. El desarrollo de una corredera de precisión con riel macho-hembra permite ajustar la altura del hardware de forma física en cuestión de segundos en boxes. Esto resuelve mecánicamente el problema de la variabilidad del entorno en la pista, garantizando que el haz ultrasónico incida de manera perfectamente perpendicular al plano medio de las paredes de la WRO, manteniendo un flujo de datos limpio hacia el Arduino sin necesidad de reprogramar los umbrales de software.

---

## 4. Sistema de Corredera de Baterías y Optimización Cinemática
 
La integración de un sistema de alojamiento modular en corredera (mecanismo de riel guía tipo macho-hembra impreso en 3D) para el banco de baterías principal de dos celdas 18650 responde a una estrategia de diseño sistémico. Este enfoque resuelve simultáneamente restricciones de empaquetamiento volumétrico, eficiencia en la gestión de tiempos en fosos y la estabilidad dinámica del vehículo.

### 1. Optimización Volumétrica y Reducción del Perfil Vertical
En el diseño de vehículos autónomos a escala para la WRO, la gestión del espacio tridimensional es un factor crítico. La implementación del cartucho deslizable horizontal en la sección inferior del chasis elimina la necesidad de un despeje vertical para la extracción de las celdas. Si el acceso a las baterías fuese superior o vertical, la arquitectura de la carrocería requeriría elevar el segundo nivel (placa de control y distribución lógica) un mínimo de $50\text{ mm}$ adicionales para permitir el vector de extracción manual. Al desplazar este plano de forma lateral, se compacta el perfil vertical de Trivilyn3.0, garantizando el cumplimiento holgado de las normativas de dimensiones máximas de la competencia sin sacrificar área útil para los sensores superiores.
  
### 2. Eficiencia Operacional en Entornos de Competición (Gestión de Rondas)
El diseño de hardware para competencia debe contemplar la mantenibilidad bajo condiciones de alta presión temporal. El sistema de corredera actúa como un método de sustitución rápida (*Quick-Change*) que mitiga el riesgo de error humano. Al permitir el intercambio periférico del bloque de energía, se evita por completo la manipulación, desconexión o desensamblaje de los componentes lógicos, el cableado con blindaje SFTP o el soporte del microcontrolador Arduino Mega. Esto reduce el tiempo de permanencia en los pits para recargar a un intervalo menor a 10 segundos, manteniendo la integridad del hardware intacta entre los intentos de la ronda.
  
### 3. Análisis Dinámico: Desplazamiento del Centro de Masa y Estabilidad Cinemática
Desde la perspectiva de la dinámica vehicular, el banco de baterías 18650 representa uno de los vectores de masa más significativos del conjunto total del robot (aproximadamente el $25\%$ del peso neto). Ubicar mecánicamente este componente en el plano más bajo del chasis optimiza el comportamiento cinemático de Trivilyn3.0 en dos aspectos fundamentales:
* **Reducción del Momento de Vuelco:** Al minimizar la altura del centro de gravedad (h_{CG}), se reduce directamente el brazo de palanca cizallante generado por la fuerza centrífuga cuando el vehículo ejecuta virajes de alta velocidad a un régimen de PWM 190. Esto mitiga el momento de vuelco transversal, manteniendo el chasis firmemente paralelo al plano de la pista.
* **Estabilización del Vector de Carga (Grip Neumático):** La concentración de la masa en la zona inferior e interaxil (entre ambos ejes) distribuye de manera uniforme la fuerza normal sobre los neumáticos de caucho de 43 mm. Al suprimir la transferencia de carga transitoria excesiva hacia las ruedas exteriores durante las curvas, se contrarresta el efecto de subviraje (*understeer*) y el deslizamiento por deriva lateral, asegurando que la trayectoria calculada por el algoritmo de control reactivo se traduzca fielmente en el desplazamiento físico sobre el pasillo.

### Contexto Histórico y Evolución del Sistema de Acoplamiento en Trivilyn

La adopción de la geometría en cola de milano para la fijación del banco de potencia no fue una decisión arbitraria, sino el resultado de un proceso de ingeniería iterativo basado en el análisis de fallas de los prototipos de temporadas anteriores. El desarrollo de esta interfaz se divide en tres fases evolutivas:

* **Fase 1: Rexbot 1.0 a 2.0(Contenedor Fijo con Fijación por Tornillería):** En las primeras versiones, las baterías se alojaban en un compartimento estático cerrado mediante una tapa atornillada en el segundo piso. Esta arquitectura presentaba dos fallas críticas: obligaba a elevar la altura del chasis para permitir el acceso superior y los ciclos constantes de atornillado terminaban barriendo las roscas del plástico. El tiempo de sustitución en boxes superaba los 60 segundos, un margen de tiempo inaceptable para las ventanas de pits.

* **Fase 2: Trivilyn3.0 (Solución Sistémica mediante Cola de Milano):** Para la temporada 2026, el equipo recurrió a la ingeniería clásica de ensamblaje prismático, adaptando la unión en cola de milano por su alta resistencia a la tracción sin necesidad de sujetadores. Al trasladar esta geometría a la fabricación aditiva en PETG, se logró bloquear cinco grados de libertad mediante el propio cierre de forma de la pieza, distribuyendo los esfuerzos mecánicos a lo largo de flancos angulados a 60° y optimizando la dinámica vehicular de manera definitiva.

---

## 5. Evolución del Sistema de Interconexión y Blindaje de Señales (EMI)

La confiabilidad física de la transmisión de datos a bordo de un vehículo autónomo de alta velocidad es un factor crítico. Para mitigar los falsos contactos eléctricos inducidos por las vibraciones y el ruido electromagnético, el equipo transitó por tres fases de evolución en su cableado:

### 🔌 Análisis Comparativo de Conductores y Mitigación de EMI

| Etapa | Conductor Utilizado | Falla / Limitación de Ingeniería | Efecto en Sistema |
| :--- | :--- | :--- | :--- |
| **Etapa 1** | Jumpers Genéricos (Kits de Prototipado) | Alta resistencia, holgura mecánica, desconexiones por vibración. | Pérdida de continuidad, reinicios inesperados del Arduino Mega. |
| **Etapa 2** | Cable de Red UTP Categoría 6 | Conductor unifilar quebradizo ante flexión, rigidez excesiva en ejes móviles. | Rotura del cable interno por fatiga mecánica en el sistema de dirección. |
| **Etapa 3** | Conductores Industriales Kodak | Construcción multifilar ultraflexible, blindaje de pantalla y trenza de alta densidad (SFTP). | Inmunidad total frente a EMI y fatiga mecánica. |

### Fundamentación Científica de la Inmunidad a Interferencias Electromagnéticas (EMI)
Los motores de tracción DC que operan a 15,000 RPM actúan como generadores de alta frecuencia de ruido electromagnético de alta energía, debido al constante arqueado y conmutación de las escobillas del colector. Este ruido puede inducir corrientes parásitas en las líneas de señales de datos de los sensores ultrasónicos (*Trigger* y *Echo*) y en la comunicación serie I^2C de la cámara HuskyLens, corrompiendo las lecturas de distancia o saturando el búfer de comunicación del microcontrolador.

Para erradicar esta degradación de la señal, se implementó el cableado industrial recuperado de impresoras de alto volumen de la marca Kodak. Estos conductores disponen de una arquitectura de blindaje **SFTP (*Shielded Foiled Twisted Pair*)**:
1. **Par Trenzado:** Cancela el ruido por simetría acoplando las interferencias por igual en ambas líneas de datos, permitiendo que el Arduino las anule por rechazo en modo común.
2. **Lámina de Aluminio (Foil):** Bloquea de forma perimetral las interferencias electromagnéticas de alta frecuencia radiadas por las chispas internas del motor DC.
3. **Malla de Cobre Trenzada:** Absorbe y deriva a la masa común del chasis las corrientes de baja frecuencia provocadas por el par torsor del servomotor de la dirección SbW, blindando la red tri-sensorial de Trivilyn3.0 y asegurando datos puros en alta velocidad.

# Desafíos Técnicos, Limitaciones y Soluciones en el Desarrollo

Durante la construcciÓn y ensamblaje nuestro prototipo enfrentamos varios desafios los cuales resolvimos y decidimos documentar para demostrar que la construcción de un vehiculo autonomo no se realiza de la noche a la mañana. Que las cosas no siempre salen la primera vez y consta de un proceso de prueba-error para llegar al resultado deseado.

## 1. Desafío en Manufactura Aditiva: Inestabilidad Térmica y Obstrucción de Boquilla (Clogging) en la Ender 3

### Descripción del Problema
Durante la fase inicial de reestructuración del chasis y las bases de soporte de **Trivilyn 3.0**, nos enfrentamos a fallas críticas repetitivas en el proceso de manufactura aditiva (impresión 3D). Al intentar fabricar los componentes de gran volumen, específicamente la **base del segundo piso** (encargada de albergar la electrónica principal y el sistema de control), la impresora (Ender 3) sufrió múltiples fallas a mitad del proceso de impresión. El síntoma principal fue la **obstrucción de la boquilla (clogging)**, lo que provocó subextrusión severa, pérdida de adherencia entre capas y la pérdida total de la pieza en tres ocasiones consecutivas. Esto se tradujo en una pérdida significativa de tiempo de desarrollo, filamento y un retraso en el ensamblaje estructural del vehículo.

<img width="960" height="504" alt="image" src="https://github.com/user-attachments/assets/f37584d0-071f-4a84-8045-8aefe2339da3" />


### Justificación e Identificación de Cusas Raíz
Al analizar los fallos en caliente, identificamos que el problema no era un defecto del diseño CAD, sino una combinación de factores térmicos y mecánicos en el ecosistema de la impresora:
1. **Fatiga Térmica (Heat Creep):** El calor del bloque calentador se transfería hacia la zona fría del *hotend* debido a la alta demanda de horas continuas de impresión necesarias para una pieza estructural de ese tamaño, ablandando el filamento antes de tiempo y generando un tapón molecular.
2. **Restricción en el flujo de extrusión:** Residuos microparticulados atrapados en la boquilla estándar de 0.4 mm generaban un aumento en la contrapresión del motor extrusor.

### Soluciones Técnicas Implementadas
Para erradicar este cuello de botella en la manufactura y garantizar la repetibilidad y dureza de las piezas finales de **Trivilyn 3.0**, aplicamos las siguientes acciones correctivas:
* **Mantenimiento Mayor e Intervención Mecánica:** Realizamos un desarme completo del *hotend*, aplicando el método del *Cold Pull* (tirón en frío) para purgar impurezas internas y asegurar que el tubo de teflón (PTFE) estuviera perfectamente asentado y cortado a 90 grados contra la boquilla para evitar espacios vacíos.
* **Calibración y Optimización de Retracciones:** Redujimos la distancia de retracción en el laminador (Slicer) para evitar que el filamento caliente subiera de forma repetida a la zona fría, disminuyendo drásticamente la probabilidad de atasco.
* **Optimización de Parámetros de Extrusión:** Ajustamos la relación velocidad/temperatura, aumentando ligeramente la temperatura de extrusión en las primeras capas para mejorar la fluidez y garantizar una base ultra sólida para el segundo piso.



