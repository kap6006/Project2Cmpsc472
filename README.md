# Project2Cmpsc472

## Project Goals
In this course we learned what goes into designing operating systems and about how different types of devices require different types of operating systems. For this project we were tasked with creating a novel product that is related to wildfires and demonstrates knowledge on operating systems concepts. 
We decided to design a wildfire monitoring system that uses sensor data to track temperature, humidity, and smoke levels. We wanted the main executable to implement OS features including  task scheduling, interrupt handling, memory management, and synchronization. We also wanted to provide a user-friendly interface to view the sensor data by using a serial monitor.

## Significance and Novelty of the Project
Wildfires pose a significant global threat, causing loss of life, destruction of property, and environmental damage. Timely detection of wildfire conditions can help mitigate these risks. Embedded systems are ideal for such applications because of their low cost, scalability, and energy efficiency.
This project simulates key operating system concepts in a microcontroller environment, offering a simplified introduction to OS principles in embedded systems. The entire project runs on a software simulation platform (SimulIDE), making it accessible to those without physical hardware. The simulated system mimics real-world applications of embedded systems in monitoring and alerting, showcasing how theoretical OS concepts can solve real-world problems.

## Installation and Usage Instructions
You can use several different coding environments and you can use real hardware or various simulators but we have provided instructions for the specific tools we used when developing the software:

### Installation
1. Install Visual Studio Code (VS Code).
2. Install the PlatformIO extension in VS Code.
3. Clone the project repository or copy the project folder into your workspace.
4. Open the project in PlatformIO and select the Arduino Uno board.
5. Compile the project using the Build button.
6. Generate the .hex file using the Upload button.
### Simulating in SimulIDE
1. Download and install SimulIDE (a free microcontroller simulation tool).
2. Open SimulIDE and drag an Arduino Uno board onto the workspace.
   ![arduino uno](https://github.com/user-attachments/assets/10cb2503-0f66-41e9-9962-2c5dcdc34ec2)

3. Load the .hex file into the simulated Arduino board.
   ![load hex](https://github.com/user-attachments/assets/40183ad9-b4b3-4429-bf59-bcb25a6e53b7)

4. Add a serial monitor in SimulIDE to view real-time outputs.
   ![serial output](https://github.com/user-attachments/assets/53721943-6e04-498a-be24-bba944500f51)

### Usage
1. Run the simulation in SimulIDE.
2. View sensor data and alerts on the serial monitor.
3. Simulate events (e.g., smoke detection) by triggering the relevant interrupt.

## Code Structure
    Start
    
    └── Initialize Variables and Setup Interrupt
    
        └── Loop Execution:
        
              ├── Update Sensor Data
              
              │     ├── Read Temperature
              
              │     ├── Read Humidity
              
              │     └── Read Smoke Level
              
              ├── Display Sensor Data
              
              ├── Simulate Memory Management
              
              └── Handle Smoke Alerts
              
### Code Files Explanation
- main.cpp: Controls the main loop, synchronization, and central updates.
- sensor.cpp: Handles sensor data simulation and display.
- error_handling.cpp: Manages memory simulation and alerts.
- platformio.ini: Configuration file for PlatformIO.

## List of Functionalities and Verification Results
### Functionalities
- Sensor Data Simulation:
        - Simulates temperature, humidity, and smoke level readings.
        - Outputs sensor data at regular intervals.
- Interrupt Handling:
        - Detects and responds to smoke alerts using an interrupt service routine.
- Memory Management:
        - Simulates dynamic memory allocation with error handling.
- Synchronized Outputs:
        - Ensures clear, readable output for all sensor data and memory operations.
  
### Verification Results
- Tested in SimulIDE to ensure proper timing and functionality.
- Verified smoke alert logic by exceeding threshold values.
- Observed correct handling of memory allocation errors with recovery mechanisms.

## Achievement
The project successfully demonstrates the following:
- Successfully demonstrates OS concepts while simulating a real-world application.
- Efficient Execution: All functionalities, including sensor updates, alerts, and memory management, operate as intended in synchronized intervals.
- OS concepts integrated into embedded system design, bridging theory with application.
![Runtime example](https://github.com/user-attachments/assets/926a630e-f3e2-469d-876f-d53bf4117d19)

## Discussion and Conclusions
### Project Issues and Limitations
Since we had limited time and resources to implement the project, it had to be done as a simulation instead of using hardware hands-on and being able to test the real world functionality of the design. Another limitation was that since we were using the Arduino platform, there isn't real multitasking support meaning multitasking features had to be simulated as the real execution on an Arduino device is single-threaded. Also, since the project is simulated, we were not able to work with physical sensors to interact with real environmental conditions.
### Learning Outcomes
The project reinforced some key concepts we learned during the course such as a practical understanding of multitasking, task scheduling, and event-driven programming. It also help us understand how a lot of concepts that go into designing operating systems are necessary for programmers to understand when building programs and working with hardware devices. It also reinforced the importance of sychronization, both in terms of the tools provided by the operating system, and the code written by programmers.
