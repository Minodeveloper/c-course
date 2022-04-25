#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int number = 0;
    bool result ;
    printf("\n\t\033[1;32mEVEN\033[0m \033[1;31mODD\033[0m CHALLENGE\n\n");

    printf("ENTER A POSITIVE NUMBER: ");
    scanf("%d", &number);

    if(number >= 0)
    {
        ((number % 2) == 0)?result = true : (result = false);
        printf("\t\t\t\t\t\t");
        (result == true)? printf("\033[1;32mEVEN\033[0m\n\n"):printf("\033[1;31mODD\033[0m\n\n");

    }else
    {
        printf("\n---xxx--xx--\033[1;31mNEGATIVE\033[0m NUMBER INPUT--xx--xxx---\n\n");

    }





    return 0;
}