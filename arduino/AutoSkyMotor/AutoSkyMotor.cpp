/*
    Motor.h - library for motor control.
    Created by Ryan T. Mahler, 4 December 2014.
*/

#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int pin1, int pin2); {
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    _pin1 = pin1;
    _pin2 = pin2;
    _speed = 0;
}

void Motor::setSpeed(int speed) {
    Serial.print("Writing speed ");
    Serial.println(speed);
    _speed = speed;
}

void Motor::start(bool clockwise) {
    Serial.print("Moving in direction ");
    Serial.println(direction);
    if (clockwise) {
        digitalWrite(pin1, LOW);
        analogWrite(pin2, _speed);
    } else {
        analogWrite(pin1, _speed);
        digitalWrite(pin2, LOW);
    }
}

void Motor::stop() {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
}