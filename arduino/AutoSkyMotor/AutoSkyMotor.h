/*
    Motor.h - library for motor control.
    Created by Ryan T. Mahler, 4 December 2014.
*/

#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor {
    public:
        Motor(int pin1, int pin2);
        void setSpeed(int speed);
        void start(bool clockwise);
        void stop();
    private:
        int _pin1;
        int _pin2;
        int _speed;
}

#endif
