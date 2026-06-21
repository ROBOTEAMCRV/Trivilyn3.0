# 📑 Especificación de Ingeniería y Manual de Ensamblaje Avanzado: Trivilyn 3.0
### **TEAMROBOTICACRV | World Robot Olympiad - Future Engineers 2026**

![Version](https://img.shields.io/badge/Version-3.0.4--Final-blue?style=for-the-badge) ![Build](https://img.shields.io/badge/Build-FDM_Optimized_PETG-orange?style=for-the-badge) ![Engineering](https://img.shields.io/badge/Level-Deep_Engineering-red?style=for-the-badge) ![Philosophy](https://img.shields.io/badge/Philosophy-Adaptarse_Para_Ganar-darkgreen?style=for-the-badge)

Este documento técnico de ingeniería detalla de forma exhaustiva, rigurosa y secuencial el protocolo de montaje mecánico, integración de hardware, ciencia de materiales y calibración física del chasis autónomo **Trivilyn 3.0**. El diseño rompe con los esquemas convencionales al implementar una arquitectura modular de tres niveles (capas desacopladas de geometría plana) diseñada específicamente para neutralizar interferencias, optimizar el centro de masa y garantizar el mantenimiento de alta velocidad en pits.

---

## 🏛️ 1. Filosofía de Diseño: Arquitectura de Capas Desacopladas

El chasis del **Trivilyn 3.0** no es un mero soporte pasivo para los componentes; ha sido concebido bajo el paradigma de **Arquitectura de Capas Desacopladas por Niveles**. Esta decisión de ingeniería responde directamente a la necesidad de aislar y mitigar tres variables críticas que degradan el rendimiento de los vehículos autónomos de competencia:

1.  **Vibraciones Mecánicas de Alta Frecuencia:** Inducidas por el motor DC principal operando a regímenes superiores a las 13,000 RPM.
2.  **Disipación Térmica Selectiva:** El calor generado por la etapa de potencia (drivers y motores) debe evacuarse sin calentar los componentes de procesamiento lógico central.
3.  **Ruido Electromagnético (EMI):** El parpadeo magnético y la conmutación de alta corriente de los motores generan ruido que corrompe los buses de datos de alta velocidad ($\text{I}^2\text{C}$ y UART) de la cámara HuskyLens y la red tri-sensorial ultrasónica.

<div align="center">
  <img width="650" alt="Vista Explotada de Ingeniería - Trivilyn 3.0" src="https://github.com/user-attachments/assets/94674710-3c17-485e-957c-d2b3450496a7" />
  <p><i>Figura 1: Vista explotada del ensamble modular multinivel donde se aprecia la segregación física de los tres pisos y los pilares prismáticos de elevación.</i></p>
</div>

* **Planta Baja (Nivel de Actuación y Fuerza):** Alberga la planta propulsora, el servomotor de dirección y el puente H L298N. Soporta los esfuerzos de tracción y corte.
* **Segundo Piso (Nivel de Energía y Percepción):** Aloja el banco de baterías principal (baterías de potencia y lógica) junto con la matriz ajustable de sensores ultrasónicos. Actúa como escudo dieléctrico y magnético.
* **Tercer Piso (Nivel de Procesamiento Lógico Central):** Posiciona el microcontrolador en la coordenada Z más alta, maximizando la refrigeración convectiva y protegiéndolo de transitorios eléctricos.

---

## 🔬 2. Ciencia de Materiales y Optimización de Manufactura Aditiva (FDM)

La integridad estructural del vehículo depende críticamente de la configuración del laminador (*slicer*) y las propiedades intrínsecas del polímero utilizado. Tras pruebas en boxes durante la temporada pasada, el equipo prohibió el uso de PLA en elementos de carga debido a su baja resistencia al impacto y su propensión a la deformación plástica bajo stress térmico.

### 2.1 Polímero de Ingeniería: PETG Industrial
La totalidad de los componentes estructurales (base crema, segundo piso naranja, tercer piso amarillo y espaciadores) han sido fabricados en **PETG (Polietileno de Tereftalato Glicolado)** debido a sus ventajas mecánicas:
* **Temperatura de Transición Vítrea ($T_g$):** $\approx 80^\circ\text{C}$. Esto garantiza que la base del motor no sufra deflexión o ablandamiento cuando el motor disipe calor por fricción prolongada.
* **Tenacidad e Isotropía:** El PETG posee una excelente adhesión interlaminar, reduciendo el riesgo de delaminación (separación de capas) ante impactos transversales contra las defensas de la pista.

### 2.2 Parámetros Técnicos de Impresión de Alta Resistencia
Para neutralizar la anisotropía inherente a la impresión 3D FDM, se estandarizó la siguiente matriz de configuración en el software de laminación:

* **Patrón de Relleno (*Infill*):** **Giroide (Gyroid) al 40% de densidad en todas las piezas del carrito.** El patrón giroide proporciona una resistencia tridimensional homogénea. A diferencia de los patrones rectilíneos o cúbicos, la estructura giroide disipa las fuerzas de torsión por igual en los ejes $X$, $Y$ y $Z$, absorbiendo las vibraciones armónicas del motor sin fisurarse.
* **Conteo de Perímetros:** 4 paredes perimetrales reforzadas con boquilla de 0.4 mm (espesor de pared mínimo de 1.6 mm). Esto asegura que los taladros y orificios pasantes de los tornillos métricos agarren sobre plástico sólido y no sobre el relleno hueco.

---

## ⚙️ 3. Fase I: Planta Propulsora y Tren de Tracción Posterior (Planta Baja)

La plataforma inferior es el cimiento mecánico de Trivilyn 3.0. Debe ensamblarse con tolerancias mínimas para asegurar que no existan desalineaciones en el tren motriz que disipen energía en forma de fricción parásita.

### 3.1 Montaje de la Base del Motor TurboSnake
El motor de corriente continua **TurboSnake** opera en rangos extremos de revolución (entre $13,000$ a $15,000\text{ RPM}$). Cualquier juego en su base destruirá la piñonería de transmisión.

| Componente de Ingeniería | Protocolo de Ensamblaje Mecánico Detallado |
| :--- | :--- |
| <img width="266" height="225" alt="Base del Motor - Render CAD" src="https://github.com/user-attachments/assets/4c810d8e-7a5a-44bf-b1b1-a001ebec823f" /> | **Alineación Coaxial Absoluta:** Posicione la brida cilíndrica de sujeción del motor (pieza azul) exactamente debajo de la sección trasera calada de la plataforma del chasis principal (pieza crema). Haga coincidir de forma concéntrica los 4 orificios pasantes. Inserte tornillos métricos M3 de acero inoxidable de cabeza Bristol. **Es obligatorio colocar arandelas de presión (*grower*)** entre la cabeza del tornillo y el chasis; de lo contrario, la frecuencia armónica de las 15,000 RPM aflojará las tuercas en carrera. |

### 3.2 Integración del Driver de Potencia L298N
El puente H doble **L298N** se encarga de conmutar los giros y la velocidad mediante señales PWM procedentes de la etapa lógica superior.

| Layout del Puente H Montado | Protocolo de Fijación y Aislamiento Dieléctrico |
| :--- | :--- |
| <img width="350" alt="Driver L298N Montado en Chasis" src="https://github.com/user-attachments/assets/6183aa40-013c-4766-b5eb-46d93ebd8be6" /> | **Fijación sobre Postes:** Ubique los 4 postes de elevación integrados en la zona posterior de la base crema. Posicione el PCB del driver sobre los postes cuidando la orientación de las borneras de tornillo hacia afuera para facilitar el cableado del bloque del motor. Inserte tornillos métricos de sujeción. Se recomienda el uso de arandelas plásticas aislantes para evitar que las vibraciones desgasten la laca de protección del circuito impreso y causen un cortocircuito estático contra los soportes del chasis. |

---

## 🏎️ 4. Fase II: Sistema de Dirección Electrónica "Steer-by-Wire" (SbW)

Trivilyn 3.0 rompe radicalmente con los esquemas de dirección tradicionales (como la geometría Ackerman). En su lugar, el equipo implementó un sistema puramente **Steer-by-Wire (SbW)** o dirección electrónica digital por cable. No existe una columna de dirección física ni varillaje mecánico complejo que acople las ruedas de forma asimétrica; el ángulo de guiado se calcula por software y se transmite de forma directa e instantánea a través del actuador a los bloques de dirección independientes.

<div align="center">
  <img width="750" alt="Detalle de Acople de Dirección Steer-by-Wire" src="https://github.com/user-attachments/assets/5087157f-f1e5-4975-8afa-cdd874264094" />
  <p><i>Figura 2: Encastre de alta tolerancia del sistema Steer-by-Wire. Se aprecia el acoplamiento directo entre la palanca del actuador servo (brazo naranja) y la base de dirección móvil del eje (pieza azul).</i></p>
</div>

### 4.1 Montaje e Interferencia Mecánica del Servo
Para ejecutar el control angular con precisión milimétrica frente a las fuerzas de inercia lateral, utilizamos un servomotor digital **HobbyPark de 35 kg-cm** con piñonería interna de acero.
1.  Inserte el servomotor verticalmente en el alojamiento rectangular delantero del chasis base. El encaje está diseñado por *ajuste por interferencia* (tolerancia de 0.05 mm). El servo debe entrar firmemente a presión.
2.  Si detecta cualquier holgura microscópica en el alojamiento, aplique una capa perimetral de cinta aislante Kapton en las paredes del servo para absorber el juego antes de fijar los tornillos de sujeción lateral.

### 4.2 Protocolo de Calibración del Cero Lógico (Firmware vs Hardware)
El mayor error en boxes es montar el brazo del servo a ciegas. Siga este protocolo estrictamente:
1.  Conecte el servo al Arduino Mega, energice la etapa lógica y parpadee el firmware de calibración estática.
2.  Envíe una señal PWM exacta con un ancho de pulso correspondiente al **centro lógico puro de 94 grados ($1544\mu\text{s}$)**.
3.  Manteniendo el servo energizado y bloqueado electrónicamente en esos 94°, encastre a presión la **Palanca del Servo (pieza naranja)** en el estriado metálico del motor, asegurándose de que encaje perfectamente perpendicular con la **Base de la Dirección (pieza azul)**, tal como se detalla en el recuadro de la *Figura 2*.
4.  Inserte y ajuste el tornillo central del eje estriado a un torque firme para bloquear el conjunto.

> [!IMPORTANT]
> **RELEVANCIA EN EL CONTROL DE LA HUSKYLENS:** Si el acople entre la palanca naranja y la base azul posee juego mecánico (*backlash*), el vehículo sufrirá de oscilación descontrolada (*wobbling*) a alta velocidad. La cámara procesará la línea o el pilar, enviará la corrección al servo, pero debido al juego mecánico el carro no girará de inmediato; el algoritmo sobre-corregirá en el siguiente ciclo, provocando que el robot zigzaguee hasta salirse de la pista. El ajuste a presión elimina este bucle de error.

---

## ⚡ 5. Fase III: Gestión Energética Modular y Riel "Quick-Change"

La eficiencia en una carrera autónoma no solo se mide en la pista, sino en la velocidad de respuesta del equipo técnico en la zona de boxes. El diseño del carro prioriza que el mantenimiento eléctrico se realice en segundos.

### 5.1 Mecanismo de Acoplamiento en Cola de Milano (Dovetail)
Para alimentar la planta motriz y aislarla del consumo lógico, el robot utiliza bancos independientes. El banco de baterías de potencia se desliza sobre una guía mecánica integrada.
1.  Presente el **Riel Macho** (corredera de baterías) sobre su contraparte hembra en la sección central interaxil de la estructura. El riel macho está integrado estructuralmente en el **segundo piso** del vehículo.
2.  Deslice el módulo para verificar que el recorrido sea suave y no se trabe por imperfecciones en las líneas de impresión FDM.

> [!IMPORTANT]
> **PROTOCOLO DE CURADO QUÍMICO DE ALTA RESISTENCIA:** Limpie las caras de contacto del riel con alcohol isopropílico para remover grasas o filamentos sueltos. Aplique una mezcla homogénea de adhesivo estructural epóxico de dos componentes (**Goma A y Goma B**). Una las piezas y mantenga presión uniforme con prensa durante un mínimo de 12 minutos. *Queda estrictamente prohibido el uso de cianoacrilatos (SuperGlue, pegamento loco)*; al cristalizar, se vuelven quebradizos y las vibraciones continuas del motor TurboSnake romperán la unión, desprendiendo el banco de baterías in carrera.

---

## 📡 6. Fase IV: Segundo Piso (Aislamiento y Red de Percepción)

El segundo nivel (plataforma naranja) cumple una doble función: actúa como escudo de separación magnética y física para las líneas lógicas superiores y aloja los sensores de proximidad de rango medio.

### 6.1 Elevación Prismática Mediante Espaciadores
1.  Aplique adhesivo epóxico de dos componentes (Goma A y B) en los extremos de los **Espaciadores Estructurales Frontales y Posteriores**.
2.  Posiciónelos firmemente en las bahías de anclaje de la base crema inferior.
3.  Superponga la **Segunda Base Electrónica (Bandeja Naranja)** asegurándose de que coincida con los postes de los espaciadores. Ensamble de forma pasante utilizando tornillos autorroscantes M3 para unificar rígidamente ambos pisos en una estructura monocasco virtual.

### 6.2 Matriz Sensorial de Ultrasonido Ajustable por Corredera
El robot utiliza sensores **HC-SR04** para mapear la distancia lateral respecto a los muros perimetrales y evitar colisiones destructivas.
1.  Ensamble el bloque de la **Corredera Hembra del Sensor Ultrasónico** en el riel vertical del chasis. El ajuste debe permitir el desplazamiento con resistencia táctil.
2.  Inserte los transductores ultrasónicos a presión in sus respectivas cunas.

> [!TIP]
> **CALIBRACIÓN GEOMÉTRICA DE ALTURA (FOV DEL ULTRASONIDO):** Deslice la corredera verticalmente hasta garantizar que el eje acústico central de los transductores sea perfectamente paralelo a la superficie del suelo y perpendicular al plano del muro. Si el sensor queda apuntando ligeramente hacia abajo, el haz ultrasónico rebotará contra el suelo provocando lecturas de "falsos positivos" (el robot creerá que tiene un muro enfrente y frenará). Si queda apuntando hacia arriba, el haz pasará de largo en muros bajos provocando colisiones inminentes.

3.  Aloje los dos compartimientos porta-baterías para celdas **18650** de forma horizontal sobre la superficie del segundo piso. Su ubicación horizontal distribuye de manera simétrica los momentos de inercia transversal cuando el carro realiza giros cerrados controlados por el sistema Steer-by-Wire.

---

## 🧠 7. Fase V: Tercer Piso (Procesamiento Analítico y Visión de Máquina)

El plano de mayor elevación geométrica de Trivilyn 3.0 está dedicado exclusivamente a la computación lógica de alto nivel. Aquí es donde se ejecuta el bucle principal de control, el procesamiento de la cámara inteligente HuskyLens y las decisiones evasivas.

| Componente Estructural Superior Real | Protocolo de Instalación Lógica Central |
| :--- | :--- |
| <img width="280" alt="Arduino Mega Montado en Tercer Piso Amarillo" src="https://github.com/user-attachments/assets/bcd0af55-5fb9-4952-80ec-29b253fe054e" /> | **Fijación Dieléctrica de la MCU:** Monte la placa del **Tercer Piso (Placa Amarilla)** utilizando los tres puntos de atornillado correspondientes sobre las columnas estructurales elevadas. Posicione el microcontrolador **Arduino Mega 2560 R3** sobre sus guías perimetrales exactas. Asegure la placa firmemente insertando sus respectivos tornillos de montaje directos sobre la base. La elevación prismática de este tercer piso amarillo es una decisión de ingeniería crítica: permite crear una cámara de aire para la refrigeración por convección del procesador ATmega y lo mantiene aislado de los campos electromagnéticos parásitos generados por la planta motriz inferior. |

> [!IMPORTANT]
> **ENRUTAMIENTO DE BUSES DE DATOS DE ALTA VELOCIDAD:** Al conectar los buses de comunicación de la HuskyLens y de los sensores ultrasónicos a los pines del Arduino Mega, asegúrese de trenzar físicamente los cables de señal (SDA/SCL, TX/RX) o utilizar cables con malla de blindaje. Estos cables jamás deben correr paralelos a las líneas de alta corriente de 7.4V que van del driver L298N al motor, ya que la inductancia generaría caídas de paquetes de datos y colgaría el bus $\text{I}^2\text{C}$ a mitad de una ronda competitiva.

---

## 🧪 8. Protocolo de Mantenimiento Químico y Lubricación de Polímeros

El coeficiente de fricción inter-componente en piezas móviles fabricadas por FDM puede reducir drásticamente el par de torsión neto y drenar la carga útil de las baterías de litio. Sin embargo, la aplicación del lubricante incorrecto destruirá el vehículo mecánicamente.

> [!CAUTION]
> **ADVERTENCIA QUÍMICA ABSOLUTA - AGRIETAMIENTO POR STRESS AMBIENTAL (ESC):**
> **¡QUEDA ESTRICTAMENTE PROHIBIDO EL USO DE GRASAS INDUSTRIALES COMUNES, ACEITES DE MOTOR, LUBRICANTES AZULES O COMPUESTOS CON BASE DE LITIO!**
> Los hidrocarburos aromáticos y solventes presentes en los lubricantes minerales industriales penetran en la microestructura porosa de los polímeros impresos en 3D (tanto en el PLA como en el PETG). Este proceso rompe las fuerzas de Van der Waals entre las cadenas del polímero, desencadenando el fenómeno conocido como **Agrietamiento por Estrés Ambiental (ESC)**. Bajo carga de trabajo, las piezas lubricadas con estos aceites sufrirán fallas estructurales catastróficas instantáneas, quebrando los dientes del diferencial mecánico y las articulaciones de la dirección.
> 
> **SOLUCIÓN EXCLUSIVA DE INGENIERÍA:** Aplique única y exclusivamente una fina capa homogénea de **Vaselina Neutra** (petrolato puro de grado medicinal) o lubricantes secos basados en PTFE (Teflón). La vaselina es un compuesto hidrocarbonado saturado de alta cadena que resulta **100% químicamente inerte** ante la estructura molecular del PETG y del PLA, reduciendo la fricción parásita a cero sin degradar los componentes.

---

## ✅ 9. Check-list de Inspección Técnico Pre-Vuelo (Protocolo de Boxes)

Antes de colocar el Trivilyn 3.0 en la línea de partida para una ronda oficial, el equipo de pits debe verificar obligatoriamente este protocolo de verificación de cuatro puntos críticos:

- [ ] **Masa Común Unificada (GND Link):** Comprobar con un multímetro digital la continuidad eléctrica absoluta entre el borne negativo de la batería de potencia (motor) y el pin GND de la placa lúdica Arduino Mega. Una masa flotante generará ruido eléctrico que alterará las lecturas analógicas de los sensores.
- [ ] **Calibración de Neutro SbW:** Energizar el vehículo y validar mediante el monitor serial que el servomotor esté recibiendo la señal exacta de centro a **94 grados**, asegurando que las ruedas delanteras queden perfectamente paralelas ($90^\circ$) respecto al eje longitudinal central del chasis.
- [ ] **Torque Estático de Fijación:** Verificar visual y mecánicamente el apriete de los 4 tornillos M3 de la brida azul del motor TurboSnake y el tornillo central del brazo del servo.
- [ ] **Despeje de Líneas de Fuerza:** Inspeccionar que ningún cable de datos roce o esté expuesto a la zona de fricción abierta del piñón de ataque del tren de tracción posterior o del diferencial mecánico de engranajes planetarios.

---
**Documentación Técnico de Ingeniería de Competición generada por TEAMROBOTICACRV.**
**Filosofía de Escudería 2026: *"Adaptarse para ganar"*. Todos los derechos reservados.**
