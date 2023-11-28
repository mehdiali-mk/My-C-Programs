#include <stdio.h>
#include <conio.h>

void countEvenOdd(int [], int, int *, int *);

int main(){

    int arraySize, oddCount = 0, evenCount = 0;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    countEvenOdd(array, arraySize, &oddCount, &evenCount);

    printf("\n\nThe even numbers = %d\nThe odd numbers = %d", evenCount, oddCount);
    
    getch();
    return 0;
}

void countEvenOdd(int array[], int arraySize, int *oddCount, int *evenCount)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] % 2 == 0)
        {
            *evenCount+=1;
        }
        else
        {
            *oddCount+=1;
        }
        
    }
    
}