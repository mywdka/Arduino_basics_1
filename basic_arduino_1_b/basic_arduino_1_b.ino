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

int press_counter = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(BUTTON, INPUT);
}

void loop() {
  
  if (digitalRead(BUTTON) == LOW) {
    delay(50);
    if (digitalRead(BUTTON) == LOW    ) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      
      delay(100);
      
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);   
     
      delay(100);
      
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      
      delay(100);
      
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW); 
      
      delay(100);
      
      press_counter = press_counter + 1;
      if (press_counter > 2) {
        press_counter = 0;
      }
    }
  }
 
  if (press_counter == 0) { 
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
    delay(100);
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
    delay(100);
    
  } else if (press_counter == 1) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    
    delay(300);
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
    delay(300);
    
  } else if (press_counter == 2) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    
    delay(500);
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
    delay(500);
  }
}
