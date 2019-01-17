
#include <pic16f1459.h>

void config_osc(void)
{
    OSCCONbits.IRCF3 = 1;       
    OSCCONbits.IRCF2 = 1;       // 1101 = 4 MHz int osc
    OSCCONbits.IRCF1 = 0;
    OSCCONbits.IRCF0 = 1;
    
     OSCCONbits.SCS1 = 1;       //internal osc block selected
}
