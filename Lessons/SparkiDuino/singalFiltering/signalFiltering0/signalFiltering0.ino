#include <Sparki.h> // include the sparki library

void setup()
{
}

void loop()
{
    sparki.clearLCD();

    int cm = sparki.ping(); // measures the distance with Sparki's eyes

    sparki.print("Distance: "); 
    sparki.print(cm); // tells the distance to the computer
    sparki.println(" cm"); 

    if(cm != -1) // make sure its not too close or too far
    { 
        if(cm < 10) // if the distance measured is less than 10 centimeters
        {
            sparki.beep(); // beep!
        }
    }

    sparki.updateLCD();
    delay(50); // wait 0.1 seconds (100 milliseconds)
}
