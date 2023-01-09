## Accelerometer Mouse Control

This project uses an Arduino board and an accelerometer to control the movement of the mouse on a computer. The Arduino sketch reads data from the accelerometer and sends it to the computer over a serial connection. The Python script receives this data and uses it to move the mouse in real-time.

### Prerequisites

- Arduino board
- Accelerometer
- USB cable for connecting the Arduino to the computer
- Arduino IDE for uploading the sketch to the Arduino board
- Python 3 for running the Python script
- PyAutoGUI library for controlling the mouse with Python

### Setup

1. Connect the accelerometer to the Arduino board according to the accelerometer's documentation.
2. Upload the Arduino sketch (`accelerometer_mouse_control.ino`) to the Arduino board using the Arduino IDE.
3. Open a terminal and navigate to the directory containing the Python script (`mouse_control.py`).
4. Install the PyAutoGUI library by running the following command:
`pip install pyautogui`
5. Run the Python script by typing the following command:
`python mouse_control.py`
### Operation

The program will run indefinitely, continuously reading data from the accelerometer and moving the mouse accordingly. To stop the program, press `CTRL + C` in the terminal window.

### Troubleshooting

- If the mouse is not moving as expected, try adjusting the acceleration values in the `move_mouse()` function in the Python script.
- If the serial connection is not working, check that the Arduino is connected to the correct port on the computer and that the baud rate in the Python script matches the baud rate in the Arduino sketch.

###Documentation 
https://drive.google.com/file/d/1C5iqZraZCFK-_5yLXiGsl5lO1TovOHdN/view?usp=sharing
Example of following code but modified to control a robot
