#include<stdio.h>
#include<conio.h>

int main() {

    float principle, rateOfInterest, time, simpleInterest, amount;

    printf("Enter the Principle Amount = ");
    scanf("%f", &principle);

    printf("Enter the Rate of Interest = ");
    scanf("%f", &rateOfInterest);

    printf("Enter the time duration = ");
    scanf("%f", &time);

    simpleInterest = ((principle * rateOfInterest * time) / 100);

    amount = principle + simpleInterest;

    printf("\n\n\nThe Simple Interest = %f\nThe Amount = %f", simpleInterest, amount);
    
    return 0;
}