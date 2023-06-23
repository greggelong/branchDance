#include <Servo.h>

Servo topservo;
Servo bottomservo;
int count= 4;
char mystr[4];
int bottomAng;
int topAng;

void setup() {
 topservo.attach(10);
 bottomservo.attach(9);
 
 
 topservo.write(30);
 bottomservo.write(30);
 
 delay(5000);
 
  Serial.begin(9600);
}

void loop() {
  // convert 

  itoa(count,mystr,2);
  Serial.println(mystr); 
  

  if (mystr[1] == '0'){
  
  bottomAng =60;
 
  }else{
    bottomAng = 0;
   }

  if (mystr[2] == '0'){
  topAng =60;
  
  }else{
    topAng =0;
  }

  // move at one time
  bottomservo.write(bottomAng);
  topservo.write(topAng);
  delay(2000);
  
  
  //delay(2000);

  // increment count and check
  count++;
  if(count >7){
    count =4;
  }
  
}
