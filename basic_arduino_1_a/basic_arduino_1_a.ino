/**
 * @file: fireled.ino
 * @title: Arduino basics 1: a LED fire
 * @author: Simon de Bakker <simon@simbits.nl>
 *
 * This sketch is part of the Arduion basics 1 workshop
 */
 
#define LED1  9
#define LED2  10
#define LED3  11
 
#define BUTTON 12

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(BUTTON, INPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  
  delay(1000);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  
  delay(1000);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  
  delay(1000);
}
