// C++ code
//
#define LED 2
#define PUL 6

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PUL, OUTPUT);
  
}

void loop()
{
  if(digitalRead(PUL)){
    digitalWrite(LED,true);
     
  } else{
    digitalWrite(LED,0);
  }
}
