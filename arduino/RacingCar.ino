#include <Servo.h>


int value = 0; // initialize the variables you need

Servo escA; 

void setup(){
  pinMode(13, OUTPUT);
  escA.attach(9);   // attached to pin 9

  Serial.begin(9600);   // start serial at 9600 baud
  delay(1000);
  escA.writeMicroseconds(1000);
}

void loop(){

  escA.writeMicroseconds(value);
  delay(1000);

  digitalWrite(13, HIGH); //
  
  if(Serial.available()){
    value = Serial.parseInt();   // parse an integer from serial
    Serial.print(value);
    Serial.print("\n");
  }

  digitalWrite(13, LOW); //

  // 1152 = min
  // 2331 = max
}