// MTE-20
// Controller code 180 degree rotation
#include <Servo.h> // Include the Servo library
Servo servo; // Create a servo object

void setup ()
{
  // Attached the servo to the used pin number 
  servo.attach(10);
}
void loop ()
{
  servo.write(0); // Make servo go to 0 degrees 
  delay (1000);
  servo.write(90); // Make servo go to 90 degrees 
  delay (1000);
  servo.write(180); // Make servo go to 180 degrees 
  delay (1000);
}
