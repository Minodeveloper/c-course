#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void printPrimeArray(int array[])
{
    int loopindex = 0;
    while( array[loopindex] != 0) 
    {
        // printf("storageprime[%d] = %d\t", loopindex, array[loopindex]);
        printf("%d\t", array[loopindex]);
        loopindex++;
    }
    printf("\nstored %d Prime Numbers.\n", loopindex);
}

bool primeCheck(int primeNumber)
{
    int incrementor = 0;
    for(int index  = 2; index < primeNumber; index++)
    {
        if((primeNumber % index) == 0)
        {
            incrementor++;
        }
    }

    return (incrementor == 0)?true:false;
}

void primeProducer(int userNumber, int  storageAddress[])
{
    int storageIndex = 0;
    for (int index = userNumber; index != 1; index--)
    {
        if(primeCheck(index))
        {
            storageAddress[storageIndex] = index;
            storageIndex++;
        }
        
    }
}

int main(void)
{
    int storagePrime[100000]= {0};//array to store prime number
    
    int userNumber;
    printf("Enter a number:");
    scanf("%d", &userNumber);
    
    

    primeProducer(userNumber, storagePrime);
    
    printPrimeArray(storagePrime);




    return EXIT_SUCCESS;
}