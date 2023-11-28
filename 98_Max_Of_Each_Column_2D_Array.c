#include <stdio.h>
#include <conio.h>

int main(){

    int rowSize, columnSize;

    printf("\n\nEnter the row size = ");
    scanf("%d", &rowSize);

    printf("Enter the column size = ");
    scanf("%d", &columnSize);

    int array[rowSize][columnSize], maxOfColumn[columnSize];

    printf("\n\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            printf("Enter the arrayElement[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int i = 0; i < columnSize; i++)
    {
        maxOfColumn[i] = array[0][i];
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            if (array[i][j] > maxOfColumn[j])
            {
                maxOfColumn[j] = array[i][j];
            }
        }
    }

    printf("\n\n");
    for (int i = 0; i < columnSize; i++)
    {
        printf("\nThe maximum of column[%d] = %d", i, maxOfColumn[i]);
    }
    
    
    getch();
    return 0;
}