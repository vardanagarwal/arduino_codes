const int IRPin[] = {A0,A1,A2,A3,A4};  // Analog input pin that the receiver is attached to
int IR_SensorValue[] = {0,0,0,0,0}; // value read from the receiver
const int LDRPin = A5;
int LDR_SensorValue = 0;
int LEDPins[]={2,3,4,5,6,7,8,9,10,11,12};
int i,j,k;
void setup() {
    // put your setup code here, to run once:
    // initialize serial communications at 9600 bps:
    Serial.begin(9600);
    //initialize the indicator LED:
    for(i=0;i<11;i++)
    pinMode(LEDPins[i], OUTPUT);
    for(i=0;i<5;i++)
    pinMode(IRPin[i], INPUT);
    pinMode(LDRPin, INPUT);
}

void loop() 
{
    // put your main code here, to run repeatedly:
    for(i=0;i<5;i++)
      IR_SensorValue[i] = analogRead(IRPin[i]);
    LDR_SensorValue = analogRead(LDRPin);
    Serial.println(LDR_SensorValue);
  // print the results to the serial monitor:
 
  //the threshold found fron analog In Out program was when object is detected, the sensor value is below 100
  //set the threshold whihc you get
  //the threshold varies for different sets of emitter-receiver pairs
 
   if(LDR_SensorValue>500)
   {
        digitalWrite(LEDPins[10], HIGH);
        if(IR_SensorValue[4]<100)
        {
          Serial.println("Object detected by 5");
          for(i=8;i<10;i++)
            digitalWrite(LEDPins[i], HIGH);
        }
        else
          for(i=8;i<10;i++)
            digitalWrite(LEDPins[i], LOW);
            
        if(IR_SensorValue[3]<100)
        {
          Serial.println("Object detected by 4");
          for(i=6;i<8;i++)
            digitalWrite(LEDPins[i], HIGH);
        }
        else
          for(i=6;i<8;i++)
            digitalWrite(LEDPins[i], LOW);
            
        if(IR_SensorValue[2]<100)
        {
          Serial.println("Object detected by 3");
          for(i=4;i<6;i++)
            digitalWrite(LEDPins[i], HIGH);
        }
        else
          for(i=4;i<6;i++)
            digitalWrite(LEDPins[i], LOW);

        if(IR_SensorValue[1]<100)
        {
          Serial.println("Object detected by 2");
          for(i=2;i<4;i++)
            digitalWrite(LEDPins[i], HIGH);
        }
        else
          for(i=2;i<4;i++)
            digitalWrite(LEDPins[i], LOW);

       if(IR_SensorValue[0]<100)
        {
          Serial.println("Object detected by 1");
          for(i=0;i<2;i++)
            digitalWrite(LEDPins[i], HIGH);
        }
        else
          for(i=0;i<2;i++)
            digitalWrite(LEDPins[i], LOW);
  }
  else
  {
      for(i=0;i<10;i++)
      {
          digitalWrite(LEDPins[i], LOW);
      }
      Serial.println("\nEnough light");
  }  
}
/*for(i=0;i<3;i++)
        {
            if(IR_SensorValue[i] < 100)
            {
                Serial.println("\nObject Detected");
                //checks if object is there or not
                for(j=i*2;j<i*2+3;j++)
                {
                    digitalWrite(LEDPins[j], HIGH);
                    delay(100);
                }
                while(i==2 || (i!=2 && IR_SensorValue[i+1]>100))
                {
                    for(k=0;k<2;k++)
                    Serial.println(IR_SensorValue[k]);
                }
                for(j=i*2;j<i*2+2;j++)
                {
                    digitalWrite(LEDPins[j], LOW);
                    delay(100);
                }
            }
        }*/
       
