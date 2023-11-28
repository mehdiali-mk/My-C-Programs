/*
C Program to Calculate Sum of Series- (1_x)+(1_x^2)+(1_x^3) upto Nth Term
*/


#include <stdio.h>
#include <conio.h>
#include <math.h>

float series(int, float);

int main(){

    int number;
    float sum, x;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);
    printf("Enter the value of x = ");
    scanf("%f", &x);

    sum = series(number, x);

    printf("\n\nThe sum of the series = %f", sum);
}

float series(int number, float x)
{
    float sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + 1/pow(x, i);
    }
    return sum;    
}