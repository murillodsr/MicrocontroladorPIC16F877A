#define _XTAL_FREQ 4000000

#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

#include <xc.h>
#include <pic16f877a.h>

void main(){
    unsigned char Murillo3172636 = 1;
    unsigned char aux;
    TRISB = 0b00001111;
    TRISD = 0b00000000;
    PORTD = 0b11111111;
    aux = 0b11111111;
    OPTION_REG = 0;
    
    while(Murillo3172636){
        __delay_ms(200);
        if(RB1 == 0){
            aux = aux ^ 0b01000100; 
        }
        PORTD = aux;
    }
}