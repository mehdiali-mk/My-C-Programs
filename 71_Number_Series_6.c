/*
Calculate Sum of Series-1^2_1! + 2^2_2! + 3^2_3!
*/

#include <stdio.h>
#include <conio.h>

float sumOfSeries(int number);
float findFactorial(int factorialNumber);

int main(){

    int number;
    float sum;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    sum = sumOfSeries(number);

    printf("\n\nThe sum of the series = %f", sum);
    getch();
    return 0;
}

float sumOfSeries(int number)
{
    float sum = 0, factorial;

    for (int i = 1; i <= number; i++)
    {
        factorial = findFactorial(i);
        sum = sum + i * i / factorial;
    }
    
    return sum;
}

float findFactorial(int factorialNumber)
{
    if (factorialNumber == 1)
    {
        return 1;
    }
    else
    {
        return factorialNumber * findFactorial(factorialNumber-1);
    }
    
}