const int trigPin =4 ;
const int echoPin =2 ;
int c=0;
int flag=0;
unsigned long tstart,tstop,elpsd;                  
void setup() {  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = ((duration/2) / 29.41);
  //Serial.println(distance);
  //while(distance>=5){}
  
  if((distance<15) && (flag==0)){
   tstart=millis();
   Serial.println("Timer started");
    flag=1;
    delay(2000);
    }

    
   else if(distance<15 && flag==1){
      tstop=millis();
      
      flag=0;
   
    elpsd=tstop-tstart;
    Serial.println("Time in seconds");
    Serial.println(elpsd/1000);

   }
   
    
  
   tstart=0;
   tstop=0;
   delay(100);
   
}
