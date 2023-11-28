#include <stdio.h>
#include <conio.h>

void sumEvenOdd(int [], int, int *, int *);

int main(){

    int arraySize, oddSum = 0, evenSum = 0;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    sumEvenOdd(array, arraySize, &oddSum, &evenSum);

    printf("\n\nThe sum of even numbers = %d\nThe sum of odd numbers = %d", evenSum, oddSum);
    
    getch();
    return 0;
}

void sumEvenOdd(int array[], int arraySize, int *oddSum, int *evenSum)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] % 2 == 0)
        {
            *evenSum+=array[i];
        }
        else
        {
            *oddSum+=array[i];
        }
        
    }
    
}