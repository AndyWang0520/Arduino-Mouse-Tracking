import serial  # import the Python Serial library
import pyautogui  # import the PyAutoGUI library

# set up a serial connection with the Arduino
ARDUINO_PORT = '/dev/ttyACM0'
BAUD_RATE = 9600

arduino = serial.Serial(ARDUINO_PORT, BAUD_RATE)

def move_mouse(x, y, z):
  """Move the mouse according to the specified acceleration values."""
  pyautogui.moveRel(x, y, z)

while True:  # run this loop indefinitely
  # read a line of data from the serial connection
  data = arduino.readline().strip()

  # split the data into separate acceleration values
  x, y, z = data.split(',')

  # convert the acceleration values to integers
  x = int(x)
  y = int(y)
  z = int(z)

  move_mouse(x, y, z)  # move the mouse according to the acceleration values