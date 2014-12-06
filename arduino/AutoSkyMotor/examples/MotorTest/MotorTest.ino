#include <AutoSkyMotor.h>

Motor motor(5, 6);

void setup() {
    motor.setSpeed(255);  //Full speed ahead, cap'n!
}

void loop() {
    Serial.println("Stopping motors for 1 second");
    motor.stop();
    delay(1000);
    Serial.println("Rotating clockwise for 1 second");
    start(true);
    delay(1000);
    Serial.println("Rotating counter-clockwise for 1 second");
    start(false);
    delay(1000);
}
