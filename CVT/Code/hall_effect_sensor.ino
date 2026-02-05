// digital sensor setup
const int hallDigitalPin = 4; // pin for sensor reading
const int led1 = 2;           // pin for corresponding LED
int hallDigital;              // variable for sensor value


//analog sensor setup
const int hallAnalogPin = A0;  // pin for sensor reading
const int led2 = 8;            // pin for corresponding LED
int hallAnalog;                // variable fro sensor value


void setup(){   // put set up code here, to run it once
  // set pin modes
  pinmode(hallDigitalPin, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2, OUTPUT);
  // initialize serial communication
  serial.begin(9600);
}



void loop(){    // put main code here, to run repeatedly
  // read sensor values
  hallDigital = digitalRead(hallDigitalPin);
  hallAnalog = analogRead(hallAnalogPin);
  
  // print sensor values to serial monitor
  Serial.print("Digital: ");
  Serial.print(hallDigital);
  Serial.print(" Analog: ");
  Serial.println(hallAnalog);
  
  // turn LED1 on if hallDigital is high (magnet near), otherwise turn LED off
  if(hallDigital == HIGH){
    digitalWrite(led1,LOW);
  }
  else{
    digitalWrite(led1,HIGH);
  }

  // turn LED2 on if hellAnalog goes outside a certain range (magnet near), otherwise turn LED off
  if((hallAnalog > 520) || (hallAnalog < 490)){
    digitalWrite(led2,HIGH);
  }
  else{
    digitalWrite(led2,LOW);
  }
  }