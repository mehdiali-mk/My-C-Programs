#include <stdio.h>
#include <conio.h>

int findFactorial(int);

int main(){

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\nThe Factorial of %d = %d", number, findFactorial(number));
    getch();
    return 0;
}

int findFactorial(int number)
{
    int factorial = 1;

    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}
