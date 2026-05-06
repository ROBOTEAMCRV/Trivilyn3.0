# Engineering Document/Trivilyn3.0 
Nuestro prototipo es un vehículo autónomo diseñado para la categoría futuros ingenieros temporada 2026 WRO. En el que el equipo combina sus conocimientos y destreza en la robótica(Mecánica, Electrónica, programación y automatización)  para la elaboración de (Trivilyn) y lograr el máximo desempeño en la categoría.

<img width="1590" height="644" alt="image" src="https://github.com/user-attachments/assets/3cda8af7-7508-41e8-81a8-01996fec2341" />

# ÍNDICE

## 📌Tabla de contenido

1.0 [Engineering Document/Trivilyn3.0](#Engineering-Document/Trivilyn30)

2.0 [MIEMBROS DEL TEAMROBOCRV](#MIEMBROS-DEL-TEAMROBOCRV)

   [Dennis Adrian Silva Riera](#Dennis-Adrian-Silva-Riera)
   [Gianni Marcello Martucci Jerez](#Gianni-Marcello-Martucci-Jerez)
   [Juan Andres Graterol Teran](#Juan-Andres-Graterol-Teran)
   [Tutor](#Tutor/Luis-Eduardo-Paredes)
   
3.0 [Pensamiento sistémico y decisiones de ingeniería](#Pensamiento-sistémico-y-decisiones-de-ingeniería)


# MIEMBROS DEL TEAMROBOCRV

## 👤Dennis Adrian Silva Riera

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/140671eb-8c9f-4bf1-bf3d-6eb409680a4d" />

## 👤Gianni Marcello Martucci Jerez

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/1bcc44ed-ea78-4fa7-93d5-581ea6aad23a" />


## 👤Juan Andres Graterol Teran

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/51b3d7c0-b54a-4267-ae77-e930a64322b0" />



## 👤Tutor/Luis Eduardo Paredes

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/12b81259-f88b-43d7-be25-c19f183fe3eb" />

# Pensamiento sistémico y decisiones de ingeniería 

## Temporada 2024 Rexbot1.0 

Trivilyn a través de los años ha tenido muchos cambios desde su primera versión en 2024 hasta lo que es el día de hoy.

2024 Rexbot 1.0 Principalmente su diferencia es el tamaño y sus mecanismos. Está versión es muy rudimentaria, hecha con materiales reciclados. Este robot tuvo 3 versiones principales mediante su transcurso para llegar a la final internacional de Turquía.

1ra regional (Mérida) 

Su chasis estaba conformado por dos niveles, la planta inferior (base) está seleccionada de un kit ya prefabricado y su planta superior fue cortada con un Dremel, con bastantes imperfecciones, su dirección fue extraida de un vehículo a control remoto, con un sistema de corredera, que funcionaba con un servomotor sg90, que al girar para un lado sube la corredera y al bajar tenía el efecto contrario, teniendo así un efecto palanca hacia los lados y mover sus ruedas delanteras con un eje que las une, echo con acetato.

<img width="540" height="610" alt="WhatsApp Image 2026-05-02 at 3 45 30 PM" src="https://github.com/user-attachments/assets/6b317619-f90c-4da6-9673-602f6808ba73" />

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


# Temporada 2025 

## Rexbot2.0 

Para la etapa de las regionales lo comenzamos a hacer desde 0, tuvo una reestructuración completa, corregimos la mayoría de errores cometidos en el diseño anterior.

Comenzamos diseñando como sería el sistema de dirección y cuánto rango de giro necesitamos, Ya investigado y analizado errores anteriores, optamos por un sistema de dirección (Steer-by-Wire) que cada rueda puede moverse con cierto grado de independencia, aunque están montadas en un eje común (lo cual sugiere una posible adaptación diferencial o simplemente flexibilidad del tubo). Ya que la rueda interior gira ligeramente más que la otra, de modo que el robot se mantiene en el mismo arco sin deslizamiento. (Derrape). Ya sabiendo cómo sería su dirección, diseñamos una base con forma de F1. ( Imagen base blanca). Está base se utiliza en ambas caras. Cara inferior: base de la caja reductora (tracción) Y se logra evidenciar parte del sistema de dirección. 

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/64a613a7-76f1-4cb8-94ee-6a2d8fbced16" />


Cara superior: contiene el L298(driver) un porta baterias de 2, 18650 y el servo motor mg995r.

La dirección funciona de la siguiente manera para lograr la adaptación del servo a las ruedas, utilizamos piezas en 3D diseñadas por nosotros, lego y acero, esta consiste en 4 partes principales, encaje de palanca de acero a base en 3D
<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/990524b0-c7c8-45d3-a1f3-fc57e4ee0549" />

Esta base fue re diseñada varias veces hasta que logramos encontrar el punto donde no se deformara por el peso y también para que encajara perfectamente la pieza de hierro a presión y evitar todo el juego  posible(impresicion de los componentes), luego de encajar esta pieza, utilizamos un tipo de abrazadera, que agarra el buje del eje con forma de cruceta

para centrar y estabilizar su eje utilizamos retenes de lego amarillos

dos por la parte interior y uno por la parte exterior ¿Por que los ponemos? Facil los dos retenes internos se les pone , luego el diferencial “tuvo transversal” ya antes lubricado con vaselina ¿Por que se tiene que lubricar ? Nos dimos cuenta que si no lo lubricamos antes de probar el vehículo le va acostar mas los giros y pueden producir que varían, ¿Porque se lubrica con vaselina y no con otra cosa? Bueno al inicio nosotros lubricabamos con grasa azul pero lo que pasaba era que se desgastaba y debilitaba las piezas en 3D despues de darnos cuenta de esto lo cambiamos a vaselina que igualmente no  se lubrica de manera perfecta. Este proceso se hace dos veces uno del lado derecho y uno del lado izquierdo. Ya que son dos ejes independientes, unidos por la pieza principal y el diferencial. Si se preguntan, porque no utilizamos un solo eje para las dos ruedas, haciendo varias pruebas, nos dimos cuenta que giraba mal (derrapaba) necesitaba un diferencial, convencional y funcional,. 


Su tracción se debe a qué tiene un eje tipo cruceta basado en los que vienen en los kit de lego echo de acero con medidas de 2.8mm de ancho y 4.2mm de alto, en forma de cruceta, su largo es de 119mm, tiene un refuerzo de teflón industrial por alrededor del eje para evitar ser doblado o pandeado por el peso del prototipo. Este eje esta unido a la caja reductora, compuesta por  3 engranajes. Que trabajan de la siguiente manera:

Para calcular la relación de transmisión total (i total ) de una caja reductora compuesta por varias etapas, debemos considerar la relación entre los dientes de los engranajes conductores (entrada) y los conducidos (salida) en cada paso del tren de engranajes. 

Tomando como base una configuración de tres etapas con los engranajes de 8, 30, 5, 26, 5 y 20 dientes, el cálculo se desglosa de la siguiente manera: 

1. Desglose por Etapas En un sistema reductor compuesto, la relación de cada etapa se define como:

 i= Z conducido/Z conductor
 Primera Etapa: Entrada de 8 dientes hacia salida de 30 dientes. 
 
 i 1= 8/30 =3.75 
 Segunda Etapa: Entrada de 5 dientes hacia salida de 26 dientes. 
 
 i2 = 5/26 =5.2 
 Tercera Etapa: Entrada de 5 dientes hacia salida de 20 dientes. 
 
 i3 = 5/20=4.0 
 
 2. Relación de Transmisión Total La relación total es el producto de las relaciones de cada etapa:
 
 itotal =i1 i2 i 3 
 
 i total=3.75 5.2 4.0 
 
 i total =78 
 
 Esto significa que la relación de reducción es 78:1. 
 
 3. Análisis de Rendimiento Para obtener datos reales de salida, debemos considerar el efecto de esta reducción en la velocidad y el par motor (torque):

 Parámetro Efecto de la ReducciónFórmula Teórica Velocidad (RPM)Disminuye 78 veces n salida =78/nEntrada Torque (Nm) Aumenta 78 veces* salida =M entrada 78 η 
 
 Comenzamos con el segundo piso( base del medio): 
 Está alberga lo que son el sistema de energía (baterías, elevadores y reguladores de voltaje) y sensores ultrasónicos, tiene una forma rectangular con esquinas ovaladas(imagen), Se distribuye de la siguiente manera: 
 

 3 porta baterias, uno de dos baterías 18650 en serie y uno de 1 sola batería 18650, porque están separadas? Las dos tienen diferentes utilidades, el de dos baterías en serie va hacia la placa microcontroladora Arduino mega, estando ambas cargadas llegando a un voltaje total de 8.2v. y el de una sola alimenta independientemente al servo motor de la dirección. En este piso  encontramos las conexiones de tierra común del servomotor y los LED para observar de mejor manera los obstáculos. Tercer piso( sensor ocular y cerebro(Arduino mega) Está base es la más pequeña de todas tiene una forma rectangular con esquinas ovaladas de 15x7cm, contiene la cámara huskyleans en la parte frontal y el Arduino mega en la parte posterior el Arduino mega.

## Nacional Caracas temporada 2025

Para la nacional no se hicieron muchos cambios de diseñó, realizamos algunas mejoras tanto en los diseños como correcciones de errores mecánicos. Principalmente cambiamos el servomotor mg996r por un servomotorHobbyPark de 35Kg que nos daba la precisión necesaria.

## Evolución 2025

Una de las mayores complicaciones que tuvimos fue, que trivilyn no iba en línea recta, siempre tenía un cierto desvío para solucionar este problema, realizamos diferentes pruebas y maneras, comenzamos con desarmar el servo y ver la raíz del problema,. Nos dimos cuenta que el mg996r tenía mucha tolerancia entre engranajes y eso causaba una especie de juego o espacios entre engranajes. Lo que ocasionaba ese pequeño desvío Dirección: comenzamos utilizando un servo mg995r de 5kg de torque, nos dimos cuenta de su falla y a través de prueba y error utilizamos diferentes métodos como los siguientes. Utilizamos grasa gruesa por ejemplo azul y de grafito, tomamos ciertas pruebas y no nos funcionaba del todo bien, con la grasa azul le costaba girar mucho y no lograba lo que necesitamos. Con la grasa de grafito no era lo suficientemente gruesa para evitar el desvío entre engranajes.

3ra prueba tratamos de ponerle teflón a los engranajesel problema de esta solución era que si funcionaba al principio, pero al hacer varias pruebas y al pasar el tiempo cada vez tendría más desvío.
En la siguiente gráfica  podemos observar con datos reales, como al realizar pruebas era mayor su desgaste, con 3 pruebas es casi nulo el desvió, pero al seguir utilizándolo se va desviando mas. 
<img width="1024" height="425" alt="image" src="https://github.com/user-attachments/assets/98f9c708-b818-4080-a304-b838973416ce" />

Para finalizar compramos el servomotr hobbypark de 35kg con las siguientes especificaciones Técnicas:

°Torque Máximo : 35 Kg. 

°Voltaje de Operación : Rango de DC 4.8V a 8.4V (Alto Voltaje/HV). 

°Construcción de la Carcasa : Cuerpo de aluminio anodizado, fabricado mediante mecanizado CNC para una disipación de calor superior.

°Tren de Engranajes : Engranajes de acero inoxidable de alta resistencia para soportar cargas elevadas.  

°Eje de Salida (Spline Gear) : Estándar de$\Phi 5.9$con 25 dientes (25T). 

°Protección Ambiental : Sellado completo a prueba de agua (Waterproof) en la carcasa superior, media e inferior.  

°Tipo de motor : Motor central (Motor de núcleo).  Tipo de Señal : Digital y programable de forma inteligente.

<img width="540" height="610" alt="image" src="https://github.com/user-attachments/assets/d55865b6-9db7-48a9-8f4e-8266a64ae5b0" />


Este nos llevo a un mejor rendimiento, no quitarle el desvió a un 100% pero si mejorarlo a cierto punto que sea corregible a través de código o programación, se preguntan como es eso? La respuesta es sencilla, este servomotor, el poco desgaste que tiene y genera desvió, siempre es hacia un mismo lado, en pocas palabras es corregible, porque en el código lo podemos mandar a girar al sentido contrario del desvío cada cierto tiempo. 
Por ejemplo Si el desvío del prototipo es hacia la izquierda, se manda a mover al servo cada tanto milisegundos mover 3 grados haca la derecha y volver al centro. Algunos de los datos que recopilamos, según la velocidad varia por ende hay que ajustar los parametros.
