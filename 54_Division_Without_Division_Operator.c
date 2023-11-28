#include <stdio.h>
#include <conio.h>

int divisionTwoNumber(int, int);

int main(){

    int number1, number2, sign = 1;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    if (number2 != 0)
    {
        
    if (number1 < 0)
    {
        number1 = - number1;
        sign = - sign;
    }
    if (number2 < 0)
    {
        number2 = - number2;
        sign = - sign;
    }
    
    printf("\n\nThe Division of %d and %d = %d", number1 * sign, number2 * sign, divisionTwoNumber(number1, number2) * sign);
    }
    else
    {
        printf("\n\nThe Division is not posiable.");
    }
    

}

int divisionTwoNumber(int number1, int number2)
{
    int division = 0, count = 0;

    for (int i = number1; number1 >= number2;)
    {
        number1 = number1 - number2;
        count++;
    }
    return count;
}