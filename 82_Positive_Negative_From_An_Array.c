#include <stdio.h>
#include <conio.h>

void countPositiveNegative(int [], int, int *, int *);

int main(){

    int arraySize, positiveCount = 0, negativeCount = 0;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    countPositiveNegative(array, arraySize, &positiveCount, &negativeCount);

    printf("\n\nThe negative numbers = %d\nThe positive numbers = %d", negativeCount, positiveCount);
    
    getch();
    return 0;
}

void countPositiveNegative(int array[], int arraySize, int *positiveCount, int *negativeCount)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] < 0)
        {
            *negativeCount+=1;
        }
        else
        {
            *positiveCount+=1;
        }
        
    }
    
}