#define STEPS 400

#define DIRECTIONPIN 7
#define STEPPERPIN 8

bool step = false;
int period = 0;

void setup() {
  pinMode(DIRECTIONPIN,OUTPUT);
  pinMode(STEPPERPIN,OUTPUT);

  digitalWrite(DIRECTIONPIN,LOW);

  //Period calculation based on rpm
  int rpm = 20;
  int frequency = rpm * STEPS / 60;
  period = 1/frequency;
    
}

void loop() {
  digitalWrite(STEPPERPIN,step);
  step=!step;

  //Since step only happens when going from HIGH to LOW
  //Should have duty cycle of 50%
  delay(period/2);
}
