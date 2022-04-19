#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1415; 

int main(void)
{
    printf("\nCalculating Surface-area And Volume Of Sphere\n");
    float radius_of_sphere = 0.f;
    printf("\nEnter the radius of sphere: ");
    scanf("%f", &radius_of_sphere);

    printf("\nRADIUS %d SURFACE AREA = %d\n",(int)radius_of_sphere, (int)(4 * PI * radius_of_sphere * radius_of_sphere));
    // printf("\nSURFACE AREA = %.1f\n", (4 * PI * radius_of_sphere * radius_of_sphere));
    printf("\nRADIUS %.3f SURFACE AREA = %.3f\n",radius_of_sphere, (4 * PI * radius_of_sphere * radius_of_sphere));


    return EXIT_SUCCESS;
}