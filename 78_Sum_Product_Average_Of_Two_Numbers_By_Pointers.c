#include <stdio.h>
#include <conio.h>

void sumProductAverage(int, int, int *, int *, float *);

int main(){

    int number1, number2, sum, product;
    float average;


    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    sumProductAverage(number1, number2, &sum, &product, &average);

    printf("\n\nThe sum of %d and %d = %d", number1, number2, sum);
    printf("\nThe product of %d and %d = %d", number1, number2, product);
    printf("\nThe average of %d and %d = %f", number1, number2, average);

    getch();
    return 0;
}

void sumProductAverage(int number1, int number2, int *sum, int *product, float *average){
    *sum = number1 + number2;
    *product = number1 * number2;
    *average = ((number1 + number2) / 2.0);
}