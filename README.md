# Smart Kitchen Safety System

## Project Description
This Smart Kitchen Safety System is designed to detect gas leakage and take immediate action to ensure safety. The system uses an MQ5 gas sensor to detect gas levels and performs the following actions if a gas leak is detected:

- Closes the main door of the kitchen using a servo motor.
- Opens two windows using two servo motors.
- Sounds an alarm using a buzzer.
- Turns on an LED indicator.
- Turns on an exhaust fan using a DC motor controlled by a relay.
- Displays the gas concentration level on an LCD display.

## Components Used
- **MQ5 Gas Sensor**: Detects gas leakage.
- **Servos (4)**:
  - Servo 1: Closes the main door.
  - Servo 2 and Servo 3: Open the windows.
  - Servo 4: (Optional) Can be used for additional functionality.
- **LCD Display**: Displays the gas concentration level.
- **Buzzer**: Sounds an alarm when gas leakage is detected.
- **LED**: Indicates gas leakage.
- **DC Motor (Exhaust Fan)**: Turns on the exhaust fan using a relay.
- **Arduino**: Controls all the components.

## Circuit Diagram
[Include a link to or image of your circuit diagram]

## Code
The Arduino code to control the system is available in the code directory. It reads the gas concentration from the MQ5 sensor and takes the necessary actions when gas leakage is detected.

## How to Use
1. Connect the components as per the circuit diagram.
2. Upload the provided Arduino code to your Arduino board.
3. Power the system and monitor the LCD display for gas concentration levels.
4. The system will automatically take action if a gas leakage is detected.

## Project Setup
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/smart-kitchen-safety-system.git
