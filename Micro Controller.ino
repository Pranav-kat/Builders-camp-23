int x;
void setup() {
  Serial.begin(9600);  // initiate the serial transmission
  }

void loop() {
  if(Serial.available() > 0)
  {
    x=Serial.read();
  }
 
  if (x == '1'){
    analogWrite(5,130);
  }
  else if (x == '2'){
    analogWrite(5,160);
  }
  else if (x == '3'){
    analogWrite(5,190);
  }
  else if (x == '4'){
    analogWrite(5,220);
  }
  else if (x == '5'){
    analogWrite(5,255);
  }
  else if (x == '0'){
    analogWrite(5,0);
  }
  }
