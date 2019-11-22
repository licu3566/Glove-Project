

#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h>

int flexSensor = 3;


MMA8452Q accel; // Default MMA8452Q object create. (Address = 0x1D)
//MMA8452Q accel(0x1C); // Initialize the MMA8452Q with an I2C address of 0x1C (SA0=0)
//MMA8452Q accel(0x1D); // Initialize the MMA8452Q with an I2C address of 0x1D (SA0=1)

//Source:
//https://learn.sparkfun.com/tutorials/mma8452q-accelerometer-breakout-hookup-guide/all
void setup() {
  accel.init(); // Default init: +/-2g and 800Hz ODR
  pinMode(flexSensor, INPUT);
  Serial.begin(9600);




}

void loop() {
  accel.read(); // Update acceleromter data
  float  xAcceleration = accel.x; // Read in raw x-axis acceleration data
  //  Serial.print("Acceleration on the x-axis is ");
  //send information
  delay(10);
  Serial.print(analogRead(flexSensor));
  Serial.print(",");
  Serial.println(xAcceleration);



}
