#include <stdio.h>
#include <conio.h>

int main(){

    int rowSize, columnSize, sum = 0;
    float average = 0;

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
    
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            sum = sum + array[i][j];
        }       
    }

    average = sum / (float) (rowSize * columnSize);

    printf("\n\nThe sum = %d\nThe average = %f", sum, average);
    
    getch();
    return 0;
}