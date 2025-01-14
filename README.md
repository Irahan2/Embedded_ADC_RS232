# Embedded ADC and RS232 Project

This repository contains an embedded systems project involving RS232 communication and ADC (Analog-to-Digital Conversion). The project is implemented using **Microchip Studio** for coding and debugging and tested with **Bray Terminal** for RS232 communication.

## Project Overview

### Features
1. **RS232 Communication**:
   - UART character transmission and reception implemented.
   - Testing performed with Bray Terminal.
2. **PWM Control**:
   - PWM signals generated for hardware control.
   - Adjustable duty cycle.
3. **ADC Integration**:
   - Readings from an analog pin processed via ADC.
   - Continuous ADC value transmission over RS232.
4. **Code Highlights**:
   - Modular functions for UART, PWM, and ADC.
   - Real-time ADC value plotting using Bray Terminal.

### Project Structure
```
📁 Lab
   ├── ADC_and_PWM_Control.c       // ADC and PWM control logic
   ├── UART_Character_Transmit.c   // UART communication logic
   ├── Debug/                      // Debugging output files
📁 images
   ├── Task2.png                   // Output screenshot for Task 2
   ├── Task3.png                   // Output screenshot for Task 3
Lab.atsln                          // Microchip Studio solution file
```

## Requirements

### Hardware
- **Microcontroller**: Arduino Leonardo
- **RS232 Adapter**: Used for serial communication.
- **PWM Module**: For generating control signals.
- **ADC Input Source**: Analog voltage source connected to the ADC pin.

### Software
- **Microchip Studio**: Development and debugging environment.
- **Bray Terminal**: Terminal emulator for RS232 communication.

## Setup and Execution

1. **Clone the Repository**:
   ```
   git clone https://github.com/Irahan2/Embedded_ADC_RS232.git
   cd Embedded_ADC_RS232
   ```

2. **Compile and Upload**:
   Open `Lab.atsln` in Microchip Studio, compile the project, and upload it to the microcontroller.

3. **Test with Bray Terminal**:
   - Connect the RS232 interface to the microcontroller.
   - Open Bray Terminal and set the following parameters:
     - Baud rate: 9600
     - Data bits: 8
     - Parity: None
     - Stop bits: 1
   - Verify output for ADC readings and PWM signal adjustments.

## Screenshots
### Task 2 Output
![Task 2 Output](images/Task2.png)

### Task 3 Output
![Task 3 Output](images/Task3.png)

## License
This project is open-source and available under the [MIT License](LICENSE).

