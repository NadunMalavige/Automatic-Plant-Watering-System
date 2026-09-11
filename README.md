# 🌱 Automatic Plant Watering System

An Arduino-based automatic plant watering system that monitors soil moisture and automatically activates a water pump when the soil becomes too dry.

## 📌 Project Overview

The **Automatic Plant Watering System** is designed to reduce the need for manual plant watering.

A soil moisture sensor continuously checks the moisture level of the soil. When the soil becomes dry, the Arduino activates a relay module, which turns on the water pump. After watering, the pump is turned off automatically.

This project is useful for home gardens, indoor plants, small agricultural applications, and smart gardening systems.

## ✨ Features

* 🌱 Automatic soil moisture monitoring
* 💧 Automatic plant watering
* 🔌 Relay-controlled water pump
* 📊 Real-time soil moisture readings through the Serial Monitor
* ⚙️ Adjustable soil moisture threshold
* 🔋 External power supply support for the water pump
* 🤖 Arduino-based control system

## 🛠️ Components Used

* Arduino Uno
* Soil Moisture Sensor
* 5V Relay Module
* DC Water Pump
* Water Tube/Pipe
* Jumper Wires
* External Power Supply for the Pump
* Plant and Water Container

## 🔌 Circuit Connections

### Soil Moisture Sensor

| Sensor Pin | Arduino |
| ---------- | ------- |
| VCC        | 5V      |
| GND        | GND     |
| AO         | A0      |

### Relay Module

| Relay Pin | Arduino       |
| --------- | ------------- |
| VCC       | 5V            |
| GND       | GND           |
| IN        | Digital Pin 7 |

### Water Pump

The water pump is connected through the relay module and should use a suitable external power supply.

> ⚠️ Do not power a high-current water pump directly from the Arduino 5V pin. Use an appropriate external power supply and allow the relay to switch the pump.

## ⚙️ How It Works

The system follows these basic steps:

1. The soil moisture sensor measures the moisture level.
2. The Arduino reads the sensor value through analog pin `A0`.
3. The Arduino compares the sensor value with the predefined dry-soil threshold.
4. If the soil is dry, the relay is activated.
5. The relay turns on the water pump.
6. The pump supplies water to the plant for a predefined period.
7. The pump is turned off.
8. The Arduino continues monitoring the soil moisture.

### System Flow

```text
Soil Moisture Sensor
        ↓
     Arduino
        ↓
 Check Moisture Level
        ↓
   Is Soil Dry?
     ↙       ↘
   YES        NO
    ↓          ↓
 Relay ON    Relay OFF
    ↓          ↓
 Pump ON     Pump OFF
    ↓
 Water Plant
    ↓
 Pump OFF
```

## 💻 Software

* Arduino IDE
* Arduino C/C++

## 📁 Project Structure

```text
Automatic-Plant-Watering-System/
│
├── AutomaticPlantWateringSystem.ino
└── README.md
```

## 🔧 Important Code Settings

The soil moisture threshold can be adjusted according to the sensor and soil conditions.

```cpp
const int dryValue = 700;
const int wetValue = 400;
```

The pump operating time can also be changed:

```cpp
delay(5000);
```

For example, `5000` means the pump operates for approximately **5 seconds**.

## 🧪 Testing

The system can be tested by placing the soil moisture sensor into dry and wet soil.

### Dry Soil

When the sensor detects that the soil is dry:

```text
Soil is DRY - Pump ON
```

The relay activates and the water pump starts.

### Wet Soil

When the soil has enough moisture:

```text
Soil is WET - Pump OFF
```

The relay remains off and the pump does not operate.

## 🚀 Future Improvements

The project can be improved by adding:

* 📱 Mobile application control
* 📡 Wi-Fi connectivity using ESP32
* 🌦️ Weather-based watering
* 💧 Water level monitoring
* 📊 Web-based monitoring dashboard
* 🔔 Low-water notifications
* ☁️ IoT cloud monitoring
* 🔋 Solar-powered operation
* ⏰ Scheduled watering
* 🌱 Multiple plant monitoring

## 🎯 Project Objectives

* Automate plant watering.
* Reduce unnecessary water usage.
* Reduce the need for manual watering.
* Monitor soil moisture continuously.
* Demonstrate the practical use of Arduino and sensors.
* Develop a basic automated IoT/smart-gardening concept.

## 📚 Learning Outcomes

Through this project, the following concepts can be learned:

* Arduino programming
* Analog sensor reading
* Digital output control
* Relay module operation
* DC motor/pump control
* Basic automation
* Embedded system development
* Hardware and software integration

## 👨‍💻 Author

**Nadun Malavige**

GitHub: [NadunMalavige](https://github.com/NadunMalavige)

## 📄 License

This project is available for educational and personal use.

---

⭐ If you find this project useful, feel free to star the repository!
