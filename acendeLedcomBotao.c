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
    TRISB = 0b00001111;// Entrada de dados -> Botão
    TRISD = 0b00000000;// Saida de dados -> Leds
    PORTD = 0b11111111;
    OPTION_REG = 0;// Habilita os registradores de pull-up do PORTB
    
    while(Murillo3172636){
        if(RB0 == 0){
        //LED 1 e 7 ACENDEM
        PORTD = 0b01111101;
        }
        if(RB2 == 0){
        //LED 2, 3, 4, 5, 6 e 8 ACENDEM
        PORTD = 0b10000010;
        }
        PORTD = 0b11111111;
    }
}