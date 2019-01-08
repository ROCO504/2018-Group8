/*
This is the stepper motor class and is used to control all of the motors individually
*/

#ifndef STEPPER_MOTOR_HPP//Header Guards Prevents Multiple includes
#define STEPPER_MOTOR_HPP

//Libraries and header includes
#include "mbed.h"
#include "rtos.h"
class STEPPER_MOTOR                       //This creates a class called Led
{ 
public: 
 
    STEPPER_MOTOR(PinName N1, PinName N2, PinName N3, PinName N4); //Constructor
    ~STEPPER_MOTOR();                                 //Destructor
    void Permanent_Rotate();
    void Permanent_Rotate_clock_wise();
    void Permanent_Rotate_anti_clock_wise();
    void Rotate_90();
    void Rotate_Steps(int Steps);
private:    
    //Private member variables to prevent them being accessed externally 
    //Data Pins
    bool _dir;
    int _step;
    int _Number_of_steps;
    DigitalOut pin1;         //Pin 1
    DigitalOut pin2;         //Pin 2
    DigitalOut pin3;         //Pin 3  
    DigitalOut pin4;         //Pin 4

};
#endif//STEPPER_MOTOR_HPP