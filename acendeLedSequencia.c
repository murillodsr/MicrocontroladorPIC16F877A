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
    TRISD = 0b000000;
    PORTD = 0b111111;
    
    while(Murillo3172636){
        PORTD = 0b01111111;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b10111111;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b11011111;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b11101111;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b11110111;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b11111011;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
        PORTD = 0b11111101;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
         PORTD = 0b11111110;
        __delay_ms(500);
        PORTD = 0b11111111;
        __delay_ms(500);
    }
}