#  Ingeniería del Sistema Eléctrico y Distribución de Potencia

El sistema eléctrico de **Trivilyn 3.0** ha sido desarrollado bajo un enfoque de aislamiento modular de topología mixta. Su arquitectura divide de forma estricta las etapas de potencia analógica (motores de tracción y servomotores de dirección) de los bloques de procesamiento lógico y percepción digital (microcontrolador, sensores ultrasónicos y la cámara de visión inteligente HuskyLens). 

La optimización de esta red eléctrica se fundamenta en tres pilares de la mecatrónica móvil: garantizar la estabilidad de los voltajes nominales, mitigar el ruido electromagnético parásito (EMI) provocado por las conmutaciones inductivas del motor, y maximizar la eficiencia del *Power Budget* general durante las fases de aceleración.

---

## 📊 2.1 Especificación del Esquema Eléctrico y Arquitectura de Conexiones

El siguiente diagrama detalla la topología de la red, los flujos de corriente, los mecanismos de regulación conmutada y el direccionamiento de los buses de datos que gobiernan el vehículo autónomo:


<img width="1144" height="928" alt="image" src="https://github.com/user-attachments/assets/6191b76f-1e5f-484f-ba82-71315e71cbad" />

### III. Derechos de Autor, Licencia y Atribución de Ingeniería Eléctrica

El diseño conceptual, el ruteado de pistas, la arquitectura de filtrado EMI y el diagrama esquemático original de **Trivilyn 3.0** presentados en este repositorio son de propiedad intelectual exclusiva del equipo **TeamCRV Venezuela © 2026**.

Este hardware se distribuye bajo los términos de la licencia internacional **CERN Open Hardware Licence Version 2 - Strongly Reciprocal (CERN-OHL-S-2.0)** y **Creative Commons Atribución-NoComercial-CompartirIgual 4.0 Internacional (CC BY-NC-SA 4.0)**.
* **Cláusula Anticlón de Competencia (WRO):** Queda estrictamente prohibida la reproducción total o parcial de esta arquitectura de potencia por parte de escuderías o equipos rivales dentro del circuito competitivo de la World Robot Olympiad (WRO) sin la debida citación y autorización por escrito de los autores principales. El uso no autorizado o el plagio directo del ruteado y los sistemas de supresión de ruido en la fase de inspección técnica será reportado directamente al cuerpo de jueces e inspectores bajo los estatutos de ética del código de conducta oficial de la WRO.

* **Diseño y Maquetación de Hardware:** 
  * **Ingeniería Eléctrica y Ruteado:** TeamCRV Venezuela (Dennis / Escudería Rexbot / Trivilyn Series).
  * **Herramienta de Captura Esquemática:** Autodesk Tinkercad / Fritzing Profesional Hardware Tools.
 
