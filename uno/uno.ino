#include <string.h>
String data;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11, OUTPUT);
digitalWrite(11, 0);
pinMode(12, OUTPUT);
digitalWrite(12, 0);
pinMode(13, OUTPUT);
digitalWrite(13, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
  {
  data=Serial.readStringUntil('\r');
  //***********************************************
  if (data == "batloa")
    {
    digitalWrite(11, 1);
    Serial.println("Dabatloa");
    }
  //***********************************************
  if (data == "tatloa")
    {
    digitalWrite(11, 0);
    Serial.println("Datatloa");
    }
  //************************************************
  if (data == "batquat")
    {
    digitalWrite(12, 1);
    Serial.println("Dabatquat");
    }
  //************************************************
  if (data == "tatquat")
    {
    digitalWrite(12, 0);
    Serial.println("Datatquat");
    }
  //************************************************
  }
}