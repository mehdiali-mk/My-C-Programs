#include <stdio.h>
#include <conio.h>

#define ROWSIZE 2
#define COLUMNSIZE 2

void addTwoMatrix(int [ROWSIZE][COLUMNSIZE], int [ROWSIZE][COLUMNSIZE], int [ROWSIZE][COLUMNSIZE]);

int main(){

    int array1[ROWSIZE][COLUMNSIZE], array2[ROWSIZE][COLUMNSIZE], sumArray[ROWSIZE][COLUMNSIZE];

    printf("\n\nArray1\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("Enter the array1[%d][%d] = ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("\n\nArray2\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("Enter the array2[%d][%d] = ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    
    addTwoMatrix(array1,array2,sumArray);

    printf("\n\nThe sum of array1 and array2:\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            printf("\nsumArray[%d][%d] = %d", i, j, sumArray[i][j]);
        }
    }
    

    getch();
    return 0;
}

void addTwoMatrix(int array1[ROWSIZE][COLUMNSIZE], int array2[ROWSIZE][COLUMNSIZE], int sumArray[ROWSIZE][COLUMNSIZE]){

    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLUMNSIZE; j++)
        {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
}