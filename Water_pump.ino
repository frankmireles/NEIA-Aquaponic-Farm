// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);                    // turn the water pump on (HIGH is the voltage level)
  delay(secs(50));                          // wait for 50 seconds
  digitalWrite(2, LOW);                     // turn the water pump off by making the voltage LOW
  delay(hours(7)+mins(59)+secs(10));        // wait for 7 hours, 59 minutes and 10 seconds
}

// converts seconds into milliseconds
int secs (int secs) { 
  int msecs = secs * 1000;
  return msecs;
}

// converts minutes into milliseconds
int mins (int mins) {
  int msecs = mins * 60 * 1000;
  return msecs;
}

// converts hours into milliseconds
int hours (int hours) {
  int msecs = hours * 60 * 60 * 1000;
  return msecs;
}
