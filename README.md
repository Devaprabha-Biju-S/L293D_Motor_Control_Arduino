# L293D_Motor_Control_Arduino

This project demonstrates motor control using the L293D motor driver with an Arduino. It allows a connected DC motor to move forward, backward, and stop, using PWM for speed control and digital signals for direction.

## Hardware Components
- Arduino Uno (or compatible board)
- L293D Motor Driver IC
- 2 DC Motors
- External Power Supply (if needed for motors)
- Jumper Wires
- Breadboard

## Pin Configuration
| Arduino Pin | L293D Pin | Description          |
|-------------|-----------|----------------------|
| 5           | enA       | Enable Motor 1 (PWM) |
| 6           | in1       | Motor 1 Direction 1  |
| 7           | in2       | Motor 1 Direction 2  |
| 8           | enB       | Enable Motor 2 (PWM) |
| 9           | in3       | Motor 2 Direction 1  |
| 10          | in4       | Motor 2 Direction 2  |

## Functionality
- **Forward**: Motors rotate forward.
- **Backward**: Motors rotate in reverse.
- **Stop**: Motors halt movement.

## How to Use
1. Connect the hardware as per the pin configuration.
2. Upload the code from this repository to your Arduino board.
3. Power the circuit and observe motor behavior.
