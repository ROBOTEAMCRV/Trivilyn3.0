#  Ingeniería del Sistema Eléctrico y Distribución de Potencia

El sistema eléctrico de **Trivilyn 3.1** ha sido desarrollado bajo un enfoque de aislamiento modular de topología mixta. Su arquitectura divide de forma estricta las etapas de potencia analógica (motores de tracción y servomotores de dirección) de los bloques de procesamiento lógico y percepción digital (microcontrolador, sensores ultrasónicos y la cámara de visión inteligente HuskyLens). 

La optimización de esta red eléctrica se fundamenta en tres pilares de la mecatrónica móvil: garantizar la estabilidad de los voltajes nominales, mitigar el ruido electromagnético parásito (EMI) provocado por las conmutaciones inductivas del motor, y maximizar la eficiencia del *Power Budget* general durante las fases de aceleración.

---

## 📊 2.1 Especificación del Esquema Eléctrico y Arquitectura de Conexiones

El siguiente diagrama detalla la topología de la red, los flujos de corriente, los mecanismos de regulación conmutada y el direccionamiento de los buses de datos que gobiernan el vehículo autónomo:

<img width="1280" height="714" alt="image" src="https://github.com/user-attachments/assets/e3d80fed-c345-46ec-b13d-854f1356a612" />

### III. Derechos de Autor, Licencia y Atribución de Ingeniería Eléctrica

El diseño conceptual, el ruteado de pistas, la arquitectura de filtrado EMI y el diagrama esquemático original de **Trivilyn 3.1** presentados en este repositorio son de propiedad intelectual exclusiva del equipo **TeamCRV Venezuela © 2026**.

Este hardware se distribuye bajo los términos de la licencia internacional **CERN Open Hardware Licence Version 2 - Strongly Reciprocal (CERN-OHL-S-2.0)** y **Creative Commons Atribución-NoComercial-CompartirIgual 4.0 Internacional (CC BY-NC-SA 4.0)**.
* **Cláusula Anticlón de Competencia (WRO):** Queda estrictamente prohibida la reproducción total o parcial de esta arquitectura de potencia por parte de escuderías o equipos rivales dentro del circuito competitivo de la World Robot Olympiad (WRO) sin la debida citación y autorización por escrito de los autores principales. El uso no autorizado o el plagio directo del ruteado y los sistemas de supresión de ruido en la fase de inspección técnica será reportado directamente al cuerpo de jueces e inspectores bajo los estatutos de ética del código de conducta oficial de la WRO.

  * **Diseño y Maquetación de Hardware:** 
  * **Ingeniería Eléctrica y Ruteado:** TeamCRV Venezuela (Dennis / Escudería Rexbot / Trivilyn Series).
  * **Herramienta de Captura Esquemática:** Autodesk Tinkercad / Fritzing Profesional Hardware Tools.
 

 ### 2.2 Justificación Legal-Científica de la Licencia y Garantía de Reproducibilidad

Para prevenir cualquier penalización en los criterios de **Reproducibilidad y Ciencia Abierta** por parte del jurado calificador de la WRO, a continuación detallamos los fundamentos mecánicos y legales de la elección de esta licencia dual:

> [!NOTE]
> **Aclaratoria sobre la Cláusula de Reciprocidad Fuerte (*Strongly Reciprocal*)**
> El uso de la licencia **CERN-OHL-S-2.0** no restringe ni bloquea la reproducibilidad de **Trivilyn 3.0**; matemáticamente y bajo los estándares de la *Open Source Hardware Association (OSHWA)*, hace exactamente lo contrario: **la blinda y la garantiza a perpetuidad**. 

La arquitectura eléctrica y los parámetros de manufactura se rigen bajo estos tres pilares de transparencia tecnológica:

1. **Garantía Absoluta de Reproducción:** Cualquier equipo, juez o investigador independiente tiene el derecho legal implícito de descargar estos esquemáticos, clonar el ordenamiento de pines, fabricar  y replicar exactamente el comportamiento reológico del PETG detallado en nuestra matriz de laminación. La documentación técnica se expone con un nivel de transparencia total para asegurar que el proyecto sea **100% reproducible**.
2. **Filosofía del *Viral Copyleft* (Protección del Conocimiento):** La condición de reciprocidad fuerte impone que si un tercero modifica nuestro esquema eléctrico o mejora el circuito de filtrado EMI, está obligado por ley de propiedad intelectual a liberar sus planos modificados de forma pública bajo esta misma licencia exacta. Esto evita el "secuestro de hardware" (donde un competidor toma el esfuerzo de diseño de TeamCRV Venezuela, lo privatiza o lo oculta en boxes) y asegura que toda la comunidad de la WRO avance bajo principios de ciencia abierta y colaboración mutua.
3. **Autosuficiencia y Autogestión Legal:** Al ser un marco de licenciamiento internacional público desarrollado por la Organización Europea para la Investigación Nuclear (CERN), su aplicación es de carácter directo y automático mediante mención explícita de autoría (*Atribución*). No requiere afiliaciones corporativas, registros arancelarios ni validaciones externas de terceros. El diseño nace de forma nativa como hardware libre para elevar los estándares académicos y competitivos de la robótica móvil.**


