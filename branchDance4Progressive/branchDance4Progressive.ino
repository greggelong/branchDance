//corrected the physical logical error from reversed servos

#include <Servo.h>

Servo topservo;
Servo bottomservo;
int count= 4;
char mystr[4];
int bottomAng;
int topAng;
int curtop;
int curbot;
bool topdone= false;
bool botdone= false;
bool alldone = false;

void setup() {
 topservo.attach(9);
 bottomservo.attach(10);
 
 
 topservo.write(45);
 bottomservo.write(45);
 curtop =45;
 curbot =45;
 delay(8000);
 
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  // convert 

  itoa(count,mystr,2);
  
  if (alldone == true){
    bottomAng = 45;
    topAng = 45;
  } else{

  if (mystr[1] == '0'){  // they need to be reversed because the servos are mounted oppsite directions
  
  bottomAng =0;
 
  }else{
    bottomAng = 90;
   }

  if (mystr[2] == '0'){
  topAng =90;
  
  }else{
    topAng =0;
  }
  }
  
  
  
  //delay(2000);

  // increment count and check
  if (curtop == topAng){ topdone = true;}
  if (curbot == bottomAng){botdone = true;}
  if (topdone == true && botdone == true && alldone == false){
  count++;
  alldone = true;
  delay(1000);

  topdone =false;
  botdone = false;
  } 
  if (topdone == true && botdone == true && alldone == true) {
    alldone = false;
    topdone =false;
    botdone = false;
    delay(1000);
  }
  if(count >7){
    count =4;
  }
  if (curtop < topAng){curtop++;}else{curtop--;}
  if (curbot <bottomAng){curbot++;}else{curbot--;}

  // move at one time
  bottomservo.write(curbot);
  topservo.write(curtop);
  //Serial.println(mystr[1]);
  //Serial.println(mystr[2]);
  //Serial.println(topAng);
  //Serial.println(bottomAng);
  
  delay(30);
  
}
