# Project2Cmpsc472

## Project Goals
In this course we learned what goes into designing operating systems and about how different types of devices require different types of operating systems. For this project we were tasked with creating a novel product that is related to wildfires and demonstrates knowledge on operating systems concepts. 
We decided to design a wildfire monitoring system that uses sensor data to track temperature, humidity, and smoke levels. We wanted the main executable to implement OS features including multitasking, task prioritization, event-driven programming, memory management, and error handling. We also wanted to provide a user-friendly interface to view the sensor data by using a serial monitor.

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
3. Load the .hex file into the simulated Arduino board.
4. Add a serial monitor in SimulIDE to view real-time outputs.
### Usage
1. Run the simulation in SimulIDE.
2. View sensor data and alerts on the serial monitor.
3. Simulate events (e.g., smoke detection) by triggering the relevant interrupt.

## Code Structure
+-----------------------------------------+
| Start                                   |
+-----------------------------------------+
        |
        v
+----------------+       +----------------+
| Sensor Modules | --->  | Task Scheduler |
+----------------+       +----------------+
        |                         |
        v                         v
+----------------+       +----------------+
| Event Handling | <-->  | Serial Output  |
+----------------+       +----------------+
        |
        v
+----------------+
| Error Handling |
+----------------+
        |
        v
      Finish

1. Sensor Modules: Functions to simulate temperature, humidity, and smoke level readings.
2. Task Scheduler: Implements cooperative multitasking by scheduling tasks at regular intervals.
3. Event Handling: Interrupt-based handling of critical events, such as detecting a smoke alert.
4. Serial Output: Outputs sensor data and alert messages to the serial monitor for user interaction.
5. Error Handling: Handles runtime issues, such as memory allocation failures, with recovery strategies.

## List of Functionalities and Verification Results
### Functionalities
1. Multitasking: Schedules tasks like sensor readings and alert generation using a cooperative scheduler.
2. Event-driven Programming: Uses interrupts to handle critical events, such as smoke level detection.
3. Task Prioritization: Prioritizes tasks dynamically, ensuring urgent tasks (e.g., alerts) are handled first.
4. Memory Management: Simulates dynamic memory allocation for sensor data processing.
5. Error Handling: Recovers from runtime errors (e.g., memory allocation failures) and continues operation.
6. User-friendly Serial Output: Displays sensor data and alerts in a readable format on the serial monitor.

### Verification Results
- Task Scheduling: Verified using sensor data updates at the expected intervals (5s for temperature, 3s for humidity, 10s for smoke).
- Interrupt Handling: Triggered a smoke alert interrupt and observed immediate response in the serial monitor.
- Memory Management: Simulated memory allocation errors and verified recovery strategies in the serial output.

## Achievement
The project successfully demonstrates the following:
- Implementation of multitasking, prioritization, event handling, and error recovery in a microcontroller environment.
- A functional wildfire monitoring system with real-time data and critical alerts.
- OS concepts integrated into embedded system design, bridging theory with application.

## Discussion and Conclusions
### Project Issues and Limitations
Since we had limited time and resources to implement the project, it had to be done as a simulation instead of using hardware hands-on and being able to test the real world functionality of the design. Another limitation was that since we were using the Arduino platform, there isn't real multitasking support meaning multitasking features had to be simulated as the real execution on an Arduino device is single-threaded. Also, since the project is simulated, we were not able to work with physical sensors to interact with real environmental conditions.
### Learning Outcomes
The project reinforced some key concepts we learned during the course such as a practical understanding of multitasking, task scheduling, and event-driven programming. It also help us understand how a lot of concepts that go into designing operating systems are necessary for programmers to understand when building programs and working with hardware devices.
