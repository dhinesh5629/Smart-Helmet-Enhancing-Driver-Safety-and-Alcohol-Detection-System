#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

void setup() {
  pinMode(6, OUTPUT);
   pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}

void loop() {

  int c= digitalRead(3);
  if(c==0)

  {

    while(1)
    {
  if (radio.available()) {
    
    char m;
    radio.read(&m, sizeof(m));
    Serial.println(m);
    //char m = text;


    if(m=='H')
    {
      while(1)
      {
      digitalWrite(6, HIGH );
    delay(200);

 int c= digitalRead(3);
  if(c==0)
  {
    break;
  }
      }
      
      }
      else if(m=='A')
 {
      
      digitalWrite(6, LOW );
    delay(200);     
      }  
  }
  }

  }
  
else
{  
      digitalWrite(6, HIGH );
    delay(200);
}
}
