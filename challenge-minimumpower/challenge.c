#include <stdio.h>

int main(void)
{
    int number;
    int shiftNumber;// = 1;


    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &number);
        if(number > 0)
        {
            shiftNumber = 1;
            while (shiftNumber < number)
            {
                shiftNumber = shiftNumber<<1;
            }
            printf("Answer: %d\n", shiftNumber);
            
        }


    } while (number != -1);

    return 0;
}