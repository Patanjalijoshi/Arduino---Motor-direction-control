// controlling motor direction with keyboard input

char inByte;
#define motorPin1 2
#define motorPin2 3
void setup() {
pinMode(motorPin1,OUTPUT);
pinMode(motorPin2,OUTPUT);

}

void loop() {
  if(Serial.available()> 0){
    if(inByte == '1'){
     digitalWrite(motorPin1,HIGH);
     digitalWrite(motorPin2,LOW);
      }
    else if(inByte == '0'){
     digitalWrite(motorPin1,LOW);
     digitalWrite(motorPin2,HIGH);
      }
    else{
     digitalWrite(motorPin1,LOW);
     digitalWrite(motorPin2,LOW);
      } 
   }

}
