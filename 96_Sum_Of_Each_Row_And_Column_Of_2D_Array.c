#include <stdio.h>
#include <conio.h>

int main(){

    int rowSize, columnSize;

    printf("\n\nEnter the row size = ");
    scanf("%d", &rowSize);

    printf("Enter the column size = ");
    scanf("%d", &columnSize);

    int array[rowSize][columnSize], sumOfRow[rowSize], sumOfColumn[columnSize];

    printf("\n\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            printf("Enter the arrayElement[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int i = 0; i < rowSize; i++)
    {
        sumOfRow[i] = 0;
    }
    for (int i = 0; i < columnSize; i++)
    {
        sumOfColumn[i] = 0;
    }
    
     

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            sumOfColumn[j] = sumOfColumn[j] + array[i][j];
            sumOfRow[i] = sumOfRow[i] + array[i][j];
        }
    }
    
    printf("\n\n");
    for (int i = 0; i < rowSize; i++)
    {
        printf("\nsumOfRow[%d] = %d", i, sumOfRow[i]);
    }

    for (int i = 0; i < columnSize; i++)
    {
        printf("\nsumOfColumn[%d] = %d", i, sumOfColumn[i]);
    }
    
    
    getch();
    return 0;
}