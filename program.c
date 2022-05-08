#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

int main(void)
{
  
  int arr[5] = {1,2,3,4,5};
  int *address =  &arr[3];

  for(int index = 0; index < 5; index++)
  {
    printf("arr[%d] = %d\n", index, arr[index]);
  }

  printf("pointer number %d adress %p\n", *address, address);

    return EXIT_SUCCESS;
}