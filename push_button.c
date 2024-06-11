/*
    Project name : Push button
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-push-button
*/

const int buttonPin = 2; // Pin connected to the push button
bool buttonState = false; // Variable to store the state of the button

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configure pin as input with pull-up resistor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button
  
  // Print the state of the button to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  delay(100); // Add a small delay for stability
}
