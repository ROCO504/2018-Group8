#include "mbed.h"
#include "TextLCD.h"
#include "SETUP.hpp"

//#include <iostream>
//using namespace std;
//Serial pc(USBTX, USBRX);         //Define serial namespace so the serial comms can be printed to
//TextLCD lcd(D0,D1,D4,D5,D6,D7); // rs, e, d4-d7

int counter;
DigitalOut myled(LED1);
DigitalIn B1(PE_15);
DigitalIn B2(PE_14);
DigitalIn B3(PE_12);
DigitalIn B4(PE_10);

PwmOut M1(PE_8); 

//functions
void StartUp(){
    M1.period(0.01); // set PWM period to 10 ms
    M1=1; // set duty cycle to 100%
    wait(6);
    M1=0;
    return;
    }
void Ending(){
    M1.period(0.01); // set PWM period to 10 ms
    M1=0.5; // set duty cycle to 50%
    wait(3);
    M1=0;
    return;
    }
void Constant(){
    M1=1; // set duty cycle to 100%
    wait(6);
    M1=0.75; //75%
    wait(3);
    M1=0;
    wait(6);
    }
void LongTest(){
    M1=1; // set duty cycle to 100%
    wait(9);
    M1 = 0;
    wait(6);
    }

void Holding(){
    M1.period(0.01); // set PWM period to 10 ms
    M1=0.2; // set duty cycle to 20%
    wait(3);
    M1=0;
    return;
    }
void Cooling(){
    M1.period(0.01);
    M1=0; // set duty cycle to 0%
    wait(5);
    return;
}
void Training(){
    counter = 0;
for ( ; counter < 6; counter++) { //
    M1.period(0.01); // set PWM period to 10 ms
    M1=1; // set duty cycle to 100%
    wait(2);
    M1=0;
    wait(6);
    }
    M1=1; // set duty cycle to 100%
    wait(6);
    M1=0.5; // set duty cycle to 50%
    wait(3);
    M1=0; // set duty cycle to 0%
    wait(5);
    return;
    }

int main() {
    
  //  pc.baud(9600);  
    printf("Putty test\n");                    //Request command in the terminal
 //   lcd.printf("Hello World!\n");
    printf("Please input a number of rotations\n");

    while(1) {
         myled = 1; // LED is ON
         wait(1);
        if(B1)
        {
        myled = 0; // LED is OFF
        printf("60 Turns\n");
        STEPPER_MOTOR_1.Rotate_Steps(60);
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Coiling Complete\n");
          }
        else if(B2)
        {
        myled = 0; // LED is OFF
        printf("Training\n");
        Training();
        myled = 1; // LED is ON
        wait(1); // 
        myled = 0; // LED is OFF
        wait(1); // 1 sec
        printf("Training Complete\n");
          }  
         else if(B3)
        {
        myled = 0; // LED is OFF
        printf("Constant\n");
        Constant();
        printf("Constant Complete\n");
          }
         else if(B4)
        {
        myled = 0; // LED is OFF
        printf("LongTest\n");
        LongTest();
        printf("LongTest Complete\n");
          }
        else {
            myled = 1; // LED is ON
            }
    }

}

