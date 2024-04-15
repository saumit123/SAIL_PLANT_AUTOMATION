#include <Wire.h>
// #include <Adafruit_INA219.h>
#include <Adafruit_INA260.h>

Adafruit_INA260 ina260 = Adafruit_INA260();
// Adafruit_INA219 ina219; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) 
  {
    delay(1);
  }
 


Serial.println("Adafruit INA260 Test");

  if (!ina260.begin()) {
    Serial.println("Couldn't find INA260 chip");
    while (1);
  }
  Serial.println("Found INA260 chip");
}

void loop() {
  
  // float current_mA = ina219.getCurrent_mA();
  float current_mA = ina260.readCurrent();

  float iir_current = iir_filter(current_mA);
  float current = kalman(iir_current);


  Serial.print(current_mA);
  Serial.print(" ");
  Serial.println(current);
  // Serial.println(iir_current);

  delay(100);
}

float kalman(float U){
  static float R = 83; 
  if(U<0){
    R = 30;
  }
   //0.33
  static const float H = 1.0;
  static float Q = 3;
  static float P = 0;
  static float U_HAT = 0;
  static float K = 0;

  K = P*H/(H*P*H+R);
  U_HAT += K*(U-H*U_HAT);

  P = (1-K*H)*P+Q;

  return U_HAT;
  

}

float iir_filter(float inputVal) {

  const float x = 0.95; 
  static float outputVal = 0; 
  
  outputVal = outputVal * x + inputVal * (1-x);
  return outputVal;
}