#include <stdio.h>
#include <conio.h>

int multiplyTwoNumber(int, int);

int main(){

    int number1, number2;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    printf("\n\nThe multiplication of %d and %d = %d", number1, number2, multiplyTwoNumber(number1, number2));

}

int multiplyTwoNumber(int number1, int number2)
{
    int multiplication = 0;

    for (int i = 1; i <= number2; i++)
    {
        multiplication = multiplication + number1;
    }
    
    return multiplication;
}