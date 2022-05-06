#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void floatDecomposer(float number, int * adddressDecimal, float * adddressFraction)
{
    *adddressDecimal = (int)number;
    *adddressFraction = number - (int)number;
}

int main(void)
{
    float userNumber;
    int decimal;
    float fraction;

    printf("\n");
    printf("Enter a float: ");
    scanf("%f", &userNumber);

    floatDecomposer(userNumber, &decimal, &fraction);
    printf("\n");

    printf("DECIMAL PART: %d  FRACTIONAL PART: %.3f", decimal, fraction);
    printf("\n");

    return EXIT_SUCCESS;
}