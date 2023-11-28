#include <stdio.h>
#include <conio.h>

void swapElements(int [], int);

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
    
    swapElements(array, arraySize);

    printf("\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("\narrayElement[%d] = %d", i, array[i]);
    }
    
    getch();
    return 0;    
}

void swapElements(int array[], int arraySize){

    int temp;

    for (int i = 0; i < arraySize; i+=2)
    {
        if (arraySize % 2 == 1 && i == arraySize - 1)
        {
            continue;
        }
        
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
    
}