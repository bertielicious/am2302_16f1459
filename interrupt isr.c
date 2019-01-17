
#include <pic16f1459.h>
#include "config.h"
#include "main.h"
#include <stdio.h>

void interrupt isr (void)
{
   /* if(INTCONbits.TMR0IF == 1)
    {
        if(overflow >=123)      // 2 sec refresh of sensor reading
        {
            //read the sensor data
            PORTCbits.RC5 = ~PORTCbits.RC5;
            
            overflow = 0;
        }
        overflow++;
        INTCONbits.TMR0IF = 0;
    }*/
    
    if(PIR1bits.TMR1IF == 1)
    {  
        TMR1L = 0x00;
        TMR1H = 0x00;  
        RC6 = ~RC6;
        PIR1bits.TMR1IF = 0;
    }
}
