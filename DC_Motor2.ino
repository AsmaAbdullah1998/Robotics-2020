int motorControlPin = 9;                                                                   //Set pin 9 as motor control pin

void setup() {
  pinMode(motorControlPin, OUTPUT);                                                        //Set MotorControlPin as output Pin
  Serial.begin(9600);                                                                      //Start Serial Comms
  Serial.println("Enter a Value between 0-255 to set the speed of the motor");             //Let user know range of values to enter
}

void loop() 
{
  if (Serial.available())                                                                   //If something is entered into the Serial Monitor
   {
    int speed = Serial.parseInt();                                                         //Take the first Integer entered and set the speed variable to the entered value
    analogWrite(motorControlPin, speed);                                                   //Write the 'speed' value to motorControlPin
   }
}
