#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void generateMatrix(int rowNumber, int columnNumber, int upperLimit)
{
    if((rowNumber<=10 && rowNumber >1) && (columnNumber<=10 && columnNumber >1) )
    {
    int matrix[rowNumber][columnNumber];
    for (int i = 0; i < rowNumber; i++)
    {
        for(int j = 0; j<columnNumber; j++)
        {
            matrix[i][j] = (rand()%upperLimit);
            
            printf("%4d", matrix[i][j]);//NORMAL MATRIX
            
            

        }
        printf("\n");
        
    }
    }
    else{
        printf("INVALID ROW OR COLUMN NUMBER(1 - 10)\n");
        
    }
}

int main(void)
{
    int rowNumber, columnNumber, upperLimit;
    printf("\n");
    printf("--------MATRIX--------");
    printf("\n");
    printf("ENTER NUMBER OF ROWS (1 - 10):\t");
    scanf("%d", &rowNumber);
    printf("ENTER NUMBER OF COLUMNS (1 - 10):\t");
    scanf("%d", &columnNumber);
    printf("ENTER MAX-VALUE IN MATRIX:\t");
    scanf("%d", &upperLimit);

    printf("\n");
    printf("----NORMAL------\n");
    generateMatrix(rowNumber,columnNumber, upperLimit);
    printf("\n");
    printf("----TRANSPOSE----\n");
    generateMatrix(columnNumber,rowNumber, upperLimit);







    return EXIT_SUCCESS;
}