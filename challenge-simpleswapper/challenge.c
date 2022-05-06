#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void swapper(int * const address1, int * const address2)
{
    int tempVariable = *address1;
    *address1 = *address2;
    *address2 = tempVariable;


}


int main(void)
{
    int number1 = 5, number2 = 7;
    printf("\n");
    printf("BEFORE\n");
    printf("NUMBER 1 = %5d\n", number1);
    printf("NUMBER 2 = %5d\n", number2);

    swapper(&number1, &number2);
    printf("\n");
    printf("AFTER\n");
    printf("NUMBER 1 = %5d\n", number1);
    printf("NUMBER 2 = %5d\n", number2);




    return EXIT_SUCCESS;
}