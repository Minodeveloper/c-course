#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    a = 0;
    b = a++ * 2 + 1;

    printf("After postincrement\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("\n");

    a = 0;
    b = ++a * 2 + 1;

    printf("After preincrement\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    
    return EXIT_SUCCESS;
}
