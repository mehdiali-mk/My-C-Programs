#include <stdio.h>
#include <conio.h>

int main(){

    int rowSize, columnSize, max = 0, min = 0;

    printf("\n\nEnter the row size = ");
    scanf("%d", &rowSize);

    printf("Enter the column size = ");
    scanf("%d", &columnSize);

    int array[rowSize][columnSize];

    printf("\n\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            printf("Enter the arrayElement[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    max = array[0][0];
    min = array[0][0];
    
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
    }
    
    printf("\n\nThe maximum element = %d\nThe minimum element = %d", max, min);

    
    getch();
    return 0;
}