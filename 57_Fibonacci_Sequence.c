#include <stdio.h>
#include <conio.h>

void printFibonacci(int);

int main(){

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\n");
    printFibonacci(number);


    getch();
    return 0;
}

void printFibonacci(int number)
{
    int number1 = 1, number2 = 0, sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum = number1 + number2;
        printf(" %d, ", sum);
        number1 = number2;
        number2 = sum;
    }
    
}
