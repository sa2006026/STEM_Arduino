
#define AIN1 6
#define AIN2 5
#define volt1 0
int var = 0;

void setup() {
  Serial.begin(9600);
  pinMode(AIN2,OUTPUT);
  pinMode(AIN1,OUTPUT);
  
}
 
void loop() {
  digitalWrite(AIN2, LOW);
  while(var<255){
    analogWrite(AIN1,var);
    var++; 
    delay(100);
  }
  while(var>0){
    analogWrite(AIN1,var);
    var--; 
    delay(100);
  }
 }
 
