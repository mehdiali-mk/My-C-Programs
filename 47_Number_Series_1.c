
/*

C Program to Calculate Sum of Series- 1-(1/2)+(1/3)-(1/4) upto Nth Term

*/


#include <stdio.h>
#include <conio.h>

float series(int);

int main(){

    int number;
    float sum;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);
    
    // Function Calculate the sum of 1-(1/2)+(1/3)-(1/4)... Nth term.
    sum = series(number);

    printf("\n\nThe sum of the series = %f.", sum);
    getch();
    return 0;
}

float series(int number)
{
    float sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i%2 == 0)
        {
            sum = sum - 1.0/i;
        }
        else
        {
            sum = sum + 1.0/i;
        }   
    }
    
    return sum;
}