/*
C Program to Calculate Sum of Series- 1+(1_2^2)+(1_3^2) upto Nth Term
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float series(int);

int main(){

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\nThe sum of the series = %f", series(number));

}

float series(int number){

    float sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum = sum + (1/pow(i,2));
    }
    return sum;
}