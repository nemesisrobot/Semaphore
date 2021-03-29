/*********************************************************
 *Author:Diego Silva
 *Date:29/03/2021
 *Description: Code to simulate semaphore of traffic
*********************************************************/

#define F_CPU 16000000 //define frequency of hardware
#define WAITTIME 1000 //wait for 1 second

//import library's
#include <avr/io.h>
#include <util/delay.h>

//prototype of functions
void led_red(void);
void led_green(void);
void led_yellow(void);


//main function
int main(){

    //direction output for digital ports arduino
    DDRB |= (1<<DDB5); //Digital port 13
    DDRB |= (1<<DDB4); //Digital port 12
    DDRB |= (1<<DDB3); //Digital port 11

    while(1){
        led_red();
        led_green();
        led_yellow();
    }

    return 0;
}

//turn-on and turn-off red led
void led_red(void){
    //set bit
    _delay_ms(WAITTIME);
    PORTB|=(1<<PORTB5);
    _delay_ms(WAITTIME);

    //clean bit
    PORTB&=~(1<<PORTB5);
    _delay_ms(WAITTIME);
}

//turn-on and turn-off led green
void led_green(void){
    //set bit
    _delay_ms(WAITTIME);
    PORTB|=(1<<PORTB4);
    _delay_ms(WAITTIME);

    //clean bit
    PORTB&=~(1<<PORTB4);
    _delay_ms(WAITTIME);
}


//turn-on and turn-off yellow led
void led_yellow(void){
    //set bit
    _delay_ms(WAITTIME);
    PORTB|=(1<<PORTB3);
    _delay_ms(WAITTIME);

    //clean bit
    PORTB&=~(1<<PORTB3);
    _delay_ms(WAITTIME);
}