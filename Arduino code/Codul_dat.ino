#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0; 
String Byte ; 
void setup() 
{
  Serial.begin(9600); 
  Serial.println("Salut");
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);

}


void loop() 
{
  if (Serial.available() > 0)
   {
    Byte = Serial.readString();
    int z= Byte.toInt();
  if (z!=0) 
    switch (z)
     {
      case 1:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);                                   
      }
      break;

      case 2:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);                       
      }
      break;

      case 3:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);                       
      }
      break;

      case 4:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);                       
      }
      break;
      
      case 5:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo1.write(pos);              
       delay(15);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(15);                       
      }
      break;
      
      case 6:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo2.write(pos);              
       delay(15);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo2.write(pos);              
       delay(15);                       
      }
      break;
      
      case 7:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo3.write(pos);              
       delay(15);
      }                       
      for (pos = 150; pos >= 0; pos -= 1) 
      { 
       servo3.write(pos);              
       delay(15);                       
      }
      break;

      case 8:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 90; pos += 1)
      { 
       servo4.write(pos);              
       delay(15);
      }                       
      for (pos = 90; pos >= 0; pos -= 1) 
      { 
       servo4.write(pos);              
       delay(15);                       
      }
      break;

      case 9:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 90; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
       servo4.write(pos);              
       delay(5);
      }                       
      for (pos = 90; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);
       delay(5);
       servo4.write(pos);              
       delay(5);                                   
      }
      break;

      case 10:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 150; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      
      }                       
      break;

      case 11:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 150; pos >= 0; pos -= 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      
      }                       
      break;
      
      case 12:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 160; pos += 1)
      { 
       
       servo4.write(pos);              
       delay(5);
      
      }                       
      break;

      case 13:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 160; pos >= 0; pos -= 1)
      { 
       
       servo4.write(pos);              
       delay(5);
      
      }                       
      break;

       case 14:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 120; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      
      }                       
      break;

      case 15:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 120; pos >= 0; pos -= 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
      
      }                       
      break;

      case 16:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 160; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       
      
      }                       
      break;

      case 17:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 160; pos >= 0; pos -= 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       
      
      }                       
      break;
      
     
     }
     else if(z>20 && z<0) Serial.println("nu");
    Serial.print("I did command: ");
    Serial.println(z);
  
 }
}
