#include <stdio.h>
#include <conio.h>

void reverseArray(int [], int);

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
    
    reverseArray(array, arraySize);

    printf("\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("\narrayElement[%d] = %d", i, array[i]);
    }
    
    getch();
    return 0;    
}

void reverseArray(int array[], int arraySize){


    for (int i = 0, j = arraySize-1; i < arraySize/2; i++, j--)
    {
        array[i] = array[i] + array[j];
        array[j] = array[i] - array[j];
        array[i] = array[i] - array[j];
    }

}