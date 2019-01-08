/*
Setup file for the main
*/

#ifndef SETUP_HPP//Header Guards Prevents Multiple includes
#define SETUP_HPP

//Libraries and header includes
#include "rtos.h"

#include "STEPPER_MOTOR.hpp"

//Time definitions

static STEPPER_MOTOR STEPPER_MOTOR_1(D15,D14,D13,D12);
#endif 