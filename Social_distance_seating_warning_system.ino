//mahra alneyadi 
//Social distance seating warning system


#define F_CPU 1600000UL
#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>

double analog_read, digital_conv,n;

int main(void){
  
  Serial.begin(9600);
  Serial.println("Social distancing seating ");
  
  DDRC=0x00;
  DDRB=0xFF;
  DDRD=0xFF;
  
  ADCSRA &= ~(1<<ADIE); //disable interrupt
  //ADCSRA |= (1<<ADPS2) | (1<<ADPS1); //prescalar 64
  ADCSRA |= (1<<ADEN); // enable AD
  ADMUX |=(1<<MUX0)|(1<<REFS0); 
  
  
  while(1){
    
  PORTD=0x00;
  PORTB=0x00;
  ADCSRA |= (1<<ADSC); //start coversion
  while (ADCSRA & (1<<ADSC)){}  //conversion process done
    
  analog_read=ADC; //reading analog 
  digital_conv=analog_read*1*5/1024;//digital converted value
  // Vo = Vcc ( R / (R + FSR) ) 
    
    if(digital_conv>2.5){ //means high then there is violation
       Serial.print("a violation occurs \n");
      PORTD ^=0x04;
      _delay_ms(250);
      PORTD=0x00;
      PORTB=0x08
    _delay_ms(250);
      
    }
    else if (digital_conv>=1 & digital_conv<=2.5){ //means light body could be object or anything other than human
       Serial.print("light force applied on the seat \n");
      PORTD ^=0x10; 
      _delay_ms(250);
      
    }
    else { // chair is empty
       Serial.print("chair is empty \n");
      PORTD = 0x80;
      
    }
    
    
    Serial.print("-----------------\n");
    
    Serial.print("Analog = \n");
     Serial.println(analog_read);
    
   

    Serial.print("digital = \n");
     Serial.println(digital_conv);
     
    _delay_ms(1000);
  }
  return 0;
}
