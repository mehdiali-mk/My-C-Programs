#include <stdio.h>
#include <conio.h>
#define GST 0.18

float calculateGST(float);

int main(){

    float amount, finalAmount;

    printf("\n\nEnter the amount = ");
    scanf("%f", &amount);

    finalAmount = calculateGST(amount);

    printf("\n\nThe final amount = %f", finalAmount);


    getch();
    return 0;
}

float calculateGST(float amount){

    float finalAmount = 0;

    finalAmount = amount + (amount * GST);

    return finalAmount;
}
