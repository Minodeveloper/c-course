#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void findOccurances(char array[], char tofind, long size )
{
  printf("%s\n", array);
  for(int i = 0; i < size; i++)
  {
    if(array[i] == tofind)
    {
      printf("^");

    }
    else{
      printf(" ");
    }
  }
  printf("\n");
}

int main(void)
{
  char word[] = "I love programming!\0";
  // printf("%s\n", word);
  findOccurances(word, 'o', sizeof(word));
  findOccurances(word, 'm', sizeof(word));
  findOccurances(word, 'r', sizeof(word));
  findOccurances(word, 'g', sizeof(word));
  
  

    return EXIT_SUCCESS;
}