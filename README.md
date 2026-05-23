# Engineering Document/Trivilyn3.0 
Nuestro prototipo es un vehículo autónomo diseñado para la categoría futuros ingenieros temporada 2026 WRO. En el que el equipo combina sus conocimientos y destreza en la robótica(Mecánica, Electrónica, programación y automatización)  para la elaboración de (Trivilyn) y lograr el máximo desempeño en la categoría.

<img width="1280" height="518" alt="image" src="https://github.com/user-attachments/assets/348aa223-d3f9-4a99-beae-81b8cf399c66" />


# ÍNDICE

## 📌Tabla de contenido

 1.[Engineering Document/Trivilyn3.0](#Engineering-Document/Trivilyn30)

2.[MIEMBROS DEL TEAMROBOCRV](#MIEMBROS-DEL-TEAMROBOCRV)

   * [Dennis Adrian Silva Riera](#Dennis-Adrian-Silva-Riera)
   
   * [Gianni Marcello Martucci Jerez](#Gianni-Marcello-Martucci-Jerez)
   
   * [Juan Andres Graterol Teran](#Juan-Andres-Graterol-Teran)
         
   * [Tutor](#Tutor-Luis-Eduardo-Paredes)

3. [Movilidad y Diseño Mecánico](#Movilidad-y-Diseño-Mecánico)

   * [Tracción y Dirección](#Tracción-y-Dirección)
  
   * [Movimiento Parte trasera](#¿Como-logramos-que-se-mueva-con-un-solo-motor?)
  
   * [Movilidad parte delantera](#Movilidad-parte-delantera)
  
   * [Base inferior](#Primer-piso)
  
   * [Base central](#Segundo-piso)
  
   * [Base superior](#Tercer-piso)

4. [Arquitectura de Potencia y Sensores](#Arquitectura-de-Potencia-y-Sensores)

5. [Arquitectura Software y Estratrgia](#Arquitectura-Software-y-Estratrgia)
   
   * [Resumen del Proyecto](#Resumen-del-Proyecto)
  
   * [Arquitectura del Software](#Arquitectura-del-Software-(Máquina-de-Estados-de-Misión))
  
   * [Análisis de Rendimiento](#Análisis-de-Rendimiento-Optimización-de-Tiempo-vs-Fiabilidad)

6. [Pensamiento sistémico y decisiones de ingeniería](#Pensamiento-Sistémico-y-Decisiones-de-Ingeniería)

   * [Temporada 2024](#Temporada-2024-Rexbot10)
  
   * [Temporada 2025](#Temporada-2025-Rexbot20)
  
   * [Temporada 2026](#Temporada-2026)
  
7. [Archivos CAD](#Archivos-CAD)

8. [Fotos de Trivilyn3.0](#Trivilyn-360)

9. [Videos de Trivilyn3.0](#Rrivilyn3.0-Challenges)

10. 

# MIEMBROS DEL TEAMROBOCRV

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

Control de Calidad: Revisa que la estructura física sea resistente y que no haya fallos mecánicos durante las pruebas.

Apoyo Logístico: Colabora en la preparación de las pistas de prueba, recolección de datos y mantenimiento preventivo del robot.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/51b3d7c0-b54a-4267-ae77-e930a64322b0" />



## 👤Tutor/Luis Eduardo Paredes

### Rol: Orientar al equipo en la planificación del proyecto y el cumplimiento de los plazos de entrega.

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/12b81259-f88b-43d7-be25-c19f183fe3eb" />


# 🔩 Movilidad y Diseño Mecánico

## Tracción y Dirección:

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




Este motor es el corazón del desplazamiento y uno de los componentes principales para que Trivilyn tenga su desempeño. 

Todo lo mencionado anteriormente se sostiene con una base diseñada en 3D por el equipo. (Recordamos que los diseños como este se encuentran en el apartado de Archivos CAD).

<img width="942" height="621" alt="image" src="https://github.com/user-attachments/assets/ba459d5c-70a8-4925-a69b-d3ea4a817476" />

Esta base funciona como una especie de tapa y abrazadera realizada a medida, evitando vibraciones y fallos para sostener toda la tracción trasera de Trivilyn; encaja con los soportes del eje trasero principal, siendo así las partes laterales de la caja de engranajes y la parte central de la caja de engranajes.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/969327b4-2068-40c5-84bb-7d25c7d60139" />

que al lograr encajar con el sistema de engranajes se fija a la primera base de Trivilyn por 4 tornillos

Si se puede observar el soporte en la parte inferior tiene una especie de “Vena” 

<img width="821" height="595" alt="image" src="https://github.com/user-attachments/assets/fd59e9b5-5196-427c-8350-e0658c74a73f" />

Es una extencion de filamento cuya funcion es solucionar que en versiones anteriores de este soporte se fracturaba esa zona problema que resuelve esta “vena” que actúa como un refuerzo y proporciona varias ventajas como:

- La vena añade una estructura perpendicular o diagonal que "amarra" las capas principales. Al tener una geometría curva, las líneas de extrusión de la impresora envuelven la pieza, creando una especie de "esqueleto" externo que mantiene las capas unidas bajo presión.

- Esto hace que la pieza sea mucho más resistente a la flexión. En un robot de competencia, los motores y el movimiento generan vibraciones; la vena asegura que el soporte se mantenga rígido y no "oscile", lo cual terminaría quebrando el PETG.

## Movilidad parte delantera: 

La movilidad en la parte delantera: aquí nos referimos al sistema de dirección (control de giros del robot), ruedas frontales y todos los componentes de estos para unirse entre sí.

Para esta parte de Trivilyn 3.0 nos basamos en la plataforma estable de Trivilyn 2025; Para esta temporada 2026 hemos conservado el sistema de dirección por su alta confiabilidad, pero hemos aplicado dos optimizaciones críticas en la respuesta dinámica y la durabilidad de los materiales, las cuales son:

1.Principalmente imprimimos los componentes nuevamente en PETG porque es un material mas resistente al desgaste y posibles fracturas que el PLA, sin embargo desde un punto mas profesional estos son las ventajas de utilizar PETG:

- El PETG (Polietileno Tereftalato Glicol) es químicamente más estable.

- Durante la competencia, los motores DC y los drivers de potencia generan calor. El PLA puede empezar a ablandarse o deformarse si está cerca de una fuente de calor constante o si el robot se deja bajo el sol/luces intensas del evento. El PETG mantiene su integridad estructural.

- El PETG es más "tenaz" (ductilidad). Tiene la capacidad de absorber energía deformándose elásticamente antes de romperse. En un choque, una pieza de PETG tiene más probabilidades de flexionarse y volver a su forma, mientras que una de PLA se rompería, dejando al robot fuera de la competencia.

- El PLA es biodegradable y sensible a la humedad (higroscópico), lo que puede degradar sus propiedades mecánicas con el tiempo. El PETG es resistente al agua y a muchos químicos, lo que garantiza que las piezas del robot no se vuelvan quebradizas meses después de haber sido impresas.



2.Se Realizo un cambio al tubo transversal.Este cambio del del tubo consiste en su material no en sus medidas o formas, decidimos hacerlo de bronce en un torno por las principales ventajas:

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

(Imagen) que el equipo adquirido en Amazon. ¿Por qué no se usan servos convencionales? Esto tiene un motivo, ya que utilizamos versiones más convencionales en prototipos anteriores de nuestro robot. (El porqué de esta decisión y los retos por los que tuvo que pasar el equipo para tomar esta decisión se pueden conseguir más a detalle en el apartado de «Pensamiento sistémico y decisiones de ingeniería: Evolución»).

## Tipo de Direccion y Como funciona

- Este contiene un sistema de dirección (Steer-by-Wire) que cada rueda puede moverse independientemente, aunque están montadas en un eje común (lo cual sugiere una posible adaptación diferencial) Ya que la rueda interior gira ligeramente más que la otra, de modo que el robot se mantiene en el mismo arco sin deslizamiento. (Derrape). 

- Con este sistema de direccion, logramos obtener resultados de que trivilyn logre un giro con angulo de 80 grados(Imagen)

- siendo así mas ágil para llegar a cumplir sus objetivos, (giros a gran velocidad, sortear objetos de manera optima, salir del estacionamiento en paralelo).

para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero, esta consiste en 3 partes principales:

1. Encaje de palanca de acero a base en 3D(imagen) 

Esta base fue rediseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y, también, para que encajara perfectamente la pieza de hierro a presión y evitar todo el juego posible (imprecisión de los componentes).

2.Luego de encajar esta pieza, utilizamos un tipo de abrazadera, que sostiene el buje del eje con forma de cruz extraido de un kit Legoeo EVE3(imagen)

3.Para centrar y estabilizar su eje utilizamos retenes de lego amarillos (imagen)

Dos por la parte interior y uno por la parte exterior por cada lado. Estos se encargan de sujetar los ejes de las ruedas al sistema de dirección; luego, el diferencial «tubo transversal», ya antes lubricado con vaselina.

## Primer piso

La base inferior al igual que las demas piezas de Trivilyn3.0 esta realizada en impresión 3D del material PETG de la marca Creality el cual adquirimos mercadolibre de la tienda oficial de Creality ubicada en Caracas 

<img width="720" height="908" alt="image" src="https://github.com/user-attachments/assets/2a5402ab-edbf-4f81-a66b-1d7afbf8ecc6" />


La base tiene unas medidas de 90mm de ancho × 170mm de largo x 48mm de alto 

<img width="1026" height="602" alt="image" src="https://github.com/user-attachments/assets/fdf955ae-db07-4ce8-8c70-926ecb760103" />


con una forma innovadora en su diseño como las líneas de relieve en la parte superior

<img width="1092" height="500" alt="image" src="https://github.com/user-attachments/assets/3c8b125a-6743-4085-a913-d51589e3d74d" />

estas cumplen una función muy importante en el diseño de manera directa la cual es dar mayor rijides a la base para evitar deformaciónes o fracturas.Para esto el equipo se inspiro en las formas de los chasis de los vehiculos.

Aunque anteriormente nunca hemos tenido problemas con deformaciónes empleamos estos ("Refuerzos") para prevenir problemas en un futuro y Trivilyn3.0 pueda soportar cualquier irregularidad

Ya explicado esto Si pueden observar:

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

Para finalizar la explicación de esta base, posee 3 pilares que se encargan de sostener el segundo piso posicionados estratégicamente 2 en la parte trasera y una en la parte frontal estás se encargan de soportar los demás pisos de Trivilyn

<img width="1035" height="609" alt="image" src="https://github.com/user-attachments/assets/e42034b6-7c6a-4100-a12e-f25d8e6446b7" />

Sus medidas son de 7 mm de largo x 6.5 mm de ancho x 45 mm de alto y, en la parte inferior de cada pilar, se implementaron soportes en forma de rampa en la base de los pilares que sostienen el segundo nivel del chasis. Esta geometría de cartela estructural tiene como objetivo principal la triangulación de fuerzas, proporcionando rigidez ante los momentos flectores generados por la inercia del robot en fases de aceleración y frenado. El diseño inclinado no solo optimiza la distribución de cargas hacia el chasis principal, sino que mejora la viabilidad de la impresión en PETG al eliminar la necesidad de soportes externos, garantizando una unión mecánica superior entre niveles.

<img width="967" height="591" alt="image" src="https://github.com/user-attachments/assets/75062dcb-3c39-4e53-b115-7a81c80a3a00" />


## Segundo piso

Para el segundo piso de Trivilyn 3.0, el diseño tuvo una reestructuración, siendo la más notoria su tamaño: su anchura aumentó de 90 mm a 100 mm, mantuvo sus 181.50 mm de largo y su altura aumentó de 5 mm a 38 mm en el momento en que se implementó el sistema para regular la altura de los sensores.
<img width="904" height="664" alt="image" src="https://github.com/user-attachments/assets/f934e917-c560-4c97-a5e7-f0c92a428258" />

<img width="1066" height="640" alt="image" src="https://github.com/user-attachments/assets/b309783a-532b-4e0a-9540-0df9a5505ec8" />

Se observan refuerzos triangulares (nervios) en los pilares laterales de la base beige. Estos refuerzos aseguran que, aunque el sensor esté en su posición más alta, la estructura no vibre, manteniendo la estabilidad de la "mirada" de Trivilyn3.0 durante aceleraciones bruscas.

<img width="1016" height="640" alt="image" src="https://github.com/user-attachments/assets/efd4178f-201e-4202-8be9-622de4fc47dc" />

Se implementó un refuerzo perimetral de 2 mm x 3mm en los laterales del segundo piso para optimizar la relación resistencia-peso del chasis. Este diseño incrementa la rigidez mecánica de la plataforma, mitigando las vibraciones que podrían afectar la precisión de los sensores. Asimismo, funciona como un sistema de contención para la gestión de cableado y protección contra impactos laterales, garantizando la integridad de los componentes electrónicos en condiciones de alta exigencia dinámica.

<img width="1039" height="667" alt="image" src="https://github.com/user-attachments/assets/657d39a6-d7f9-4340-aa42-89521c47e9d5" />

Antes de continuar con la explicación de el sistema de regulacion de altura de los sensores,Esta base posee 3 orifios los cuales encajan perfectamente con los 3 pilares de la base inferios de esta manera se fijan entre si, despues a este diseño se le incorporo los sistemas de "Corredera" en la parte frontal y laterales quedando de la siguiente forma:

<img width="1013" height="611" alt="image" src="https://github.com/user-attachments/assets/2dda79fa-1549-480b-8738-4f1b53c8e473" />

Ahora ¿Por qué se agrando su ancho? se agrando para poder darle espacio de giro ya que se reestructuró el posicionamiento de los sensores , ahora su altura es ajustable mediante a y un sistema de corredera diseñado en 3D por nosotros de la siguiente manera: 

### ¿como funciona?

En lugar de usar piezas comerciales limitadas, diseñamos un sistema de rieles macho-hembra impreso en PETG. El acoplamiento entre el soporte del sensor y el segundo nivel se basa en un sistema de corredera de precisión. Mediante una interfaz de rieles y una ranura longitudinal, se logra una integración que permite el ajuste vertical milimétrico. El bloqueo se realiza mediante un sistema de sujeción por fricción con tornillos de acero, lo que garantiza que la calibración de altura sea permanente durante la competencia, absorbiendo las vibraciones del tren motriz sin comprometer la orientación del eje óptico de los sensores.

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

## Tercer piso

El tercer piso de Trivilyn3.0 fue rediseñado en su totalidad, principalmente se cambio a un diseño en forma de ("Cabina") 

<img width="1003" height="621" alt="image" src="https://github.com/user-attachments/assets/a3a6098a-792f-43c9-aca0-985b77d3924a" />

asemejandose a vehiculos como:

- Buga de Carreras, Prototipo de Cross-Country o Fastback Off-Road
<img width="275" height="183" alt="image" src="https://github.com/user-attachments/assets/651aa2bf-e9a9-4847-9a90-d9ba0834eefe" />


-  Vehículos Militares Blindados (MRAP / Humvee Modernos)
<img width="300" height="168" alt="image" src="https://github.com/user-attachments/assets/0158f6df-4120-48de-b617-732ce44e412c" />

## Geometría de Rigidez Estructural Interna

Al inspeccionar la sección inferior interna del encapsulado, se integraron tres nervaduras transversales de refuerzo (vigas longitudinales extruidas en el modelado CAD).

<img width="1204" height="626" alt="image" src="https://github.com/user-attachments/assets/c8acd693-c83b-4391-a0b1-6e80aeb0a8cc" />

 Estas costillas rompen la flexibilidad natural de las capas del polímero, actuando como tensores estructurales. Evitando por completo que la cara superior de la cabina se flexione, hunda o fatiga ante presiones externas de manipulación en boxes o impactos severos durante la carrera.

## Grabado en Relieve Identificativo

La cara frontal externa (el plano inclinado estilo Trophy Truck ) integra una extrusión tipográfica texturizada con el nombre de "TeamCRV Venezuela".

<img width="971" height="556" alt="image" src="https://github.com/user-attachments/assets/88c5eea5-59aa-4b8f-a401-3e9150170681" />

 Más allá del valor estético, reglamentario y de identidad de equipo para la WRO, este relieve altera básicamente la superficie plana de la pieza. Las letras extruídas actúan como un patrón de micronervaduras de refuerzo 
 y rompen la continuidad de la cara plana, incrementando significativamente la resistencia a la torsión de la sección frontal del polímero. Si el robot sufre una colisión directa a alta velocidad, este alivio distribuye las líneas de estrés mecánico a lo largo de la tipografía, evitando que el plástico se agriete o se fracture el frente de la cabina.

# Arquitectura de Potencia y Sensores





# Arquitectura Software y Estratrgia

## 📄 Resumen del Proyecto

Este documento detalla el funcionamiento lógico y la estrategia de control del vehículo autónomo diseñado para la categoría Future Engineers de la World Robot Olympiad (WRO). El sistema está programado para enfrentar dos desafíos críticos en una pista de 3 metros x 3 metros:

- Ronda Abierta: Navegación en un entorno variable con pasillos estrechos (hasta 40 cm), conteo de esquinas y estacionamiento final tras completar tres vueltas.

- Ronda Cerrda: Evasión de elementos aleatorios diferenciados por colores (Rojo/Verde) mediante visión artificial con una cámara HuskyLens .El vehículo emplea una arquitectura de bucle cerrado que integra rutinas de autocentrado constante, rectificación física y una lógica de fin de carrera basada en la detección de un marcador color Magenta.

## ⚙️ Arquitectura del Software (Máquina de Estados de Misión)

El software se basa en un modelo de Control Reactivo gestionado por una Máquina de Estados Finitos (FSM) jerárquica. Este modelo permite coordinar tanto el control dinámico del vehículo como la lógica de misión
(conteo de vueltas y estacionamiento).

### A. Fase de Inicialización y Calibración Estática
Para garantizar un arranque reproducible, se implementó una rutina de configuración única controlada por la variable de estado pepe(inicializada en 0).

Alineación del Tren Delantero: Mediante la instrucción myservo.write(67), el sistema establece un ángulo absoluto de dirección. A diferencia de un motor de tracción, el servomotor permite fijar una posición angular exacta, eliminando desviaciones en el vector de salida.

Gestión de Inercia: Integramos un delay()estratégico para permitir la transición del estado de reposo al movimiento cinematográfico, estabilizando el voltaje del sistema antes de iniciar la lectura de sensores.

Bloqueo de Estado ( pepe++): Este incremento actúa como un interruptor lógico irreversible. Al cambiar el valor de la variable, el flujo del programa garantiza que la secuencia de salida no se reejecute, cediendo el control total a la lógica autónoma.

> [!NOTE] 
> El uso de nombres no convencionales para las variables ( pepe, grasa, tilin,lecler,lewis) es un legado de las fases de prototipado de 2024. Lo que inició como una dinámica de equipo para mitigar la fatiga en el laboratorio, se ha mantenido como un estándar de identidad en nuestro código, simbolizando la evolución histórica del proyecto.

### B. Algoritmo de Navegación y Evasión Dinámica

El sistema procesa la información de una red tri-sensorial ultrasónica mediante dos lógicas principales:

1.Corrección de Trayectoria (Control Bang-Bang): 
El vehículo monitorea constantemente los vectores laterales ( leftDistancey rightDistance). Ante un umbral crítico de aproximación (< 25$cm), el sistema activa microajustes de dirección . Estos son pulsos de corrección de 25 ms en ángulos específicos (73°/115°) que rectifican el rumbo sin inducir oscilaciones incontrolables ( efecto zig-zag ), manteniendo el centro de masa alineado con el carril. 

2.Cinemática de Viraje (Gestión de Esquinas): 
La maniobra de giro se dispara cuando el sensor frontal detecta un rango de colisión inminente entre 42 cm y 52 cm.

- Optimización de la Radio de Giro: Este rango de 10 cm es el "punto dulce" técnico. Girar antes de los 52 cm provocaría un impacto con el vértice interno; girar después de los 42 cm reduciría el ángulo de ataque, provocando una colisión con el muro exterior.

- Compensación de Torque: Durante el viraje, el servo alcanza su deflexión máxima y el PWM del motor aumenta de 80 a 180 . Este incremento de potencia es fundamental para vencer la fricción lateral generada por el ángulo de las ruedas y garantizar que el impulso cinético complete la curva con éxito.

### C. Protocolo de Finalización y Estacionamiento

La misión concluye mediante una validación de estado acumulativo. Al cumplirse la condición if (pepe > 12), que representa las 12 intersecciones de las 3 vueltas reglamentarias, el robot inicia su rutina de cierre:

- Avance de Seguridad: Se ejecuta una traslación final controlada por tiempo ( 2000 ms).

- Posicionamiento final: El sistema asegura que el eje posterior cruce la línea de meta, logrando el estacionamiento autónomo dentro del cuadrante de origen bajo las normativas de la WRO.
  
## Justificación de la Estrategia 

Para que Trivilyn 3.0 sea competitivo, implementamos capas de lógica que permiten al vehículo adaptarse a la variabilidad de la pista sin intervención humana.La arquitectura del software de Trivilyn 3.0 no solo se encarga de la navegación, sino que gestiona una base de datos interna mediante variables de control para garantizar la adaptabilidad y el éxito de la misión.

- Heurística de Decisión: Algoritmo "Tilin/Grasa"

Para que el vehículo sea autónomo en cualquier configuración de pista, implementamos una lógica de decisión binaria en la primera intersección crítica:

Interrogación del Entorno: Al detectar la primera pared frontal ( middleDistance <= 32), el sistema realiza una comparación de vectores laterales:

Vector de Bloqueo ( tilin/ lecrer): Si leftDistance <= rightDistance, el software interpreta que el flanco izquierdo está obstruido. Se activan los contadores de sentido horario ( tilin++y el contador de rendimiento lecrer++).

1.Vector de Apertura ( grasa/ lewis): Si la distancia izquierda es mayor a la derecha, se activa la ruta antihoraria ( grasa++y el contador de rendimiento lewis++).

Redundancia de Estado: Una vez que un contador ( tilino grasa) deja de ser cero, la decisión queda anclada . Esto evita que el ruido ultrasónico a mitad de carrera confunda al robot, garantizando que una vez elegido un sentido (Horario/Antihorario), este se mantiene hasta el estacionamiento final.

2. Gestión de Actuadores y Dinámica de Potencia

El código maneja perfiles de velocidad diferenciados para optimizar el consumo y la tracción:

Velocidad de Crucero ( carSpeed = 65): Configuración para tramos rectos, optimizando la estabilidad de lectura de los sensores.

Velocidad de Maniobra ( carSpeedCurvas = 90): Durante las funciones derecha()e izquierda(), el PWM aumenta para vencer la resistencia por fricción de los neumáticos de 43mm en el momento del giro.

3. Control de Lazo Cerrado: Micro-ajustes Laterales

Para mitigar el error acumulado, el código implementa una rutina de activador reactivo:

Umbral de colisión (9 cm): Si cualquiera de los sensores laterales detecta una proximidad menor a 9 cm, se interrumpirá el flujo principal para ejecutar un pulso de corrección de 30 ms .

El sistema utiliza centros de dirección específicos según el sentido de la carrera ( centroAo centroH), compensando mecánicamente cualquier desviación propia del chasis impreso en 3D.

4. Procesamiento de Señal y Filtrado de "Eco Nulo"

Debido a que las paredes de la WRO pueden generar reflexiones erráticas, se implementó una condición de validación en las lecturas:

Filtro distance > 1: Esta instrucción filtra las lecturas de 0 cm que genera la librería NewPingcuando no recibe retorno. Al ignorar estos "ecos nulos", evitamos que el robot realice maniobras de evasión ante obstáculos inexistentes.


5. Registro de Variables de Control (Telemetría Interna)
   
<img width="725" height="335" alt="image" src="https://github.com/user-attachments/assets/8200de92-a893-49c3-b3da-48048b0b85e6" />


## Análisis de Rendimiento: Optimización de Tiempo vs Fiabilidad

En el desarrollo de Trivilyn 3.0 , el enfoque principal fue la navegación en Centro Aleatorio (pasillos de 40 cm). Realizamos una comparativa entre nuestra configuración base y nuestra configuración de alto rendimiento para la WRO.

- Prueba de Consistencia (Lenta)	40 seg	100%	Navegación conservadora, correcciones suaves

- Prueba de Velocidad (Rápida)	25 seg	80%	Agresividad en curvas (PWM 190) y aceleración máxima.
  
###  Justificación Técnica de la Tasa de Error en Alta Velocidad

Pasar de 90 a 45 segundos implica duplicar la velocidad media del vehículo. Según nuestros datos, el descenso del 20% en la confiabilidad se debe a tres factores físicos críticos:

1. Latencia de Muestreo Ultrasónico (Sensor Lag)
   
A máxima velocidad, el robot registra más distancia entre cada pulso del sensor ( sonar.ping_cm()).

Efecto: En un pasillo aleatorio de 40 cm, el margen de maniobra es mínimo. Si el sensor emite un pulso y el robot se mueve 10 cm antes de recibir el eco, la decisión de giro se toma con una posición "desfasada", provocando que el chasis golpee la esquina interna.

2. Inercia y Momento Lineal
   
El peso del segundo piso (110 mm de ancho) y los componentes generan una inercia que es difícil de detener instantáneamente.

 Al entrar en una curva a 25 segundos de ritmo, la fuerza centrífuga empuja al robot hacia el muro exterior. Aunque el software ordene girar, los neumáticos de caucho de 43mm pueden sufrir un deslizamiento lateral ( deriva ), alterando el ángulo de salida y obligando al sistema de microajustes a trabajar al límite.

3. Ruido Ultrasónico por Vibración Mecánica
   
A PWM 180, los motores de 15,000 RPM generan vibraciones de alta frecuencia que pueden interferir con la cápsula del sensor ultrasónico.

Efecto: Esto genera lecturas "fantasmales" o ecos falsos. Aunque nuestro filtro distance > 1elimina los ceros, la vibración puede causar variaciones de ±2 cm en la lectura, suficientes para disparar una corrección lateral innecesaria en un pasillo tan estrecho como el de 40 cm.

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
     
 ## Conclusión: 
 
- Trivilyn 3.0 ha pasado de ser un diseño reactivo simple a un sistema autónomo capaz de analizar su entorno, corregir su trayectoria milimétricamente y tomar decisiones lógicas basadas en la historia de la misión. La combinación de una estructura mecánica robusta y un software resistente nos permite afrontar la competencia con un alto grado de confianza.

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

## ¿Cómo funciona la "fuerza" de Trivilyn 3.0? (Sistema de Engranajes)

Tomando como base una configuración de tres etapas con los engranajes de 8, 30, 5, 26, 5 y 20 dientes, el cálculo se desglosa de la siguiente manera: 

- La primera etapa reduce la velocidad del motor 3.75 veces.

- La segunda etapa toma esa velocidad ya reducida y la vuelve a reducir 5.2 veces más.

- La tercera etapa toma eso y lo reduce 4 veces más.

- La cuenta final es: 3.75 x 5.2 x 4 = 78:1
 
 Esto significa que la relación de reducción es 78:1. 
 
 3. Análisis de Rendimiento Para obtener datos reales de salida, debemos considerar el efecto de esta reducción en la velocidad y el par motor (torque):

 Parámetro Efecto de la Reducción Fórmula Teórica Velocidad (RPM)Disminuye 78 veces n salida =78/nEntrada Torque (Nm) Aumenta 78 veces* salida =M entrada 78 η 
 
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

# Temporada 2026

##  Gestión de Fricción y Compatibilidad Química
 
En la ingeniería de Trivilyn 3.0 , la lubricación no se considera un mantenimiento externo, sino un componente crítico del sistema de transmisión . La elección de la vaselina neutra frente a lubricantes industriales (como la grasa azul) es el resultado de un análisis de interacción entre materiales y termodinámica.

Durante las fases de prueba con Rexbot 1.25, detectamos que las grasas industriales con base de petróleo y aceites lubricantes como el 3 en 1 y 5 en 1 degradaban químicamente nuestras piezas impresas en PLA y PETG .

Esto ocasionaba que el lubricante rompía las cadenas de polímeros, provocando microfracturas que terminaban por destruir los dientes de los engranajes bajo carga. Este es un error común que ocurre cuando no se analiza la compatibilidad química entre el lubricante y el plástico.

1.Protección del Sistema de Transmisión:

El motor del Turbo Snake opera a revoluciones extremas (15.000 RPM), lo que genera un aumento de temperatura por fricción en el piñón de ataque.

Compatibilidad de Polímeros: A diferencia de las grasas industriales que causan ESC (Environmental Stress Cracking) en el PETG y PLA, la vaselina es químicamente inerte. Esto evita que los dientes de los engranajes se vuelvan quebradizos, garantizando que la relación de 78:1 mantenga su precisión durante los 40 segundos de alta exigencia en la prueba rápida.

Estabilidad Térmica: La vaselina crea una barrera que disipa el calor, evitando que el eje metálico del motor ablande el soporte plástico del engranaje primario, lo que causaría una pérdida de alineación mecánica.

2. Movilidad del Tren Delantero (Tubo Transversal)

En este punto, la vaselina actúa como un agente de reducción de fricción estática. Al lubricar el contacto entre el tubo transversal y el chasis, permitimos que la suspensión reaccione de forma instantánea y suave.

 Si este eje se traba por fricción, el robot se inclina, lo que desvía el ángulo de visión de la HuskyLens y las lecturas de los sensores ultrasónicos. La lubricación constante asegura que el "cuerpo" del robot se mantenga nivelado, proporcionando datos limpios al código de navegación.

### Seleccionamos vaselina neutra como lubricante principal por tres razones sistémicas:

1.Neutralidad Química: Al ser un hidrocarburo saturado de alta pureza, no reacciona con el PETG de nuestra caja de engranajes de 78:1 . Esto garantiza que la integridad estructural de la transmisión se mantendrá intacta durante toda la temporada.

2.Gestión Térmica de las 15.000 RPM: El motor del Turbo Snake genera una fricción mecánica considerable en el primer piñón. La vaselina crea una película protectora que reduce el calor por rozamiento, evitando que el eje del motor (que se calienta) ablande el plástico del engranaje y lo deforme.

3.Viscosidad Adaptativa: A diferencia de los aceites líquidos que se esparcen por la fuerza centrífuga, la vaselina tiene la viscosidad justa para quedarse adherida a los dientes del engranaje incluso a altas revoluciones, manteniendo la lubricación constante durante los 40 segundos de la prueba rápida.

>[!NOTE]
>Aunque el análisis técnico destaca las propiedades de la vaselina, es importante señalar que una de las mayores ventajas de esta solución es su universalidad . Para el mantenimiento de Trivilyn3.0 , no se requiere un lubricante de grado industrial especializado o de alto costo.Cualquier variante de vaselina sólida (petrolato amarillo o blanco) es funcional para este sistema, siempre que sea de consistencia pastosa y no líquida. Esto permite realizar mantenimientos de emergencia en cualquier entorno de competición utilizando productos comerciales de fácil acceso.

##  Adaptabilidad Sensorial

En esta sección, no hablamos de piezas, hablamos de estrategia y resiliencia del sistema.

1. Análisis de Fallo del Entorno (Lección WRO 2025)

- El pensamiento sistémico nos permitió identificar que el robot no es un ente aislado, sino que depende directamente de las variables de su entorno (la pista). En la Final Nacional 2025, detectamos un fallo crítico: el sistema de navegación fallaba no por el código, sino por una falta de correspondencia física entre la altura de los sensores y la altura de las paredes. El Rexbot2.0 estaba 'ciego' ante paredes bajas. Bajo una visión sistémica, decidimos que Trivilyn 3.0 no debía ser un diseño rígido. En lugar de simplemente bajar los sensores, diseñamos un mecanismo de respuesta física (la corredera). Esto permite que el componente mecánico se ajuste a la realidad del entorno en tiempo real, asegurando que el flujo de datos hacia la CPU sea siempre óptimo, sin importar las variaciones de la infraestructura de la pista.

## Evolución del Sistema de Interconexión: 

La confiabilidad de un vehículo autónomo de competición no solo reside en su código, sino en la integridad de sus señales físicas. Para Trivilyn3.0 , hemos transitado por un proceso de mejora continua en nuestro cableado para eliminar el enemigo número uno de la robótica: el falso contacto .

Nuestra evolución se divide en tres etapas principales:

Etapa 1: Jumpers Convencionales (Kits de Prototipado)

Como en todo inicio, utilizamos los cables prefabricados comunes (Macho-Hembra).

- Con estos cables obtuvimso problemas en que los conectores tienen mucha holgura. Con la vibración de los motores, se soltaba el Arduino o perdía continuidad momentánea, provocando reinicios inesperados del sistema. Además, el exceso de cableado afectaba la estética y el orden.

Etapa 2: Cables de Red Estándar (UTP Categoría 6)

Para mejorar la estabilidad, pase a usar cables de red convencionales (Ethernet).

Con estos se mejoro con el uso de pares trenzados ayudó a reducir la diafonía (interferencia entre cables). Son cables más rígidos que los jumpers, lo que permitía que las conexiones fueran más seguras. Sin embargo, seguíamos buscando una protección superior para entornos de alta interferencia electromagnética.

Etapa 3: Cableado Industrial de Alta Gama (Recuperado de Kodak)

La evolución final y actual consiste en el uso de conductores especializados extraídos de infraestructuras de fotocopiadoras e impresoras industriales Kodak. Decidimos utilizar estos por las siguientes ventajas:

- Decidimos utilizar estos cables porque son superiores a los de red comunes por su blindaje SFTP (Shielded Foiled Twisted Pair).

- Poseen una malla metálica y blindaje que actúa como una Jaula de Faraday , protegiendo las señales críticas de los sensores del ruido generado por los motores de 15.000 RPM, esto proporciona Inmunidad al Ruido (EMI).

-  Son conductores diseñados para durar años en máquinas de uso rudo. Soportan tirones y vibraciones constantes sin quebrarse, asegurando que el PWM de 180 llegue al motor con total integridad.
-  
<<img width="1280" height="614" alt="image" src="https://github.com/user-attachments/assets/65b7bfb5-3a7d-4d43-9256-41c4458b69d9" />


>[!NOTE]
>  El uso de componentes recuperados de maquinaria Kodak no solo es una decisión de costo, sino de calidad. Estos cables ofrecen un calibre de cobre y un blindaje que es difícil de encontrar en componentes de electrónica de consumo común.Cada cable fue soldado y protegido con termocontraíble (termocontraíble), eliminando los terminales de presión de los jumpers que eran nuestro punto de falla principal.
