/*
 * Program Name: Photoresistor
 * Author: Ignacio Rubio 
 * Date: 12 August 2018
 * Description: Shows photoresistor's value on serial monitor.
 */

const int pinPhotoResis = A0; // photoresistor pin

void setup() {
  Serial.begin(9600);
}

int valuePhotoResis = 0;

void loop() {
  valuePhotoResis = analogRead(pinPhotoResis);

  Serial.print("Photoresistor's value: ");
  Serial.println(valuePhotoResis);
  
  delay(2000);
}
