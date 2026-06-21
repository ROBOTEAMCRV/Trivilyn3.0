#  Ingeniería del Sistema Eléctrico y Distribución de Potencia

El sistema eléctrico de **Trivilyn 3.0** ha sido desarrollado bajo un enfoque de aislamiento modular de topología mixta. Su arquitectura divide de forma estricta las etapas de potencia analógica (motores de tracción y servomotores de dirección) de los bloques de procesamiento lógico y percepción digital (microcontrolador, sensores ultrasónicos y la cámara de visión inteligente HuskyLens). 

La optimización de esta red eléctrica se fundamenta en tres pilares de la mecatrónica móvil: garantizar la estabilidad de los voltajes nominales, mitigar el ruido electromagnético parásito (EMI) provocado por las conmutaciones inductivas del motor, y maximizar la eficiencia del *Power Budget* general durante las fases de aceleración.

---

## 📊 2.1 Especificación del Esquema Eléctrico y Arquitectura de Conexiones

El siguiente diagrama detalla la topología de la red, los flujos de corriente, los mecanismos de regulación conmutada y el direccionamiento de los buses de datos que gobiernan el vehículo autónomo:


<img width="1144" height="928" alt="image" src="https://github.com/user-attachments/assets/6191b76f-1e5f-484f-ba82-71315e71cbad" />
