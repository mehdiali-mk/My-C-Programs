#include <stdio.h>
#include <conio.h>

float averageOfArray(int [], int);

int main(){

    int arraySize;
    float average;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int arrayElement[arraySize];
    
    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the arrayElement[%d] = ", i);
        scanf("%d", &arrayElement[i]);
    }

    average = averageOfArray(arrayElement, arraySize);
    
    printf("\n\nThe average of array = %f", average);

    getch();
    return 0;
}

float averageOfArray(int array[], int arraySize)
{
    int sum = 0;
    float average;

    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + array[i];
    }

    average = ((float) sum / arraySize);
    
    return average;
}