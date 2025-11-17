# 🧮 Design and Simulation of a Portable Calculator Device
This repository contains the implementation of the project _"Design-and-Simulation-of-Portable-Calculator-Device"_ at the Department of Mechatronics Engineering (DOME), Federal University of Technology, Minna.

---

## 🔍 Project Objectives
- To design a functional calculator circuit capable of performing basic arithmetic operations, including addition, subtraction, multiplication, and division.
- To simulate the calculator’s operation in order to verify its ability to correctly execute these arithmetic functions.
---

## 🧰 Components Used

| **S/N** | **Component**                 | **Purpose in Project**                                                                                 |
| ------- | ----------------------------- | ------------------------------------------------------------------------------------------------------ |
| 1       | Arduino UNO                   | Acted as the main microcontroller to process input signals from the calculator buttons and perform calculations. |
| 2       | 16 × 2 LCD                    | Displayed user inputs, arithmetic operations, and calculation results.                                 |
| 3       | 1 kΩ Resistor                 | Limited current to protect the circuit components from excessive current.                              |
| 4       | 250 kΩ Potentiometer          | Allowed adjustment of the LCD contrast for clear and readable display output.                          |
| 5       | TinkerCad Simulation Software | Provided a virtual platform for designing, simulating, and testing the calculator circuit before physical implementation. |

---

## 🌀 Working Principle

When the simulation begins, the LCD initializes and displays the prompt **"Enter +,-,/ OR *"**, indicating that the system is ready for input. The user enters the desired arithmetic operator through the Serial Monitor. Next, the LCD prompts **"Enter first num:"**, and the user types the first number, which the Arduino reads and stores. The LCD then displays **"Enter second num:"**, and the second number is similarly read and stored by the Arduino.  

Once both numbers and the operator are provided, the Arduino processes the input according to the arithmetic operation chosen: addition, subtraction, multiplication, or division. The result of the calculation is then displayed on the LCD as **"Answer is [result]"**, while the second line prompts the user with **"Up for Another?"**, allowing for a new calculation after a short delay. The LCD clears after each calculation, enabling the process to repeat for subsequent operations. This setup allows the calculator device to perform arithmetic operations interactively and display results in real time.



### 📷 Circuit Diagram

<p align="center">
    <img src="calculator-device.png" alt="calculator-device" width="1500"/>
    <br>
    <em> Circuit Diagram</em>
</p>

### 📷 Schematic Diagram

<p align="center">
    <img src="calculator-schematic.png" alt="calculator-schematic" width="1500"/>
    <br>
    <em> Schematic Diagram</em>
</p>

### 🎥 Demo

<p align="center">
    <img src="Demo.gif" alt="Simulation Demo" width="1500"/>
    <br>
    <em> Simulation Demo</em>
</p>

---

## 📌 Note
Kindly [**click here**](program_script/calculator_simulation.ino) to access the full program script. 

---
