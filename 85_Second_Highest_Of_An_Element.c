#include <stdio.h>
#include <conio.h>

void secondHeighestOrMin(int [], int, int *);

int main(){

int arraySize, secondHeighest = 0;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    secondHeighestOrMin(array, arraySize, &secondHeighest);

    printf("\n\nThe second highest element = %d", secondHeighest);
    getch();
    return 0;
}

void secondHeighestOrMin(int array[], int arraySize, int *secondHeighest)
{
    int max;

    max = array[0];

    if (array[0]>array[1])
    {
        *secondHeighest = array[1];
        max = array[0];
    }
    else
    {
        *secondHeighest = array[0];
        max = array[1];
    }

    for (int i = 2; i < arraySize; i++)
    {
        if (array[i] > max)
        {
            *secondHeighest = max;
            max = array[i];
        }
        else if (array[i] > *secondHeighest)
        {
            *secondHeighest = array[i];
        }
        
        
    }
    
}