#ifndef Motor_h
#define Motor_h

#include "../TCA9534-master/TCA9534.h"

class Motor{
public:

    Motor(uint8_t _IN1, uint8_t _IN2, uint8_t _pwmPin, TCA9534* _motorExpander);

    /*
    @param Speed from 0-255
    */
    void setSpeed(uint8_t _speed);
    void processOutput();
private:
    uint8_t speed; //0-255

    TCA9534* motorExpander;
    uint8_t IN1Pin;
    uint8_t IN2Pin;
    uint8_t pwmPin;
};


#endif