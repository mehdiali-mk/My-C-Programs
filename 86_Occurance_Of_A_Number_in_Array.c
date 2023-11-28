#include <stdio.h>
#include <conio.h>

int occuranceOfNumber(int [], int, int);

int main(){

    int arraySize = 3, array[arraySize], number, occurance;

    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("\n\nEnter the number to find occurance = ");
    scanf("%d", &number);

    occurance = occuranceOfNumber(array, arraySize, number);

    printf("\n\nThe occurance of %d is %d times in an array.", number, occurance);

    
    getch();
    return 0;
}

int occuranceOfNumber(int array[], int arraySize, int number){

    int count = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == number)
        {
            count++;
        }
    }

    return count;
}