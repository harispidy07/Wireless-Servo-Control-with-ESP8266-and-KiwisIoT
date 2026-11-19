# Wireless Servo Control with ESP8266 and KiwisIoT

## Project Overview

This project enables wireless control of a servo motor using an ESP8266 NodeMCU and the KiwisIoT platform. Users can remotely control the servo motor position through an IoT dashboard, making it useful for smart automation and wireless control applications.

## Hardware Components

- ESP8266 NodeMCU
- Servo Motor (SG90)
- Jumper Wires
- External 5V Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- Servo Motor Library

## Circuit Connections

| Servo Motor | ESP8266 NodeMCU |
| ----------- | --------------- |
| Signal      | D4              |
| VCC         | External 5V     |
| GND         | GND             |

Connect the external power supply ground to the NodeMCU GND.

## Working Principle

The ESP8266 receives control commands from the KiwisIoT platform through a wireless connection. Based on the received input, the controller adjusts the servo motor angle, enabling remote position control through the dashboard.

## KiwisIoT Dashboard

The dashboard provides wireless servo control and position adjustment.

| Function        | Description              |
| --------------- | ------------------------ |
| Servo Control   | Remote motor operation   |
| Angle Control   | Adjust servo position    |
| Wireless Access | Control through KiwisIoT |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and control the servo motor through the KiwisIoT dashboard.

## Applications

- Wireless motor control
- Smart home automation
- Robotic applications
- Remote positioning systems
- IoT-based automation projects

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/wireless-servo-control-with-esp8266-and-kiwisiot-1997fb](https://www.hackster.io/harispidy07/wireless-servo-control-with-esp8266-and-kiwisiot-1997fb)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, Servo Motor, and KiwisIoT for wireless servo control and smart automation._
