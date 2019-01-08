#include "mbed.h"
#include "TextLCD.h"
#include "SETUP.hpp"


//#include <iostream>

//using namespace std;
//Serial pc(USBTX, USBRX);         //define serial namespace so the serial comms can be printed to
//TextLCD lcd(D0,D1,D4,D5,D6,D7); // rs, e, d4-d7

DigitalOut myled(LED1);
DigitalIn B1(PE_15);
DigitalIn B2(PE_14);
DigitalIn B3(PE_12);
DigitalIn B4(PE_10);

int main() {
    
  //pc.baud(9600);  

    printf("Putty test\n"); //request command in the terminal

  //lcd.printf("Hello World!\n");

    
    printf("Please input a number of rotations\n");

  // Spin the motor
    
    while(1) {
         myled = 1; // LED is ON
         wait(1);
        if(B1)
        {
        myled = 0; // LED is OFF
        printf("20 Turns\n");
        STEPPER_MOTOR_1.Rotate_Steps(22);
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Turning Complete\n");
          }
        else if(B2)
        {
        myled = 0; // LED is OFF
        printf("30 Turns\n");
        STEPPER_MOTOR_1.Rotate_Steps(23);
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Turning Complete\n");
          }  
         else if(B3)
        {
        myled = 0; // LED is OFF
        printf("40 Turns\n");
        STEPPER_MOTOR_1.Rotate_Steps(24);
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Turning Complete\n");
          }
         else if(B4)
        {
        myled = 0; // LED is OFF
        printf("50 Turns\n");
        STEPPER_MOTOR_1.Rotate_Steps(25);
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Turning Complete\n");
          }
        else {
            myled = 1; // LED is ON
            }
    }

}

