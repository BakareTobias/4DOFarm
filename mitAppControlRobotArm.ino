//ARDUINO TO CONTROL A 4DOF SG90 ROBOTIC ARM USING BLUETOOTH(HC-05)
//include libraries
#include "Arduino.h"
#include <SoftwareSerial.h>
#include <Servo.h>

// initialize hc-05 rx and tx pins(rx pin on arduino -> tx pin on hc-05 )
const byte rxPin = 8;
const byte txPin = 9;
SoftwareSerial BTSerial(rxPin, txPin); // RX TX

// creating servo objects for each DOF
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;

unsigned long MOVING_TIME = 3000;
unsigned long moveStartTime = millis();


void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);

  //attaching pins to each servo
  base.attach(4);
  shoulder.attach(5);
  elbow.attach(6);
  wrist.attach(7);

  //set all motors to beginning position
  base.write(0);
  shoulder.write(0);
  elbow.write(0);
  wrist.write(0);
  

}
// Track the target positions
int b_target = 0;
int s_target = 0;
int e_target = 0;
int w_target = 0;

// Track the current positions (used for smooth movement)
int b_current = 0;
int s_current = 0;
int e_current = 0;
int w_current = 0;


//for storing incoming position data
String buffer = "";

void loop() {

  while (BTSerial.available() > 0) {

    char data = (char) BTSerial.read(); 
    buffer += data;
        Serial.println(buffer);

    if (data == 'b'){ //the MIT app ends each motor's position with a diff letter 
      b_target = buffer.toInt();
      b_target = round(b_target);
      b_target = constrain(b_target,0,180);

      buffer = "";
      
    }else if(data == 's'){
      s_target = buffer.toInt();
      s_target = round(s_target);
      s_target = constrain(s_target,0,180);

      buffer = "";

    }else if(data == 'e'){
      e_target = buffer.toInt();
      e_target = round(e_target);
      e_target = constrain(e_target,0,180);
      buffer = "";

    }else if(data == 'w'){
      w_target = buffer.toInt();
      w_target = round(w_target);
      b_target = constrain(b_target,0,180);

      buffer = "";

    };
    
        
  
  
  }
  /* base.write(b_target);
  shoulder.write(s_target);
  elbow.write(e_target);
  wrist.write(w_target); */
   // Smooth movement by gradually updating servo positions
   delay(200);
  smoothMove(base, b_target, b_current);
  smoothMove(shoulder, s_target, s_current);
  smoothMove(elbow, e_target, e_current);
  smoothMove(wrist, w_target, w_current);

  /* unsigned long progress = millis() - moveStartTime;
  if (progress <= MOVING_TIME){
    long angle = map(progress,0, MOVING_TIME, b_current, b_target);
    base.write(angle);
  } */
}

void smoothMove(Servo& servo, int targetPos, int& currentPos) {
  // Determine the step direction and size
  int step = (targetPos > currentPos) ? 1 : -1;
  // Move in increments until reaching the target position
  while (currentPos != targetPos) {
    currentPos += step;
    servo.write(currentPos);
    delay(15); // Adjust delay for smoother motion
  }
}