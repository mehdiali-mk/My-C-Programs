#include <stdio.h>
#include <conio.h>

int gcd(int , int);

int main(){

    int number1, number2;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    printf("\n\nThe greatest common divisior = %d", gcd(number1, number2));


    getch();
    return 0;
}

int gcd(int number1, int number2)
{
    int minimum, gcd;

    minimum = number1 < number2 ? number1: number2;

    for (int i = 1; i <= minimum; i++)
    {
        if (number1%i == 0 && number2%i == 0)
        {
            gcd = i;
        }
    }
    
    return (gcd);
}