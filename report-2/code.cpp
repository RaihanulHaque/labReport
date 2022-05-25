// MTE-20 Group:2
// Defines pin numbers
const int trigpin = 12;
const int echopin = 10;
// Defines variable
float distance;
float duration;

void setup ()
{
  pinMode (trigpin, OUTPUT); // Sets the trigPin as an Output
  pinMode (echopin, INPUT); // Sets the echopin as an Input
  Serial.begin (9600); // Starts the serial communication
}

void loop ()
{
  digitalWrite (trigpin, LOW); //making sure its low from the beginning, clear previous command
  delay (2); // 2ms
  digitalWrite (trigpin, HIGH); // triggering trig pin
  delayMicroseconds(10); // 10us
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);// // Reads the echoPin, returns the sound wave travel time in microseconds
  distance = (duration*0.034)/2; // Calculate the math
  Serial.print("The Distance is = "); // Print the string
  Serial.print (distance);
  Serial.println("cm"); //print a extra newline
  delay(500);// loop runs twice in 1s
}
