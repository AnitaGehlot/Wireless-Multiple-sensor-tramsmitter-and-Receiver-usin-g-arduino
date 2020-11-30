// the setup routine runs once when you press reset:
const int buttonPin1 = 10; 
  // the number of the pushbutton pin
//const int ledPin =  13;
int buttonState1=0;


#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
  //pinMode(buttonPin1, INPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
 
}

// the loop routine runs over and over again forever:
void loop() 
{  
  buttonState1 = digitalRead(buttonPin1);
  int FSR2=analogRead(A0);
  FSR2=FSR2/2;
    // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if(buttonState1 == LOW)
  { 
   lcd.clear();     
   int FSR1=10;
   Serial.print(FSR1);
   Serial.println(FSR2);
   lcd.setCursor(0,0);
   lcd.print("PRESSESD");
   lcd.setCursor(0,1);
   lcd.print(FSR2);
   delay(50);
  }
  
  else
  {
    lcd.clear();     
   int FSR1=20;
   Serial.print(FSR1);
   Serial.println(FSR2);
   lcd.setCursor(0,0);
   lcd.print("NOT PRESSED");
   lcd.setCursor(0,1);
   lcd.print(FSR2);
   delay(50);
  }
  
  }
