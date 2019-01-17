
#include <pic16f1459.h>

void setup_ports(void)
{
    ANSELA = 0x00;
    ANSELB = 0x00;
    ANSELC = 0x00;
    /*PORT A*/
    PORTAbits.RA4 = 0;
    /*PORT B*/
    TRISBbits.TRISB4 = 0;       // RB4 pin 11 a digital output
    TRISBbits.TRISB5 = 0;       // RB5 pin 12 a digital output
    /*PORT C*/
    TRISCbits.TRISC2 = 0;       // RC2 pin 14 a digital output
    TRISCbits.TRISC5 = 0;       // RC5 pin 5 a digital output
    PORTCbits.RC5 = 0;
    TRISCbits.TRISC6 = 0;       // RC6 pin 8 a digital output
    PORTCbits.RC6 = 0;
}
