# Embedded_ADC_RS232 Project

This repository contains the implementation of an ADC (Analog to Digital Converter) with RS232 serial communication, developed using **Microchip Studio**. The setup includes an Arduino Leonardo, RS232 communication module, and a custom prototyping board with various components. The project was tested using a serial terminal application to ensure proper data transfer.

---

## Project Components

### Hardware
1. **Arduino Leonardo**
   - Acts as the microcontroller for ADC and serial communication.
2. **RS232 Module**
   - Facilitates UART communication with the PC.
3. **Prototyping Board**
   - Includes:
     - A green LED for signaling.
     - Resistors for current regulation.
4. **Connecting Wires**
   - For establishing connections between components.

### Software
- **Microchip Studio**
  - Used for writing and debugging the firmware.
- **Serial Terminal**
  - Used for testing and monitoring RS232 communication.

---

## Directory Structure
- **Lab/**
  - Contains project configuration and core implementation files.
- **components/**
  - Contains images and descriptions of the hardware components used.
- **images/**
  - Contains images of the hardware setup and wiring.

---

## How to Run the Project
1. Connect the Arduino Leonardo to the RS232 module and prototype board as shown in the [images directory](./images).
2. Load the code from the **Lab** directory into **Microchip Studio**.
3. Compile and upload the firmware to the Arduino.
4. Open a serial terminal application (e.g., Putty, Tera Term).
5. Configure the baud rate and settings as specified in the code.
6. Start monitoring ADC values being transmitted via RS232.

---

## Images

### Hardware Setup
![Arduino and RS232 Module Setup](./images/IMG-20250114-WA0007.jpg)

### RS232 Module
![RS232 Communication Module](./images/IMG-20250114-WA0003.jpg)

### Prototyping Board
![Prototyping Board with LED and Resistors](./images/IMG-20250114-WA0004.jpg)

---

## Features
- Converts analog signals to digital values using ADC.
- Transmits data via RS232 communication protocol.
- Modular design for ease of testing and debugging.
- Real-time monitoring through a serial terminal.

---

## Contributions
If you wish to contribute to this project, feel free to fork the repository, make your changes, and submit a pull request.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
