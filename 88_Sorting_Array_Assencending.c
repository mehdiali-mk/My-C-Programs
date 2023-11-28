#include <stdio.h>
#include <conio.h>

void sortingArray(int [], int);

int main(){

    int arraySize;

    printf("\n\nEnter the size of array = ");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    sortingArray(array, arraySize);

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("\narrayElement[%d] = %d", i, array[i]);
    }

    getch();
    return 0;
}

void sortingArray(int array[], int arraySize){

    int temp;

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i+1; j < arraySize; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}