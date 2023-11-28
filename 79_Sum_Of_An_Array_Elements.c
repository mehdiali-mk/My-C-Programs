#include <stdio.h>
#include <conio.h>

int sumOfArray(int [], int);

int main(){

    int arraySize, sum;
    
    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int arrayElement[arraySize];
    
    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the arrayElement[%d] = ", i);
        scanf("%d", &arrayElement[i]);
    }

    sum = sumOfArray(arrayElement, arraySize);
    
    printf("\n\nThe sum of array = %d", sum);

    getch();
    return 0;
}

int sumOfArray(int array[], int arraySize)
{
    int sum = 0;

    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}