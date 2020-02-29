int tonePin = 11;
int led = 5;
int tone_duration = 200;

int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT_PULLUP);  
  pinMode(button2, INPUT_PULLUP);  
  pinMode(button3, INPUT_PULLUP);  
  pinMode(button4, INPUT_PULLUP);

}

char incomingByte;

void led()
{
    digitalWrite(led, HIGH);
    delay(100);
}

void buzz()
{
    tone(11, 100,tone_duration);
    delay(100);
}

void loop() {
   if (Serial.available() > 0) {

incomingByte = Serial.read();
Serial.println(incomingByte);

/*

  if(count<=incomingByte)
  {
      for (int i=0; i<incomingByte; i++)
      {
       buzz();
       led_glow(); 
       count = count + 1;
      }
       }
   }
   else
   {
    
   }
}
*/



  if (incomingByte == '1') 
  {
    buzz();
    led();
  }
  if (incomingByte == '2') 
  {
    buzz();
    led();
    buzz();
    led();
    
  }
  if (incomingByte == '3') 
  {
    buzz();
    led();
    buzz();
    led();
    buzz();
    led();
    
  }
  if (incomingByte == '4') 
  {
    buzz();
    led();
    buzz();
    led();
    buzz();
    led();
  }
  

}
}
