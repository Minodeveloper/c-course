#include <stdio.h>
#include <stdlib.h>

enum Thrust_Level
{
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20
};


int main(void)
{
    enum Thrust_Level rocket_thrust = NONE;
    printf("Spaceship is ready to go! THRUST: %2d \n", rocket_thrust);

    rocket_thrust = MAXIMUM;
    printf("Spaceship taking off! THRUST: %2d\n", rocket_thrust);

    rocket_thrust = MEDIUM;
    printf("Spaceship enters ionosphere! THRUST: %2d\n", rocket_thrust);

    rocket_thrust = LOW;
    printf("Spaceship probes into deep space! THRUST: %2d\n", rocket_thrust);


    return EXIT_SUCCESS;
}