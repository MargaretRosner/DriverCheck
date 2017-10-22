/*

  I intentionally use the const byte construct here
  instead of #define. It's less dangerous (no name collision possible)
  and safer since variables have scope.
*/
const byte PUSH_BUTTON = 8;
const byte POT = A0;

long prev_t = 0;
int pot_value = 100;
byte cmd_id = 0;

byte btn_state = LOW;
int A = 1;
String result = "";

#include <Servo.h>

// two servo objects
Servo myservo1;
Servo myservo2;

int pos1 = 0;    // variable to store the servo position of servo 1
int pos2 = 0;

void setup() {
  //Setup input and outputs: LEDs out, pushbutton in.

  Serial.begin(9600);
  myservo1.attach(9); //top servo
  myservo2.attach(10); // bottom servo
}

void loop() {

  cmd_id = Serial.read();
      { 
    delay(500);
    result = result + pot_value + ","+ pos1 + "," + pos2 + "," + A;
    Serial.println(result);
    result = "";
    pos1 = 50;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 52;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 54;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 56;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 58;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 60;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 62;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 64;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 66;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 68;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 70;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 72;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 74;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 76;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 78;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 80;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 82;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 84;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 86;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 88;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 90;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    
     pos1 = 92;{
      myservo1.write(pos1);
      delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + ","+ pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 94;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
    pos1 = 96;{
      myservo1.write(pos1);
      delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + ","+ pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
   
    pos1 = 98;{
      myservo1.write(pos1);
      delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + ","+ pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
      pos1 = 100;{
    myservo1.write(pos1);
    delay(200);
     
     for (pos2 = 1; pos2 <= 50; pos2 += 1) {
      myservo2.write(pos2);
      pot_value = analogRead(POT);
      delay(200);
      result = result + pot_value + "," + pos1 + "," + pos2 + "," + A;
      Serial.println(result);
      result = "";
      }
     for (pos2 = 50; pos2 <= 1; pos2 -= 1) {
      myservo2.write(pos2);
      delay(200);
      }
    }
      
    delay(50);
   result = result + pot_value + ","+ pos1 + "," + pos2 + "," + "2";
    Serial.println(result);
    result = "";
   }
}
}


