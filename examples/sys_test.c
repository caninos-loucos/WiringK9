
#include <stdio.h>
#include <wiringPi.h>


int main(int argc, char **argv)
{
    wiringPiSetupSys();

    while(1)
    {
        digitalWrite(3, 1);
        printf(".....pin 3.........HIGH\n");
        delay (6000) ;		// mS

        digitalWrite(3, 0);
        printf(".....pin 3.........LOW\n");
        delay (6000) ;		// mS
    }
    
    return 0;
}
