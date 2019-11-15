int sensorPin1 = A0;
int sensorValue= 0;
void setup() {
  // put your setup code here, to run once:
pinMode(sensorPin1,INPUT);
Serial.begin(9600);
}

void loop() {
int a=analogRead(sensorPin1);
delay(700);
Serial.println(a);
if(a>10
0){
Serial.println("Malfunction");

}
  // put your main code here, to run repeatedly:

}
