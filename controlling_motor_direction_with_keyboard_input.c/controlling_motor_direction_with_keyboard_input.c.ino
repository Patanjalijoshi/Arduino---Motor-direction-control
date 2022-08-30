// controlling motor direction with keyboard input
char inByte;
#define motorPin1 5
#define motorPin2 6
void setup() {
pinMode(motorPin1,OUTPUT);
pinMode(motorPin2,OUTPUT);
Serial.begin(57600);
}

void loop() {
  
    inByte = Serial.read();
    if(inByte == 'c'){
     digitalWrite(motorPin1,HIGH);
     digitalWrite(motorPin2,LOW);
     //Serial.print("1");
      }
   else if(inByte == 'a'){
     digitalWrite(motorPin1,LOW);
     digitalWrite(motorPin2,HIGH);
      //Serial.print("0");
      }
    else{
     digitalWrite(motorPin1,LOW);
     digitalWrite(motorPin2,LOW);
      } 
   

}
