//const int IRPin[] = {A0, A1, A2, A3, A4};  // Analog input pin that the receiver is attached to
//int IR_SensorValue[] = {0, 0, 0, 0, 0}; // value read from the receiver
//int motor[] = {2, 3, 4, 5};
const int joystickAnalog[] = {A0, A1};
int joystickAnalogValue[] = {0, 0};
const int joystickDigital = 2;
int joystickDigitalValue = 0;
int i,j,k;
void setup() {
    // put your setup code here, to run once:
    // initialize serial communications at 9600 bps:
    Serial.begin(9600);
//    for(i=0; i<4; i++)
//      pinMode(motor[i], OUTPUT);
//    for(i=0; i<5; i++)
//      pinMode(IRPin[i], INPUT);
    for(i=0; i<2; i++)
    pinMode(joystickAnalog[i], INPUT);
    pinMode(joystickDigital, INPUT);
}

void loop() 
{
    // put your main code here, to run repeatedly:
    joystickAnalogValue[0] = analogRead(joystickAnalog[0]);
    joystickAnalogValue[1] = analogRead(joystickAnalog[1]);
    joystickDigitalValue = digitalRead(joystickDigital);
    if(joystickDigitalValue != 0)
    {
      Serial.println("Workednnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn");   
      Serial.println(joystickDigitalValue);
//      delay(10000);
    }
    Serial.println(joystickAnalogValue[0]);
    Serial.println(joystickAnalogValue[1]);
    Serial.println(joystickDigitalValue);

//    delay(5000);
//    if(joystickDigital != 2)
//    {
//      Serial.println(joystickDigital);
//      delay(10000);
//    } 
//    delay(5000);
//    int i;
//    for(i=0; i<5; i++)
//    {
//      IR_SensorValue[i] = analogRead(IRPin[i]);
//      //if(IR_SensorValue[i] < 100)
//      //Serial.println(IR_SensorValue[i]);
//    }
//    if(IR_SensorValue[0] < 50)
//    {
//      digitalWrite(motor[0], HIGH);
//      digitalWrite(motor[1], HIGH);
//      digitalWrite(motor[2], LOW);
//      digitalWrite(motor[3], LOW);
//      Serial.println(0);
//    }
//    else if(IR_SensorValue[1] < 50)
//    {
//      digitalWrite(motor[0], LOW);
//      digitalWrite(motor[1], HIGH);
//      digitalWrite(motor[2], HIGH);
//      digitalWrite(motor[3], LOW);
//      Serial.println(1);
//    }
//    else if(IR_SensorValue[2] < 50)
//    {
//      digitalWrite(motor[0], LOW);
//      digitalWrite(motor[1], LOW);
//      digitalWrite(motor[2], LOW);
//      digitalWrite(motor[3], LOW);
//      Serial.println(2);
//    }
//    else if(IR_SensorValue[3] < 50)
//    {
//      digitalWrite(motor[0], HIGH);
//      digitalWrite(motor[1], LOW);
//      digitalWrite(motor[2], LOW);
//      digitalWrite(motor[3], HIGH);
//      Serial.println(3);
//    }
//    if(IR_SensorValue[4] < 50)
//    {
//      digitalWrite(motor[0], LOW);
//      digitalWrite(motor[1], LOW);
//      digitalWrite(motor[2], HIGH);
//      digitalWrite(motor[3], HIGH);
//      Serial.println(4);
//    }
  // print the results to the serial monitor:

}
