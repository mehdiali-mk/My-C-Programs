/*
Aim = Compund Interest
Author = Mehdiali (MK).
Date = 12 / June / 2023 - 12:36 PM.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    printf("\n\n~~ Written By: Mehdiali (MK) ~~\n\n");
    
    float principle, rateOfInterest, time, compoundInterest, amount;

    printf("Enter the Principle Amount = ");
    scanf("%f", &principle);

    printf("Enter the Rate of Interest = ");
    scanf("%f", &rateOfInterest);

    printf("Enter the Time Duration = ");
    scanf("%f", &time);

    amount = principle * (pow(1+(rateOfInterest / 100), time));
    compoundInterest = amount - principle;

    printf("\n\n\nThe Compound Interest = %f\nThe Amount = %f", compoundInterest, amount);

    getch();
    return 0;
}