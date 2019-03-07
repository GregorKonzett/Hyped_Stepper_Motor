#define STEPS 400

int directionPin = 22;
int stepperPin = 24;
int activatePin = 23;

bool step = false;
float period = 0;

void setup() {

  //Set pins to output
  pinMode(directionPin,OUTPUT);
  pinMode(stepperPin,OUTPUT);
  pinMode(activatePin,OUTPUT);

  //Write HIGH to Pin 23 to activate the driver
  digitalWrite(activatePin,HIGH);

  //LOW -> Clockwise, HIGH -> Counterclockwise
  digitalWrite(directionPin,LOW);

  //Needed to apply the direction before the first step is sent
  delay(1000);
  
  //Period calculation based on rpm
  int rpm = 30;
  float frequency = rpm * STEPS / 60;
  period = 1/frequency;
    
}


void loop() {

  //Hold stepper motor
  digitalWrite(0);
}
