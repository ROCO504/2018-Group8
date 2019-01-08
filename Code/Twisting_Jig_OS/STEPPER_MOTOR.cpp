#include "mbed.h"           //Include the mbed libraries
#include "STEPPER_MOTOR.hpp"          //Include the header file, this acts like a series of forward declarations

//Constructor
STEPPER_MOTOR::STEPPER_MOTOR(PinName N1, PinName N2, PinName N3, PinName N4) : pin1(N1),pin2(N2),pin3(N3),pin4(N4)
{
     _dir = true;
    _step = 0;    
}

STEPPER_MOTOR::~STEPPER_MOTOR(){}   //Destructor

void STEPPER_MOTOR::Rotate_Steps(int Steps)
{
         #define STIME    1000
         
         Steps = Steps*50;
         //int correctionfactor;
         //int timeofturn=correctinfactor*speed;
         
         int mystep=0;
         printf("START!!! step value is=%d\n\r",mystep);
         for(int x =0 ; x <= Steps; x++)
         {
             printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 0;
                   this->pin2 = 1;
                   this->pin3 = 0;
                   this->pin4 = 1;
                   mystep=1;
                   wait_us(666);
              printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 0;
                   this->pin2 = 1;
                   this->pin3 = 1;
                   this->pin4 = 0; 
                   mystep=2;
                   wait_us(666);
              printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 1;
                   this->pin2 = 0;
                   this->pin3 = 1;
                   this->pin4 = 0;
                   mystep=3;
                   wait_us(666);
              printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 1;
                   this->pin2 = 0;
                   this->pin3 = 0;
                   this->pin4 = 1;
                   mystep=4;
                   wait_us(666);;
 /*             printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 0;
                   this->pin2 = 1;
                   this->pin3 = 0;
                   this->pin4 = 0; 
                   mystep=5;
                   wait_ms(0.6);
              printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 1;
                   this->pin2 = 1;
                   this->pin3 = 0;
                   this->pin4 = 0;
                   mystep=6;
                   wait_ms(0.6);
              printf("FOR LOOP! step value is=%d  %d\n\r",mystep,x);
                   this->pin1 = 1;
                   this->pin2 = 0;
                   this->pin3 = 0;
                   this->pin4 = 0;
                   mystep=7;
                   wait_ms(0.6);
             
                   this->pin1 = 1;
                   this->pin2 = 0;
                   this->pin3 = 0;
                   this->pin4 = 1;
                   mystep=0;
                   wait_ms(0.6);

                   this->pin1 = 0;
                   this->pin2 = 0;
                   this->pin3 = 0;
                   this->pin4 = 0;
                   mystep=0;
                   wait_ms(0.6);*/
            }
}
                   
                   /*
             switch(mystep){ 
               case 0:{
                  
                break;  
               case 1:{
                  
               break;  
               case 2: 
                   
               break;  
               case 3: 
                   
               break;  
               case 4: 
                 
               break;  
               case 5: 
                   
               break;  
                 case 6: 
                 
               break;  
               case 7: 
                  
               break;  
               default: 
               
               break;  
             } 
             
             if(_dir){ 
               _step++; 
             }else{ 
               _step--; 
             } 
             if(_step>7){ 
               _step=0; 
             } 
             if(_step<0){ 
               _step=7; 
             } 
             */
             //wait_ms(1);
    

void STEPPER_MOTOR::Permanent_Rotate_clock_wise()
{
    switch(_step){ 
       case 0:
           pin1 = 0;
           pin2 = 0;
           pin3 = 0;
           pin4 = 1;
       break;  
       case 1:
           pin1 = 0;
           pin2 = 0;
           pin3 = 1;
           pin4 = 1; 
       break;  
       case 2: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 1;
           pin4 = 0;
       break;  
       case 3: 
           pin1 = 0;
           pin2 = 1;
           pin3 = 1;
           pin4 = 0;
       break;  
       case 4: 
           pin1 = 0;
           pin2 = 1;
           pin3 = 0;
           pin4 = 0; 
       break;  
       case 5: 
           pin1 = 1;
           pin2 = 1;
           pin3 = 0;
           pin4 = 0;
       break;  
         case 6: 
           pin1 = 1;
           pin2 = 0;
           pin3 = 0;
           pin4 = 0;
       break;  
       case 7: 
           pin1 = 1;
           pin2 = 0;
           pin3 = 0;
           pin4 = 1;
       break;  
       default: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 0;
           pin4 = 0;
       break;  
     } 
     if(_dir){ 
       _step++; 
     }else{ 
       _step--; 
     } 
     if(_step>7){ 
       _step=0; 
     } 
     if(_step<0){ 
       _step=7; 
     } 
} 

void STEPPER_MOTOR::Permanent_Rotate_anti_clock_wise()
{

        //Rotate
    switch(_step){ 
       case 0:
           pin1 = 1;
           pin2 = 0;
           pin3 = 0;
           pin4 = 1;
       break;  
       case 1:
           pin1 = 1;
           pin2 = 0;
           pin3 = 0;
           pin4 = 0; 
       break;  
       case 2: 
           pin1 = 1;
           pin2 = 1;
           pin3 = 0;
           pin4 = 0;
       break;  
       case 3: 
           pin1 = 0;
           pin2 = 1;
           pin3 = 0;
           pin4 = 0;
       break;  
       case 4: 
           pin1 = 0;
           pin2 = 1;
           pin3 = 1;
           pin4 = 0; 
       break;  
       case 5: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 1;
           pin4 = 0;
       break;  
         case 6: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 1;
           pin4 = 1;
       break;  
       case 7: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 0;
           pin4 = 1;
       break;  
       default: 
           pin1 = 0;
           pin2 = 0;
           pin3 = 0;
           pin4 = 0;
       break;  
     } 
     if(_dir){ 
       _step++; 
     }else{ 
       _step--; 
     } 
     if(_step>7){ 
       _step=0; 
     } 
     if(_step<0){ 
       _step=7; 
     } 
     //wait_ms(1); 
} 
 