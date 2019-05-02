const int pushbt1=2;
const int pushbt2=3;
const int led=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pushbt1, INPUT);
  pinMode(pushbt2, INPUT);
  pinMode(led, OUTPUT);

  digitalWrite(pushbt1, HIGH);
  digitalWrite(pushbt2, HIGH);

}

int brightness=0;

void loop() {
  if(digitalRead(pushbt1) == LOW)
     {
      brightness++;
     }

   else if(digitalRead(pushbt2) == LOW)
          {
            brightness--;
          }
   brightness = constrain(brightness, 0, 255);

   analogWrite(led, brightness);

   delay(20);

} 
