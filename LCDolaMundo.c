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
#include "lcd.h"

void main(){
    unsigned char Murillo3172636 = 1;
    
    LCD_init();
    LCD_limpa();
    LCD_escreve('O');
    LCD_escreve('L');
    LCD_escreve('A');
    LCD_escreve(' ');
    LCD_escreve('M');
    LCD_escreve('U');
    LCD_escreve('N');
    LCD_escreve('D');
    LCD_escreve('O');
    LCD_escreve('!');
    
    while(Murillo3172636){
        
    }
}