float Vout = 0;
int input = 0;
float R2 = 0.97;
float Vin = 5;
float R1 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  input=analogRead(A0);
  Vout=(input*5.0)/1024.0;
  R1 = (Vin*R2 - Vout*R2)/Vout;
  Serial.print("voltage is: ");
  Serial.println(Vout);
  Serial.print("Resistant is: ");
  Serial.println(R1);
  delay(2000);
}
