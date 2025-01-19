  int x; 
void setup()
{
  pinMode(13, OUTPUT);

}

void loop()
{
 for( x = 1; x < 10000; x++){
  digitalWrite(13, HIGH);
  delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(13, LOW);
  delayMicroseconds(100);
 }
  delay(3000);  
}
