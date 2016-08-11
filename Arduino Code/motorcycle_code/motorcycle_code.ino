int togglePin = 8;
int forwPin = 9;
int prevPin = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(togglePin, OUTPUT);
  pinMode(forwPin, OUTPUT);
  pinMode(prevPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available() > 0){
    char inChar = Serial.read();
    if(inChar == 't'){
      digitalWrite(togglePin, HIGH);
      delay(10);
      digitalWrite(togglePin, LOW);
      delay(1000);  
    }
    else if(inChar == 'f'){
      digitalWrite(forwPin, HIGH);
      delay(10);
      digitalWrite(forwPin, LOW);
      delay(1000);  
    }
    else if(inChar == 'b'){
      digitalWrite(prevPin, HIGH);
      delay(10);
      digitalWrite(prevPin, LOW);
      delay(1000);  
    }
  }

}
