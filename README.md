# Engineering Document/Trivilyn3.0 
Nuestro prototipo es un vehículo autónomo diseñado para la categoría futuros ingenieros temporada 2026 WRO. En el que el equipo combina sus conocimientos y destreza en la robótica(Mecánica, Electrónica, programación y automatización)  para la elaboración de (Trivilyn) y lograr el máximo desempeño en la categoría.

<img width="1590" height="644" alt="image" src="https://github.com/user-attachments/assets/3cda8af7-7508-41e8-81a8-01996fec2341" />

# ÍNDICE

## 📌Tabla de contenido

 1.[Engineering Document/Trivilyn3.0](#Engineering-Document/Trivilyn30)

2.[MIEMBROS DEL TEAMROBOCRV](#MIEMBROS-DEL-TEAMROBOCRV)

   * [Dennis Adrian Silva Riera](#Dennis-Adrian-Silva-Riera)
   
   * [Gianni Marcello Martucci Jerez](#Gianni-Marcello-Martucci-Jerez)
   
   * [Juan Andres Graterol Teran](#Juan-Andres-Graterol-Teran)
         
   * [Tutor](#Tutor/Luis-Eduardo-Paredes)

3. [Movilidad y Diseño Mecánico](#Movilidad-y-Diseño-Mecánico)

   * [Tracción y Dirección](#Tracción-y-Dirección)
  
   * [Movimiento Parte trasera](#¿Como-logramos-que-se-mueva-con-un-solo-motor?)
  
   * [Movilidad parte delantera](#Movilidad-parte-delantera)
  
   * [Base inferior](#Primer-piso)
  
   * [Base central](#Segundo-piso)
  
   * [Base superior](#Tercer-piso)

4. [Arquitectura de Potencia y Sensores](#Arquitectura-de-Potencia-y-Sensores)

5. [Arquitectura Software y Estratrgia](#Arquitectura-Software-y-Estratrgia)
   
6. [Pensamiento sistémico y decisiones de ingeniería](#Pensamiento-Sistémico-y-Decisiones-de-Ingeniería)

   * [Temporada 2024](#Temporada-2024-Rexbot10)
  
   * [Temporada 2025](#Temporada-2025-Rexbot20)
  
   * [Temporada 2026](#Temporada-2026)
  
7. [Archivos CAD](Archivos-CAD)

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

Esto se logra mediante a una caja de engranajes realizada a medidad que posee un eje tipo cruz basado en los que vienen en los kit de lego echo de acero con medidas de 2.8mm de ancho y 4.2mm de alto, su largo es de 119mm, tiene un refuerzo de teflón industrial por alrededor del eje para evitar ser doblado o pandeado por el peso del prototipo.

La caja reductora o caja de engranajes esta conformada internamente por 3 engranejes 
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/d757209c-56f3-45bb-a624-5c35fda9360d" /> 

- Trilvilyn se desplaza gracias a lo mencionado anteriormente, pero el que se encarga de dar el inicio del movimiento es un motor Dc de 3  a 6 voltios logrando 13 mil y 15 mil rpm.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/db57e1e8-c39f-4611-a939-cd46dfc346db" />

Esta insertado en la parte lateral de la caja de engranajes de la siguiente manera

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/51318156-a986-46b9-8569-d86d30154f6d" />

Aclaramos que estos motores se extrajeron de un turbo snake 

<img width="894" height="465" alt="image" src="https://github.com/user-attachments/assets/b64f1439-2ba3-4914-9b02-4640ddfbcb7d" />

y se pueden extraer de distintos tipos de vehículos a control remoto como:



Este motor es el  corazón del desplazamiento y uno de los componente principales para que Trivilyn tenga su desempeño. Ýa explicado esto pasamos a la parte de:

### ¿Con que sostiene todo esto? 

Todo lo mencionado anteriormente se sostiene con una base diseñada en 3D por el equipo(Recordamos que los diseños como este se encuentranen el apartada de Archivos CAD)

<img width="942" height="621" alt="image" src="https://github.com/user-attachments/assets/ba459d5c-70a8-4925-a69b-d3ea4a817476" />

Esta base funciona como una especie de tapa y abrazadera realizada a medida evitando vibraciones y fallos para sostener toda la tracción trasera de Trivilyn encajando  con los soportes del eje  trasero principal, siendo así las partes laterales de la caja de engranajes y la parte central de la caja de engranajes

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/969327b4-2068-40c5-84bb-7d25c7d60139" />

que al lograr encajar con el sistema de engranajes se fija a la primera base de Trivilyn por 4 tornillos

Si se puede observar el soporte en la parte inferior tiene una especie de “Vena” 

<img width="821" height="595" alt="image" src="https://github.com/user-attachments/assets/fd59e9b5-5196-427c-8350-e0658c74a73f" />

Es una extencion de filamento cuya funcion es solucionar que en versiones anteriores de este soporte se fracturaba esa zona problema que resuelve esta “vena” que actúa como un refuerzo y proporciona varias ventajas como:

- La vena añade una estructura perpendicular o diagonal que "amarra" las capas principales. Al tener una geometría curva, las líneas de extrusión de la impresora envuelven la pieza, creando una especie de "esqueleto" externo que mantiene las capas unidas bajo presión.

- Esto hace que la pieza sea mucho más resistente a la flexión. En un robot de competencia, los motores y el movimiento generan vibraciones; la vena asegura que el soporte se mantenga rígido y no "oscile", lo cual terminaría quebrando el PETG.

## Movilidad parte delantera: 

La movilidad en la(Parte delantera) aquí nos referimos a el sistema de direccion(control de giros del roboot), ruedas frontales y todo los componentes de estos para unirse entre si.
Para esta parte de Trivilyn3.0 nos basamos en la plataforma estable de Trivilyn 2025, para esta temporada 2026 hemos conservado el sistema de dirección por su alta fiabilidad, pero hemos aplicado dos optimizaciones críticas en la respuesta dinámica y la durabilidad de los materiales, las cuales son:

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


Ya teniendo claro esto podemos iniciar con explicar ¿Que hace que se mueva las ruedas frontales ? El encargado de esto es un servomotor que esta fijado a la base priincipal de trivilyn con sus respectivos tornillos y tuercas.Este servomotor no se convencional como los modelos sg90 o MG95 es un servomotorHobbyPark 35kg (Modelo HD3523MG).Sistema de moviento que se implemento en Rexbot2.0 y decidimos conservar esta parte ya que cumple su funcion de manera precisa.

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

(Imagen) que el equipo adquirio en Amazon ¿Porque no se usan servos convencionales? Esto tiene un  motivo ya que utilizamos versiones mas convencionales en prototipos anteriores de nuestro Robot(EL porque de esta decision y los retos que tuvo  que paso el equipo para tomar esta decision se puede conseguir mas a detalle en el apartado de"Pensamiento sistémico y decisiones de ingeniería Evolución)")

## Tipo de Direccion y Como funciona

- Este contiene un sistema de dirección (Steer-by-Wire) que cada rueda puede moverse independientemente, aunque están montadas en un eje común (lo cual sugiere una posible adaptación diferencial) Ya que la rueda interior gira ligeramente más que la otra, de modo que el robot se mantiene en el mismo arco sin deslizamiento. (Derrape). 

- Con este sistema de direccion, logramos obtener resultados de que trivilyn logre un giro con angulo de 80 grados(Imagen)

- siendo así mas ágil para llegar a cumplir sus objetivos, (giros a gran velocidad, sortear objetos de manera optima, salir del estacionamiento en paralelo).

para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero, esta consiste en 3 partes principales:

1. Encaje de palanca de acero a base en 3D(imagen) 

Esta base fue re diseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y también para que encajara perfectamente la piesa de hierro a precion y evitar todo el juego  posible(impresicion de los componentes)

2.Luego de encajar esta pieza, utilizamos un tipo de abrazadera, que sostiene el buje del eje con forma de cruz extraido de un kit Legoeo EVE3(imagen)

3.Para centrar y estabilizar su eje utilizamos retenes de lego amarillos (imagen)

Dos por la parte interior y uno por la parte exterior por cada lado ¿Por que los ponemos? Estos se encargan de sujetar los ejes de las ruedas al sistema de direccion , luego el diferencial “tubo transversal” ya antes lubricado con vaselina 

¿Por que se tiene que lubricar ? 

Nos dimos cuenta que si no lo lubricamos antes de probar el veiculo le va acostar mas los giros y pueden preoducir que varien.

¿Porque se lubrica con vaselina y no con otra cosa? 

Tras diversas pruebas realizadas por el equipo, se descartó el uso de un eje de transmisión sólido (eje rígido).En un eje sólido, ambas ruedas se ven obligadas a girar a la misma velocidad angular. Sin embargo, en curvas, la rueda exterior describe un arco mayor que la interior. Esto generaba un fenómeno de derrape por arrastre, restando precisión a la trayectoria calculada por la HuskyLens. 

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


está forma decreciente en la parte frontal de la base es el espacio necesario para que el sistema de dirección tenga una movilidad de 40° por lado y fue diseñado de esta forma en base al sistema de direccion que implementamos en Trivilyn.

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

Sus medidas son de 7mm de largo x 6.5mm de ancho x 45mm de alto y en la parte inferior de cada pilar se implementaron soportes en forma de rampa en la base de los pilares que sostienen el segundo nivel del chasis. Esta geometría de cartela estructural tiene como objetivo principal la triangulación de fuerzas, proporcionando rigidez ante los momentos flectores generados por la inercia del robot en fases de aceleración y frenado.El diseño inclinado no solo optimiza la distribución de cargas hacia el chasis principal, sino que mejora la viabilidad de la impresión en PETG al eliminar la necesidad de soportes externos, garantizando una unión mecánica superior entre niveles.

<img width="967" height="591" alt="image" src="https://github.com/user-attachments/assets/75062dcb-3c39-4e53-b115-7a81c80a3a00" />


## Segundo piso

Para el segundo piso de Trivilyn 3.0 el diseño tuvo una reestructuración, siendo la más notoria su tamaño su anchura subió de 90mm a 122mm mantuvo sus 181.50mm de largo su altura subio de 5mm a 38mm en el momento que se implemento el sistema para regular la altura de los sensores.
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

En lugar de usar piezas comerciales limitadas, diseñamos un sistema de rieles macho-hembra impreso en PETG. El acoplamiento entre el soporte del sensor y el segundo nivel se basa en un sistema de corredera de precisión. Mediante una interfaz de rieles y una ranura longitudinal, se logra una integración que permite el ajuste vertical milimétrico. El bloqueo se realiza mediante un sistema de sujeción por fricción con tornillos de acero, lo que garantiza que la calibración de altura sea permanente durante la competencia, absorbiendo las vibraciones del tren motriz sin comprometer la orientación del eje óptico de los sensores

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

La imagen ilustra la ingeniería de encaje de interferencia diseñada para el sensor ultrasónico. El soporte abraza el PCB con tolerancias de precisión calculadas para el PETG, utilizando una sujeción por fricción. El diseño inteligente deja expuestos los pines de conexión para facilitar el cableado, mientras que el orificio superior central permite que el tornillo M4 de la corredera ejerza una fuerza de bloqueo axial, garantizando que el sensor permanezca en su eje óptico sin movimiento parásito durante la competencia.

 La experiencia de la Nacional 2025 nos enseñó que la rigidez excesiva en el diseño es una debilidad por eso para la Temporada 2026 el equipo hace enfasis en la la filosofia "Adaptarse para ganar". La capacidad de ajustar la altura en segundos durante los tiempos de practica nos da una ventaja competitiva. Si los jueces cambian las especificaciones de la pared o si la pista presenta irregularidades, Trivilyn 3.0 puede recalibrar su visión física sin necesidad de reprogramar el código de detección de distancia.

## Tercer piso


# Arquitectura de Potencia y Sensores





# Arquitectura Software y Estratrgia

## Resumen del Proyecto

Este documentado tiene como objetivo explicar el funcionamiento lógico y estrategia que utilizamos para crear el código que controla al vehículo autónomo que fue diseñado para realizar las pruebas a enfrentar de una competencia llamada WRO de la categoría de futuros ingenieros, costa de que el vehículo tiene que realizar dos prueba abierta que se trata de completar tres vueltas en una pista de competición de 3x3 metros. El sistema debe navegar un entorno variable (centro aleatorizado) que genera pasillos estrechos de hasta 40cm, contabilizar el progreso (esquinas )de la misión y realizar un estacionamiento final en el cuadrante de origen; pero esta no es el única prueba a enfrentar también tiene que hacer la ronda de color, que se trata que el vehículo tiene navegar en una pista 3x3 metros mientras esquiva obstáculos aleatorios diferenciados por colores (rojo o verde ), el sistema emplea una arquitectura de bucle cerrado que integra una cámara de visión HuskyLens que detecta los colores de los obstáculos. La misión principal consiste en completar las vueltas requeridas evadiendo los obstáculos dependiendo del color (Rojo/Verde ) para  ejecutar maniobras de evasión precisas hacia el flanco correcto. Además, el códigos implementa rutinas de autocentrado constante, rectificación por contacto físico en esquinas para eliminar cualquier error o desvío, y una lógica de fin de carrera para estacionar el vehículo en el cuadrante de meta designado tras detectar un marcador de color Magenta.

## Arquitectura del Software de Ronda Abierta (Máquina de Estados de Misión)

El código se ha estructurado como una Máquina de Estados Finitos (que quiere decir esto que tiene un fin el código ) jerárquica para gestionar no solo el control del vehículo, sino también la lógica de la misión (conteo de vueltas y estacionamiento).

A continuancion les describiremos  los Estados de Misión:

 Estado de Salida Preprogramada (if pepe==0): lo primero es que el robot ejecuta una secuencia fija de dirección (myservo.write(67) y retardos para salir de forma segura del cuadro de inicio y alinearse en el carril.
Después sigue el Estado de Navegación (Crucero y Evasión) Este estado activo utiliza los tres sensores ultrasónicos. Se subdivide en:

1.-) (Corrección Lateral): Si los sensores laterales (leftDistance, rightDistance) detectan una distancia < 25cm,se aplican micro-ajustes de servo para centrar el vehículo.

2.-) Giro de Esquina: Cuando el sensor frontal detecta la pared en la distancia crítica (42– —52cm)), se inicia una maniobra de giro (derecha() o izquierda()).

3.-)Estado de Conteo (pepe++): El código incrementa la variable pepe en cada maniobra de giro realizada. Esto permite contar la progresión de la misión (vueltas completadas).

4.-)Estacionamiento Final: (if pepe > 12) Una vez que el contador de giros (pepe) supera 12 (lo que equivale a las 12 esquinas de las 3 vueltas), el sistema entra en modo de parada. Se ejecuta una función de avance final por tiempo (delay(2000)) para asegurar que el robot cruza la línea de meta y se detiene dentro del cuadrante de origen.

Justificación de Umbrales Sensoriales:

   • Rango Frontal Crítico

(42cm ≤ middleDistance ≤52cm) ustedes se preguntarán porque esta distancia bueno pues ya que se aleatoriza el centro se llega a crear pasillos de solo 40cm de ancho.El robot debe iniciar el giro antes de entrar en contacto con la pared o de que la lectura de su sensor delantero se vea afectada por las paredes laterales del pasillo estrecho. Este rango de 10cm de "amortiguación" experimental compensa la inercia del vehículo a carSpeed=80, asegurando que el giro se haga  sin un choque lateral en el pasillo más estrecho.

   • Corrección Lateral Crítica  (<25 cm) 
   
Ustedes se preguntaran el porqué de esta corrección pues muy fácil la verdad esta corrección nos ayuda en muchas cosas una de ella en los pasillos de 40cm,el robot tiene solo un margen de error de pocos centímetros a cada lado. El umbral de 25cm se seleccionó porque es la distancia en la que la señal ultrasónica de los sensores laterales sigue siendo fiable y permite que el servo reaccione (write(115) o write(73)) antes de que se produzca una colisión,tambien no solo nos ayuda en solo esos momentos si no en todo momento ya que es una de las funciones más importante para que se logre la perfección en la prueba, ya que aveces en algún giro puede que no se  logre posicionar al 100% recto y si no tuviéramos esa corrección hubieran variaciones en el transcurso de la prueba provocando colisiones (algo que nos pasaba en anteriores pruebas antes de agregarle esta función al código ) 

Justificación de Lógica de Sentido de Giro:

El robot debe determinar la dirección del carril al inicio de la carrera. Se implementa una lógica condicional (tilin++, grasa++) que actúa de la siguiente manera:

1.)Si al inicio se detecta una pared a la izquierda (leftDistance <= 100), se establece la dirección "Horaria".

2.)De lo contrario, se establece "Antihoraria".

Métrica de Éxito: Esta lógica permitió al robot adaptarse correctamente en el 100% de los escenarios de prueba para ambos sentidos de pista.




Pruebas, Ajustes y Gestión de Fallos
El rendimiento final es el resultado de un proceso de optimización iterativo documentado.


Gestión de Casos Límite (Edge Cases):

• Falla de Datos Sensoriales: La condición distance > 1 en todos los sensores actúa como un filtro básico para el ruido de "eco nulo" (lectura 0), evitando decisiones erróneas basadas en datos falsos.
• Prevención de Carrera Infinita: La variable pepe nos ayuda si por alguna razón el robot se desvía pero sigue detectando obstáculos que interpreta como esquinas, el contador forzará la parada tras un número de ciclos determinado, evitando que el vehículo siga operando sin control de forma indefinida.

Bueno listo  ya terminamos con la explicación, técnica y estrategia de el Software de la ronda 1 ( ronda abierta ) pero no es la única a continuación les explicaremos el funcionamiento , técnica  y estrategias que utilizamos para crear el Software de la ronda 2 ( ronda de evasión de obstáculos).

Comenzaremos con la arquitectura del movimiento y visión 

El software integra un sistema de visión HuskyLens vinculado a una lógica de centrado constante. La arquitectura se basa en mantener al robot en el eje central de la pista para maximizar el campo de visión (FOV) de la cámara y asegurar decisiones simétricas.

### Estrategia de Inicialización y Autocentrado

Para evitar el error de deriva inicial, el robot ejecuta una rutina de calibración al encenderse que es ,. El servo se mueve a los extremos y regresa a la variable centro (97°). Esto asegura que el tren delantero esté alineado mecánicamente antes de avanzar. También contamos con un mantenimiento de Trayectoria(correcciónes)Se utiliza un contador de ciclos (contadorLecturas) que cada 17 iteraciones, fuerza un micro-ajuste de alineación. Esto compensa cualquier desviación mecánica del chasis durante la marcha.

Estrategia de Evasión Selectiva (Lógica de Colores)
La evasión no es un giro simple; es una maniobra coordinada que depende de la posición relativa del objeto en el eje X de la cámara.
Clasificación de Obstáculos por Flancos:
Utilizamos el xCenter y la height de la HuskyLens para dividir la pista en zonas de decisión:

Algo importante es que después de cada maniobra de evasión del color , el robot ejecuta una secuencia de contra-giro para regresar al centro de la pista, preparándose para el siguiente obstáculo o la siguiente esquina.

### Estrategia de Moviemto en Esquinas
 
Debido a que los sensores ultrasónicos pueden tener errores en ángulos oblicuos, hemos implementado una Estrategia de Navegación por Contacto: primero el sensor frontal detecta e identifica la pared a una distancia mínima (middleDistance <= 4), después prosigue a impactarse Controla la pared delantera, el robot se detiene (stop), retrocede un tiempo exacto para ganar espacio de maniobra, y luego ejecuta el giro, después prosigue a la Rectificación de Centro que retrocede recto después del giro y golpear ligeramente para alinearse con la pared posterior, el robot resetea su ángulo y defectos anteriores, Esto garantiza que cada nuevo cuadrante se inicie desde una posición perfecta, eliminando el error acumulado de los obstáculos anteriores.

### Gestión de Casos Límite y Métricas

Para asegurar la solides del sistema en condiciones de competencia, se han programado los siguientes controles como son, el Filtrado por Tamaño de Objeto por ejemplo El robot solo reacciona si result.height > 70, Esto evita "falsos positivos" con objetos lejanos o reflejos en el suelo, actuando solo cuando el obstáculo es una amenaza inmediata. También contamos con un Contador de Misión (Variable pepe) este nos ayuda a Rastrear el progreso del robot,Al llegar a un umbral de paredes detectadas y detectar el color Magenta (ID 11), el robot comprende que ya ha completado la pista y que ya llegó a la zona de meta, ejecutando una maniobra de estacionamiento final. Y por últimos nosotros tenemos diferentes Controles de velocidad para rectas o evasión. Diferenciada  x carSpeed = 52: Velocidad de crucero para máxima precisión de cámara. Y  carSpeedC = 70, Aumento de velocidad durante la evasión para compensar la pérdida de inercia por el giro del servo.


# Pensamiento Sistémico y Decisiones de Ingeniería 




## Temporada 2024 Rexbot1.0 

Trivilyn a través de los años ha tenido muchos cambios desde su primera versión en 2024 hasta lo que es el día de hoy.

2024 Rexbot 1.0 Principalmente su diferencia es el tamaño y sus mecanismos. Está versión es muy rudimentaria, hecha con materiales reciclados. Este robot tuvo 3 versiones principales mediante su transcurso para llegar a la final internacional de Turquía.

1ra regional (Mérida) 

Su chasis estaba conformado por dos niveles, la planta inferior (base) está seleccionada de un kit ya prefabricado y su planta superior fue cortada con un Dremel, con bastantes imperfecciones, su dirección fue extraida de un vehículo a control remoto, con un sistema de corredera, que funcionaba con un servomotor sg90, que al girar para un lado sube la corredera y al bajar tenía el efecto contrario, teniendo así un efecto palanca hacia los lados y mover sus ruedas delanteras con un eje que las une, echo con acetato.

<img width="540" height="610" alt="WhatsApp Image 2026-05-02 at 3 45 30 PM" src="https://github.com/user-attachments/assets/6b317619-f90c-4da6-9673-602f6808ba73" />
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/4567f543-373a-48aa-b031-3e49976f67c4" />

Por parte de tracción tenía un motor DC de 5v extraído de un vehículo a control remoto con su caja de engranajes. Para su detección utilizaba un sensor ultrasónico en la parte frontal, como placa (cerebro) utilizaba una Arduino mega. Alimentado todo por 2 baterías 18650 de 3.8v Este modelo tuvo muchísimos fallos los cuales fueron:

1) falta de potencia en ambos motores, tanto el servo no lograba mover la dirección eficientemente, y la tracción con el motor DC le costaba mucho avanzar a Rexbot1.0

2) falta de detección a los costados, para alcanzar un buen desempeño en la ronda abierta (falta se sensores ultrasónicos)

3) falta de sensor ocular para la ronda cerrada (camara)

4) su dirección tenía un rango de giro muy corto, lo que provocaba que para dar las curvas a 90 grados tendría que retroceder y avanzar. 5) falta de baterías o fuente de energía, solamente utilizamos dos baterías 18650 Con rexbot 1.0 logramos hacer la ronda abierta.

## Nacional Caracas 2024

Para rexbot 1.25 logramos corregir diferentes errores pero aún no era lo suficientemente agil, ya que estaba constituido por un gran tamaño, y su mayor fallo, la detección de colores ya que utilizamos  un sensor rgb. Este prototipo cuenta con su base principal y una superior, en la base inferior contiene el sistema de dirección y sistema de tracción, ya aquí corregimos su problema de giro y de torque, de que manera? De la siguiente

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/faed6657-303a-47ff-9fc6-edd169ceeb7b" />

Su sistema de dirección ahora es tipo palanca, este sistema de dirección cuenta con una palanca que va fija desde el brazo del servomotor hasta el eje de una de las ruedas, que conecta con la otra. Así el servomotor al girar hacia la izquierda o derecha movía esa palanca. Tiene un sistema de calibramiento hecho con un tornillo y una especie de tuerca, para así calibrar y que las ruedas no queden torcidas así evitar que el prototipo vaya torcido. Cabe recalcar que este fue uno de los mayores fallos, con muchas pruebas y probar con diferentes métodos nunca logramos la precisión necesaria para llegar a un rendimiento del 100% 

## Final internacional Turquía 2024 

(Rexbot1.5) Este no obtuvo muchos cambios desde la nacional en Caracas, pero si en su rendimiento. Su mayor cambio fue  aumentarle el tamaño y agregarle un sensor ocular, la cámara huskyleans, está nos ayudó mucho en la detección de objetos y su color( señales de trafico) ya que está contiene una IA integrada en su cerebro, que funciona de la siguiente manera, agarra los valores rgb los procesa y mediante lo que el arroge te manda una ID ya aprendida anteriormente. Su mayor error fue en el sistema de tracción y su tamaño ya que media 25x20cm ya alcanzando casi los límites preestablecidos. Se nos hacía muy complicado estacionar y esquivar objetos por su tamaño y su poca agilidad. para mayor información de este proyecto y nuestros antecedentes aquí está nuestro Github de ese año https://github.com/ROBOTEAMCRV/roboteamCRV

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/df8c4775-64dc-434d-8a1c-3e324067e544" />


# Temporada 2025 Rexbot2.0 

Para la etapa de las regionales lo comenzamos a hacer desde 0, tuvo una reestructuración completa, corregimos la mayoría de errores cometidos en el diseño anterior.

Comenzamos diseñando como sería el sistema de dirección y cuánto rango de giro necesitamos, Ya investigado y analizado errores anteriores, optamos por un sistema de dirección (Steer-by-Wire) que cada rueda puede moverse con cierto grado de independencia, aunque están montadas en un eje común (lo cual sugiere una posible adaptación diferencial o simplemente flexibilidad del tubo). Ya que la rueda interior gira ligeramente más que la otra, de modo que el robot se mantiene en el mismo arco sin deslizamiento. (Derrape). Ya sabiendo cómo sería su dirección, diseñamos una base con forma de F1. ( Imagen base blanca). Está base se utiliza en ambas caras. Cara inferior: base de la caja reductora (tracción) Y se logra evidenciar parte del sistema de dirección. 

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/64a613a7-76f1-4cb8-94ee-6a2d8fbced16" />


Cara superior: contiene el L298(driver) un porta baterias de 2, 18650 y el servo motor mg995r.

La dirección funciona de la siguiente manera para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/990524b0-c7c8-45d3-a1f3-fc57e4ee0549" />

Esta base fue re diseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y también para que encajara perfectamente la pieza de hierro a presión y evitar todo el juego  posible(impresicion de los componentes), luego de encajar esta pieza, utilizamos un tipo de abrazadera, que agarra el buje del eje con forma de cruceta

para centrar y estabilizar su eje utilizamos retenes de lego amarillos
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/59f4dda6-5a0e-40dc-ad73-3c9c41af3f34" />

 ### ¿Por que los utilizamos?
 
 Los dos retenes internos se colocan para fijar el eje al diferencial “tuvo transversal” ya antes lubricado con vaselina ¿Por que se tiene que lubricar ? Nos dimos cuenta que si no lo lubricamos antes de probar el vehículo le va acostar mas los giros y pueden producir que variaciones al momento de girar.

### ¿Porque vaselina y no otro lubricante? 

Inicialmente, se utilizó grasa azul industrial, pero se observó una degradación acelerada en los componentes impresos en 3D.

 La grasa azul suele contener aditivos de litio o solventes derivados del petróleo que son agresivos con polímeros como el PLA o el PETG. Estos químicos provocan agrietamiento por tensión (ESC), penetrando las capas de la impresión y debilitando la unión molecular, lo que causaba que las piezas se volvieran quebradizas.

Ventaja de la Vaselina: Se seleccionó vaselina neutra por ser un compuesto químicamente inerte. Proporciona una viscosidad ideal para los ejes de metal/plástico de Trivilyn 3.0, asegurando una lubricación suave que no reacciona con el polímero del chasis, prolongando la vida útil de los mecanismos.

- Su tracción se debe a qué tiene un eje tipo cruz basado en los que vienen en los kit de lego echo de acero con medidas de 2.8mm de ancho y 4.2mm de alto, en forma de cruceta, su largo es de 119mm, tiene un refuerzo de teflón industrial por alrededor del eje para evitar ser doblado o pandeado por el peso del prototipo. Este eje esta unido a la caja reductora, compuesta por  3 engranajes. Que trabajan de la siguiente manera:

<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/b0dcd599-29eb-494f-a5d7-9d299ea3cc98" />
<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/af8053d1-77d3-4b1d-8618-e3ee2fdb3cc5" />
<img width="540" height="600" alt="image" src="https://github.com/user-attachments/assets/e3f04edd-f908-440c-adf8-31eedef2714c" />

## ¿Cómo funciona la "fuerza" de Trivilyn 3.0? (Sistema de Engranajes)

Tomando como base una configuración de tres etapas con los engranajes de 8, 30, 5, 26, 5 y 20 dientes, el cálculo se desglosa de la siguiente manera: 

- La primera etapa reduce la velocidad del motor 3.75 veces.

- La segunda etapa toma esa velocidad ya reducida y la vuelve a reducir 5.2 veces más.

- La tercera etapa toma eso y lo reduce 4 veces más.
-
- La cuenta final es: 3.75 x 5.2 x 4 = 78:1
 
 Esto significa que la relación de reducción es 78:1. 
 
 3. Análisis de Rendimiento Para obtener datos reales de salida, debemos considerar el efecto de esta reducción en la velocidad y el par motor (torque):

 Parámetro Efecto de la Reducción Fórmula Teórica Velocidad (RPM)Disminuye 78 veces n salida =78/nEntrada Torque (Nm) Aumenta 78 veces* salida =M entrada 78 η 
 
 Comenzamos con el segundo piso: 
 
 Está alberga lo que son el sistema de energía (baterías, elevadores y reguladores de voltaje) y sensores ultrasónicos, tiene una forma rectangular con esquinas ovaladas(imagen), Se distribuye de la siguiente manera: 
 

 3 porta baterias, uno de dos baterías 18650 en serie y uno de 1 sola batería 18650, porque están separadas? Las dos tienen diferentes utilidades, el de dos baterías en serie va hacia la placa microcontroladora Arduino mega, estando ambas cargadas llegando a un voltaje total de 8.2v. y el de una sola alimenta independientemente al servo motor de la dirección. En este piso  encontramos las conexiones de tierra común del servomotor y los LED para observar de mejor manera los obstáculos. Tercer piso( sensor ocular y cerebro(Arduino mega) Está base es la más pequeña de todas tiene una forma rectangular con esquinas ovaladas de 15x7cm, contiene la cámara huskyleans en la parte frontal y el Arduino mega en la parte posterior el Arduino mega.

## Nacional Caracas temporada 2025

Para la nacional no se hicieron muchos cambios de diseñó, realizamos algunas mejoras tanto en los diseños como correcciones de errores mecánicos. Principalmente cambiamos el servomotor mg996r por un servomotorHobbyPark de 35Kg que nos daba la precisión necesaria.

## Evolución 2025

Una de las mayores complicaciones que tuvimos fue, que trivilyn no iba en línea recta, siempre tenía un cierto desvío para solucionar este problema, realizamos diferentes pruebas y maneras, comenzamos con desarmar el servo y ver la raíz del problema,. Nos dimos cuenta que el mg996r tenía mucha tolerancia entre engranajes y eso causaba una especie de juego o espacios entre engranajes. 
Lo que ocasionaba ese pequeño desvío.

Dirección: comenzamos utilizando un servo mg995r de 5kg de torque, nos dimos cuenta de su falla y a través de prueba y error utilizamos diferentes métodos como los siguientes. Utilizamos grasa gruesa por ejemplo azul y de grafito, tomamos ciertas pruebas y no nos funcionaba del todo bien, con la grasa azul le costaba girar mucho y no lograba lo que necesitamos. Con la grasa de grafito no era lo suficientemente gruesa para evitar el desvío entre engranajes.
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

Este nos llevo a un mejor rendimiento, no quitarle el desvió a un 100% pero si mejorarlo a cierto punto que sea corregible a través de código o programación ¿como? La respuesta es sencilla, este servomotor, el poco desgaste que tiene y genera desvió, siempre es hacia un mismo lado, en pocas palabras es corregible, porque en el código lo podemos enviar a girar al sentido contrario del desvío cada cierto tiempo. 

Por ejemplo Si el desvío del prototipo es hacia la izquierda, se manda a mover al servo cada tanto milisegundos mover 3 grados haca la derecha y volver al centro. Algunos de los datos que recopilamos, según la velocidad varia por ende hay que ajustar los parametros.

<img width="1079" height="232" alt="image" src="https://github.com/user-attachments/assets/c268ba6c-5119-434d-b968-0c0b843d085d" />

# Temporada 2026

### Pensamiento Sistémico (Caso de Estudio: Adaptabilidad Sensorial)

En esta sección, no hablamos de piezas, hablamos de estrategia y resiliencia del sistema.

1. Análisis de Fallo del Entorno (Lección WRO 2025)

- El pensamiento sistémico nos permitió identificar que el robot no es un ente aislado, sino que depende directamente de las variables de su entorno (la pista). En la Final Nacional 2025, detectamos un fallo crítico: el sistema de navegación fallaba no por el código, sino por una falta de correspondencia física entre la altura de los sensores y la altura de las paredes. El Rexbot2.0 estaba 'ciego' ante paredes bajas. Bajo una visión sistémica, decidimos que Trivilyn 3.0 no debía ser un diseño rígido. En lugar de simplemente bajar los sensores, diseñamos un mecanismo de respuesta física (la corredera). Esto permite que el componente mecánico se ajuste a la realidad del entorno en tiempo real, asegurando que el flujo de datos hacia la CPU sea siempre óptimo, sin importar las variaciones de la infraestructura de la pista.
