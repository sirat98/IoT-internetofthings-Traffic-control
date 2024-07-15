void setup() {
  pinMode(2, OUTPUT);  // Red 1
  pinMode(3, OUTPUT);  // Yellow 1
  pinMode(4, OUTPUT);  // Green 1
  pinMode(5, OUTPUT);  // Red 2
  pinMode(6, OUTPUT);  // Yellow 2
  pinMode(7, OUTPUT);  // Green 2
  pinMode(8, OUTPUT);  // Red 3
  pinMode(9, OUTPUT);  // Yellow 3
  pinMode(10, OUTPUT); // Green 3
  pinMode(11, OUTPUT); // Red 4
  pinMode(12, OUTPUT); // Yellow 4
  pinMode(13, OUTPUT); // Green 4

}

void Right() {
  // Turn on the LEDs for the right turn signal
  digitalWrite(2, HIGH);  // Red 1
  digitalWrite(7, HIGH);  // Green 2
  digitalWrite(8, HIGH);  // Red 3
  digitalWrite(11, HIGH); // Red 4
  delay(2000);            // Wait for 2 seconds

  // Turn on the yellow LED for the right turn
  digitalWrite(6, HIGH);  // Yellow 2
  delay(1000);            // Wait for 1 second

  // Turn off the green LED for the right turn
  digitalWrite(7, LOW);   // Green 2
  delay(1000);            // Wait for 1 second

  // Turn off the yellow LED for the right turn
  digitalWrite(6, LOW);   // Yellow 2
  delay(1000);            // Wait for 1 second
}

void Straight() {
  // Prepare for the straight signal by turning off Red 3
  digitalWrite(8, LOW);   // Red 3
  
  // Turn on the LEDs for the straight signal
  digitalWrite(2, HIGH);  // Red 1
  digitalWrite(5, HIGH);  // Red 2
  digitalWrite(11, HIGH); // Red 4
  digitalWrite(10, HIGH); // Green 3
  delay(2000);            // Wait for 2 seconds

  // Turn off the green LED for the straight signal
  digitalWrite(10, LOW);  // Green 3
  delay(1000);            // Wait for 1 second

  // Turn on the yellow LED for the straight signal
  digitalWrite(9, HIGH);  // Yellow 3
  delay(1000);            // Wait for 1 second

  // Turn off the yellow LED for the straight signal
  digitalWrite(9, LOW);   // Yellow 3
  delay(1000);            // Wait for 1 second
}

void Left() {
  // Prepare for the left turn signal by turning off Red 4
  digitalWrite(11, LOW);  // Red 4
  
  // Turn on the LEDs for the left turn signal
  digitalWrite(2, HIGH);  // Red 1
  digitalWrite(5, HIGH);  // Red 2
  digitalWrite(8, HIGH);  // Red 3
  digitalWrite(13, HIGH); // Green 4
  delay(2000);            // Wait for 2 seconds

  // Turn off the green LED for the left turn signal
  digitalWrite(13, LOW);  // Green 4
  delay(1000);            // Wait for 1 second

  // Turn on the yellow LED for the left turn signal
  digitalWrite(12, HIGH); // Yellow 4
  delay(1000);            // Wait for 1 second

  // Turn off the yellow LED for the left turn signal
  digitalWrite(12, LOW);  // Yellow 4
  delay(1000);            // Wait for 1 second
}

void loop() {
  // Execute the turn signal sequences
  Right();
  Straight();
  Left();
}