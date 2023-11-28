#include <stdio.h>
#include <conio.h>

void maxOrMin(int [], int, int *, int *);

int main(){

int arraySize, max = 0, min = 0;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    maxOrMin(array, arraySize, &max, &min);

    printf("\n\nThe maximum element = %d\nThe minimum element = %d", max, min);
    getch();
    return 0;
}

void maxOrMin(int array[], int arraySize, int *max, int *min)
{
    *max = array[0];
    *min = array[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }
        if (array[i] < *min)
        {
            *min = array[i];
        }        
    }
    
}