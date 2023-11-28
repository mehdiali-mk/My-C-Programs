#include <stdio.h>
#include <conio.h>

#define ROWSIZE 2
#define COLUMNSIZE 3

void twoMatrix(int array1[ROWSIZE][COLUMNSIZE], int array2[COLUMNSIZE][ROWSIZE], int multiplyMatrix[ROWSIZE][COLUMNSIZE]);

int main()
{

    int array1[ROWSIZE][COLUMNSIZE], array2[COLUMNSIZE][ROWSIZE], multiplyMatrix[ROWSIZE][COLUMNSIZE];
    printf("\n\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("Enter the array1[%d][%d] = ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < COLUMNSIZE; i++)
    {
        for (int j = 0; j < ROWSIZE; j++)
        {
            printf("Enter the array2[%d][%d] = ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    twoMatrix(array1, array2, multiplyMatrix);

    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("\nmultiplyMatrix[%d][%d] = %d", i, j, multiplyMatrix[i][j]);
        }
    }

    printf("\n\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for (int i = 0; i < COLUMNSIZE; i++)
    {
        for (int j = 0; j < ROWSIZE; j++)
        {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("%d\t", multiplyMatrix[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}

void twoMatrix(int array1[ROWSIZE][COLUMNSIZE], int array2[COLUMNSIZE][ROWSIZE], int multiplyMatrix[ROWSIZE][COLUMNSIZE])
{
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            multiplyMatrix[i][j] = array1[i][j] * array2[j][i];
        }
    }
}