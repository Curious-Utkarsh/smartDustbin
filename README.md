# ESP32 Smart Dustbin

[![ESP32](https://img.shields.io/badge/MCU-ESP32-E7352C)](https://www.espressif.com/)

A dustbin that opens its lid hands-free, separates wet and dry waste, watches fill level and gas, and reports to the cloud. College IoT project, 2023.

## Demo

[![ESP32 smart dustbin](https://img.youtube.com/vi/BGOEu9aD0FA/hqdefault.jpg)](https://www.youtube.com/shorts/BGOEu9aD0FA)

## Key features

- Ultrasonic proximity opens and closes the lid with a servo
- Moisture sensing for wet/dry detection; gas sensing for odour
- Ultrasonic fill-level measurement; alerts sent through IFTTT webhooks over Wi-Fi

## Files

`smartDustbin.ino` (main) with one tab per function: `binOpen`, `binClose`, `checkLevel`, `moistDetect`, `gasDetect`, `sendData`, …

Set your Wi-Fi credentials and IFTTT key before flashing.

## Related

[ESP32 power meter](https://github.com/Curious-Utkarsh/powerMeter)

---
[Kumar Utkarsh](https://github.com/Curious-Utkarsh) · [LinkedIn](https://www.linkedin.com/in/kumar-utkarsh-124aab227/) · [Portfolio of builds](https://www.mechamindlabs.com/projects)
