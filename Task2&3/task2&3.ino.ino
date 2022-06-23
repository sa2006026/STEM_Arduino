int LEDPin=8;
int buttonPin=12;
int buttonOld = 0;
int buttonNew;
int dt = 1000;
int readPin=A3;
int V2 = 0;
int readVal = 0;
int LEDState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop(){
  buttonNew = digitalRead(buttonPin);
  
  if (buttonOld == 0 && buttonNew == 1) {
    if(LEDState==0){
      digitalWrite(LEDPin,HIGH);
      LEDState = 1;
    }
    else{
      digitalWrite(LEDPin,LOW);
      LEDState = 0;
    }
  }
  buttonOld = buttonNew;
  readVal = analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(dt);
}
