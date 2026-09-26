# TEB II - Guía de Laboratorio N.° 1
## Verificación y Comparación de Señales: DAC vs PWM en ESP32

Este repositorio contiene el código fuente de código abierto de la práctica de laboratorio, orientada a ubicar, reproducir y analizar el comportamiento de las señales analógicas puras frente a modulaciones digitales.

### Contenido del Repositorio
* **etapa1_verificacion_fija.ino**: Inicialización estática. Fija las salidas a ~1.65 V (código 128) para la calibración y verificación visual en el osciloscopio.
* **etapa2_control_dinamico.ino**: Control interactivo por puerto serial. Permite ingresar voltajes entre 0.0 V y 3.3 V en tiempo real.

### Hardware Utilizado
* **Placa de Desarrollo:** ESP32 NodeMCU (38 pines / CH340).
* **Instrumento de Medición:** Osciloscopio Digital GW Instek GDS-1072A-U (70 MHz, 2 canales, Memory Prime).
* **Accesorios:** 1 Protoboard génerico, 6 Jumpers Macho-Hembra y 1 cable con conectores tipo cocodrilo.

### Instrucciones de Reproducción
1. Clonar o descargar los archivos de este repositorio.
2. Abrir cualquiera de los módulos en Arduino IDE (v2.3 o superior).
3. Instalar las dependencias de la placa ESP32 en el gestor de tarjetas.
4. Conectar el pin GPIO25 a la sonda del Canal 1 del osciloscopio (Señal DAC).
5. Conectar el pin GPIO27 a la sonda del Canal 2 del osciloscopio (Señal PWM).
6. Cargar el código a la placa y abrir el Monitor Serial a 115200 bps para interactuar.
