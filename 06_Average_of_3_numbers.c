#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2, num3, average;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    printf("Enter the 3rd number = ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("\n\nThe Average = %d", average);

    
    return 0;
}