// defines pins numbers
// The maximum in the x direction is (6500)
#define DRAW 0
#define INITIALISE 1
#define LEFT LOW
#define RIGHT HIGH
const int limit_swich = 12;
const int stepPin = 7; // define pin 7
const int dirPin = 9; // define pine 9

int state = INITIALISE;
//int dir =
void set_x() {
  digitalWrite(dirPin, LEFT);
  while (digitalRead(limit_swich) == HIGH) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

}
void motor_x(int steps, int dir) {

  digitalWrite(dirPin, dir);
  for (int x = 0; x < steps; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

}


void setup()
{
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  set_x(); // anitilise it to zero
  motor_x(6500, RIGHT);
  while (1);
  // motor_x(2000, LOW);
  //motor_x(500, HIGH);
  //motor_x(1000, LOW);
}

void loop() {
  switch (state) {
    case INITIALISE:
      break;
    case DRAW:
      break;

  }
}



