#include <stdio.h>
#include <conio.h>

void sumOddEven(int, int, int*, int*);

int main(){

    int startingRange, endingRange, sumOfOdd = 0, sumOfEven = 0;

    printf("\n\nEnter the strating range = ");
    scanf("%d", &startingRange);

    printf("Enter the ending range = ");
    scanf("%d", &endingRange);

    sumOddEven(startingRange, endingRange, &sumOfOdd, &sumOfEven);

    printf("\n\nThe sum of Odd numbers = %d\nThe sum of Even numbers = %d", sumOfOdd, sumOfEven);
}

void sumOddEven(int startingRange, int endingRange, int *sumOfOdd, int *sumOfEven){
    *sumOfEven = 0;
    *sumOfOdd = 0;

    for (int i = startingRange; i <= endingRange; i++)
    {
        if (i%2==0)
        {
            *sumOfEven = *sumOfEven + i;
        }
        else
        {
            *sumOfOdd = *sumOfOdd + i;
        }
    }
}