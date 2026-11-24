\#ESP32 Measurement Logger

Educational project combining temperaturę and himidity readings from DHT11 sensor

connected to an ESP32-S3 (in my case) with data collection and analysis in Python.





\#How it works:

1. ESP32 reads the DHT11 sensor using an existing sensor library.
2. Measurements are sent to a computer over a serial connection.
3. Python script receives the data and collects the maximum of 120 readings.
4. After data collecrtion ends, the script generates plots, SCV file, txt report.



The program can be interrupted using Ctrl+C.



\#Repository Structure:

* firmware - contains ESP-IDF project
* pc/ - contains Python script for collecting data
* examples/ - sample data, repost, plots, and screenshots of the program.





\#Additional information

* in the c++ firmawe, the DHT11 pin is configured as \*\*GPIO4\*\* using the "SENSOR\_PIN" definition. You can change it to another suitable GPIO.
* In the Python script, the device is searched for on \*\*COM3 and COM4\*\*, which are the port names assigned to the USB serial connections on my laptop. You can update the "ESP32\_VID" variable to match the serial port assigned to your computer.

