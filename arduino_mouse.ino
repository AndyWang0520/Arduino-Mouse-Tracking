#include <AccelerometerLibrary.h>  // include the accelerometer library
#include <Serial.h>                // include the Arduino Serial library

const int BAUD_RATE = 9600;       // set the baud rate for the serial connection
const int DELAY_MS = 100;         // set the delay between readings

Accelerometer accelerometer;       // create an accelerometer object

void setup() {
  Serial.begin(BAUD_RATE);        // set up a serial connection at the specified baud rate
  accelerometer.begin();           // initialize the accelerometer
}

void loop() {
  // read the acceleration values from the accelerometer
  float x = accelerometer.getX();
  float y = accelerometer.getY();
  float z = accelerometer.getZ();

  // send the acceleration values to the computer over the serial connection
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);

  delay(DELAY_MS);  // wait the specified time before reading the accelerometer again
}