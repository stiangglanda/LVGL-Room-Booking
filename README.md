# LVGL-Room-Booking

A cost-effective room display system for meeting spaces, built with ESP32-S3 and LVGL.

## Overview

LVGL-Room-Booking is a prototype for an affordable room management display system designed as an extension for [OpenIndoorMaps](https://github.com/openindoormaps/openindoormaps). These embedded devices mount outside meeting rooms to show current and upcoming reservations in real-time, offering a more efficient alternative to tablets.

![LVGL-Room-Booking](https://github.com/user-attachments/assets/7f11a1da-e4d2-4fef-8128-8195f1f1f175)

## Features

- **Real-time meeting information display**
- **Upcoming reservation schedule**
- **Touch screen interface**
- **[OpenIndoorMaps](https://github.com/openindoormaps/openindoormaps) integration**

## Hardware Components

- ESP32-S3 microcontroller
- Touch-enabled display
- Power supply
- Optional mounting hardware

## Software

- Written in C++ using PlatformIO
- SquareLine
- Built with LVGL (Light and Versatile Graphics Library)
- WiFi connectivity for backend integration

![squarelineUI](https://github.com/user-attachments/assets/20e191c7-e302-4595-ad73-0fd33917022b)

## Installation

### Software Installation

1. Clone the repository:
```bash
git clone https://github.com/stiangglanda/LVGL-Room-Booking.git
cd LVGL-Room-Booking
```

2. Open the project in PlatformIO

3. Build and upload to your ESP32-S3:
```bash
pio run -t upload
```

## Display Interface

The interface shows:
- Current meeting (title, organizer, time remaining)
- Next 3 upcoming meetings
- Room availability status
- Time and date

## Future Improvements

- Battery-powered option with low power modes
- LED status indicators (red/green for occupied/available)
- Direct booking capability via touch interface
- E-paper display option for better power efficiency
- QR code display for meeting details

## Integration with OpenIndoorMaps

This project extends OpenIndoorMaps functionality by:
1. Providing physical interfaces to the digital mapping system
2. Enabling real-time room status visualization
3. Creating a complete indoor navigation and resource management solution
