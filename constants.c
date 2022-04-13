#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int moon_landing = 1969;
    const double speed_of_light = 299792458.;
    const double pi = 3.142;
    const unsigned hexa_dead = 0xDEADU;
    const unsigned hexa_secret = 51966U;

    printf("Moon landing:\n %10d\n %010d\n\n", moon_landing, moon_landing);
    printf("Speed of light:\n %.0f\n %.3e\n\n", speed_of_light, speed_of_light);
    printf("Pi:\n %.2f\n %+.1e\n\n", pi, pi);
    printf("Hexa dead:\n 0x%X\n %6u\n\n", hexa_dead, hexa_dead);
    printf("Hexa secret:\n %x\n\n", hexa_secret);



    return EXIT_SUCCESS;
}