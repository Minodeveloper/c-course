#include <stdio.h>

int main(void)
{
     int number;
     int shiftNumber = 1;
     printf("\n");
     printf("Enter a number:");
     scanf("%d", &number);

     while (shiftNumber < number)
     {
         if(number < 0 || shiftNumber >= number ) break;
        shiftNumber = shiftNumber<<1;
        
     }
     printf("\n");
     printf("ANSWER: %d\n", shiftNumber);


    return 0;
}