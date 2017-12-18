
#include <avr/io.h>
#include <util/delay.h>

void setDDRB(int value){
    DDRB = value;
}

void setPORTB(int value){
    PORTB = value;
}

void delay(int ms){
   for (int i = 0; i < ms; i++){
      _delay_ms(1);
   }
}
