# Ingeniería del Sistema Eléctrico y Distribución de Potencia

El sistema eléctrico de **Trivilyn 3.1** ha sido desarrollado bajo un enfoque de aislamiento modular de topología mixta. Su arquitectura divide de forma estricta las etapas de potencia analógica (motores de tracción y servomotores de dirección) de los bloques de procesamiento lógico y percepción digital (microcontrolador, sensores ultrasónicos, sensor ToF matricial y la cámara de visión inteligente HuskyLens).

La optimización de esta red eléctrica se fundamenta en tres pilares de la mecatrónica móvil: garantizar la estabilidad de los voltajes nominales, mitigar el ruido electromagnético parásito (EMI) provocado por las conmutaciones inductivas del motor, y maximizar la eficiencia del *Power Budget* general durante las fases de aceleración.

---

## 📊 2.1 Especificación del Esquema Eléctrico y Arquitectura de Conexiones

El siguiente diagrama detalla la topología de la red, los flujos de corriente, los mecanismos de regulación conmutada y el direccionamiento de los buses de datos que gobiernan el vehículo autónomo:

<img width="1280" height="714" alt="image" src="https://github.com/user-attachments/assets/2f8c6ebc-7bbe-4081-a5cf-f224e7fc78e7" />


### Derechos de Autor y Licencia de Ingeniería Eléctrica

El diseño conceptual, el ruteado de pistas, la arquitectura de filtrado EMI y el diagrama esquemático original de **Trivilyn 3.1** presentados en este repositorio son de propiedad intelectual del equipo **TeamCRV Venezuela © 2026**.

Este hardware se distribuye bajo los términos de la licencia internacional **CERN Open Hardware Licence Version 2 - Strongly Reciprocal (CERN-OHL-S-2.0)** y **Creative Commons Atribución-NoComercial-CompartirIgual 4.0 Internacional (CC BY-NC-SA 4.0)**.

> **Nota de Atribución:** Si otro equipo reproduce, adapta o se inspira en esta arquitectura de potencia y filtrado EMI para su propio prototipo, solicitamos como cortesía técnica y bajo los términos de la licencia una atribución explícita al equipo TeamCRV Venezuela. Esto forma parte del espíritu de ciencia abierta que rige el proyecto (ver sección 2.2).

* **Diseño y Maquetación de Hardware / Ingeniería Eléctrica y Ruteado:** TeamCRV Venezuela (Escudería Rexbot / Trivilyn Series).

### 2.2 Justificación de la Licencia y Garantía de Reproducibilidad

Para prevenir cualquier penalización en los criterios de **Reproducibilidad y Ciencia Abierta** por parte del jurado calificador de la WRO, detallamos a continuación los fundamentos de la elección de esta licencia dual:

> [!NOTE]
> **Sobre la Cláusula de Reciprocidad Fuerte (*Strongly Reciprocal*)**
> El uso de la licencia **CERN-OHL-S-2.0** no restringe ni bloquea la reproducibilidad de **Trivilyn 3.1**; bajo los estándares de la *Open Source Hardware Association (OSHWA)*, hace exactamente lo contrario: **la garantiza**.

La arquitectura eléctrica y los parámetros de manufactura se rigen bajo estos tres pilares de transparencia tecnológica:

1. **Garantía de Reproducción:** Cualquier equipo, juez o investigador independiente tiene el derecho legal de descargar estos esquemáticos, clonar el ordenamiento de pines y replicar el comportamiento del sistema detallado en nuestra documentación técnica. El proyecto se documenta con transparencia total para que sea **100% reproducible**.
2. **Filosofía del *Copyleft* (Protección del Conocimiento Abierto):** La condición de reciprocidad fuerte impone que si un tercero modifica nuestro esquema eléctrico o mejora el circuito de filtrado EMI, debe liberar sus planos modificados de forma pública bajo esta misma licencia. Esto asegura que la comunidad de la WRO avance bajo principios de ciencia abierta y colaboración mutua, en vez de privatizar mejoras derivadas de trabajo público.
3. **Autosuficiencia Legal:** Al ser un marco de licenciamiento internacional público desarrollado por el CERN, su aplicación es directa mediante mención explícita de autoría (*Atribución*). No requiere afiliaciones corporativas ni validaciones externas. El diseño nace como hardware libre para elevar los estándares académicos y competitivos de la robótica móvil.
