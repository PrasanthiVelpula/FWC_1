int pinA = 2; // Connect A to digital pin 2
int pinB = 3; // Connect B to digital pin 3
int pinC = 4; // Connect C to digital pin 4
int pinF = 5; // Connect F to digital pin 5

void setup() {
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinC, INPUT);
  pinMode(pinF, OUTPUT);
}

void loop() {
  // Read the values of A, B, and C
  int A = digitalRead(pinA);
  int B = digitalRead(pinB);
  int C = digitalRead(pinC);
  
  // Evaluate the boolean expression
  int F = (A || B || !C) && (A || !B || !C) &&  (!A || B || !C) && (!A || !B || C) && (!A || !B || !C);
  
  // Set the value of F
  digitalWrite(pinF, F);
}
