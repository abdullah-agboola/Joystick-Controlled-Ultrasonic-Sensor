Joystick-Controlled Ultrasonic Proximity Alert System

This Arduino project demonstrates a practical application of an ultrasonic sensor mounted on a servo motor, controlled intuitively via a joystick. The system provides real-time visual and audible feedback to alert users of nearby obstacles, making it a versatile tool for various real-life scenarios.

How It Works:
The joystick's X axis control the pan of the ultrasonic sensor. As the sensor scans, it continuously measures the distance to objects. If an object is detected at 20cm or less, a red LED illuminates, and an active buzzer sounds, indicating close proximity. If the object is further than 20cm, a green LED remains illuminated, signaling a clear path.

Components Used:
 * Arduino Uno R3 Board
 * Breadboard
 * Joystick Module (with X, Y axes and switch)
 * Ultrasonic Sensor (HC-SR04)
 * Red LED
 * Green LED
 * Active Buzzer
 * Servo Motor (9g)
 * Resistors
 * Jumper Wires
 * USB Cable (for Arduino Uno connection)

Wiring Diagram / Connections:
All components are connected to the Arduino Uno via a breadboard.

 * Power Rails:
   * Connect Arduino Uno's 5V pin to the positive (+) rail of the breadboard.
   * Connect Arduino Uno's GND pin to the negative (-) rail of the breadboard.

 * Joystick Module:
   * Joystick VCC to breadboard positive (+) rail.
   * Joystick GND to breadboard negative (-) rail.
   * Joystick VRx pin to Arduino Analog Pin A0.
   * Joystick VRy pin to Arduino Analog Pin A1.
   * Joystick SW (Switch) pin to Arduino Digital Pin 8.

 * Ultrasonic Sensor (HC-SR04):
   * Ultrasonic VCC to breadboard positive (+) rail.
   * Ultrasonic GND to breadboard negative (-) rail.
   * Ultrasonic Trig pin to Arduino Digital Pin 6.
   * Ultrasonic Echo pin to Arduino Digital Pin 5.

 * LEDs (with Resistors):
   * Green LED Anode (longer leg) via a resistor to Arduino Digital Pin 10.
   * Red LED Anode (longer leg) via a resistor to Arduino Digital Pin 11.
   * Both LED Cathodes (shorter leg) to breadboard negative (-) rail.

 * Active Buzzer:
   * Buzzer positive (+) pin to Arduino Digital Pin 9.
   * Buzzer negative (-) pin to breadboard negative (-) rail.

 * Servo Motor:
   * Servo VCC (red wire) to breadboard positive (+) rail.
   * Servo GND (brown/black wire) to breadboard negative (-) rail.
   * Servo Signal (orange/yellow wire) to Arduino Digital Pin 7.

Code:
The complete Arduino sketch (.ino file) for this project is available in this repository.
How to Use:
 
