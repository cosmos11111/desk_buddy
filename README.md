# Desk Buddy
A desk buddy built into a Diet Coke can. An ESP32 drives an OLED screen showing blinking robot eyes, and a buzzer chirps three times when you clap (sound sensor). It runs standalone from a USB adapter.

**Parts:** ESP32, 0.96" I2C OLED (SSD1306), sound sensor module, buzzer, jumper wires.
**Libraries:** Adafruit SSD1306, Adafruit GFX (Arduino IDE).
**Wiring:** OLED SDA to GPIO21, SCL to GPIO22; sound sensor DO to GPIO34; buzzer to GPIO25.
