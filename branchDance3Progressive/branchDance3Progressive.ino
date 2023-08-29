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

void setup() {
 topservo.attach(9);
 bottomservo.attach(10);
 
 
 topservo.write(30);
 bottomservo.write(30);
 curtop =30;
 curbot =30;
 delay(8000);
 
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  // convert 

  itoa(count,mystr,2);
  
  

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

  
  
  
  //delay(2000);

  // increment count and check
  if (curtop == topAng){ topdone = true;}
  if (curbot == bottomAng){botdone = true;}
  if (topdone == true && botdone == true){
  count++;
  topdone =false;
  botdone = false;
  }
  if(count >7){
    count =4;
  }
  if (curtop < topAng){curtop++;}else{curtop--;}
  if (curbot <bottomAng){curbot++;}else{curbot--;}

  // move at one time
  bottomservo.write(curbot);
  topservo.write(curtop);
  Serial.println(mystr);
  delay(30);
  
}
