

//Constants:
const int duration = 500;
const int buzzPin = 8;   //pin 3 has PWM funtion
const int buzzTime = 5; 

//Assigning pins for each flex sensor
const int flexPin = A0; 
const int flexPin2 = A1;
const int flexPin3 = A2;
const int flexPin4 = A3;
const int flexPin5 = A4;

//Variables: Save Analog Values for each flex sensor
int value; 
int value2; 
int value3;
int value4;
int value5;

void setup(){
  
  pinMode(buzzPin, OUTPUT);  //Set pin 8 as 'output'
  Serial.begin(9600);       //Begin serial communication

}

void loop(){
  
  value = analogRead(flexPin);         
  value2 = analogRead(flexPin2);
  value3 = analogRead(flexPin3);
  value4 = analogRead(flexPin4);
  value5 = analogRead(flexPin5);

  
  //flex sensor #1
  if (value>300) //the value represents how much the flex sensor is bent. If it's bent enough...
  {
    tone(8,349,duration); //play F4 for duration 500
    delay(buzzTime); 
    
  }
  else
  {
    noTone(buzzPin);
  }

  
  //flex sensor #2
  if (value2>250)
  {
    tone(8,392,duration);
    delay(buzzTime);
    
  }
  else
  {
    noTone(buzzPin);
  }

  //flex sensor #3
  if (value3>250)
  {
    tone(8,262,duration);
    delay(buzzTime);
    
  }
  else
  {
    noTone(buzzPin);
  }

  //flex sensor #4
  if (value4>250)
  {
    tone(8,330,duration);
    delay(buzzTime);
    
  }
  else
  {
    noTone(buzzPin);
  }

  //flex sensor #5
  if (value5>230)
  {
    tone(8,294,duration);
    delay(buzzTime);
    
  }
  else
  {
    noTone(buzzPin);
  }

}
