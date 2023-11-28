#include <stdio.h>
#include <conio.h>

int main(){

    int rowSize, columnSize;

    printf("\n\nEnter the row size = ");
    scanf("%d", &rowSize);

    printf("Enter the column size = ");
    scanf("%d", &columnSize);

    int array[rowSize][columnSize], minOfRow[rowSize];

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
        minOfRow[i] = array[i][0];
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            if (array[i][j] < minOfRow[i])
            {
                minOfRow[i] = array[i][j];
            }
        }
    }

    printf("\n\n");
    for (int i = 0; i < rowSize; i++)
    {
        printf("\nThe minimum of row[%d] = %d", i, minOfRow[i]);
    }
    
    
    getch();
    return 0;
}