#define AIN1 6
#define AIN2 5
#define volt1 0
int i = 0;
void setup() {
  Serial.begin(9600);
  pinMode(AIN2,OUTPUT);
  pinMode(AIN1,OUTPUT);
  
}
 
void loop() {
  digitalWrite(AIN2, LOW);
  for(int i = 0; i<=255; i++);
    analogWrite(AIN1,i); 
    delay(100);
      if(volt1 == 255){
        for(int i = 255; i>0; i--);
          analogWrite(AIN1,i);
          delay(100);
    }
  }
 
