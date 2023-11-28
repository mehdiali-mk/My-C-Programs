#include <stdio.h>
#include <conio.h>

int main() {

    int number1, number2, maximumNumber;

    printf("Enter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    maximumNumber = number1 > number2 ? number1 : number2;

    printf("\n\nThe maximum number = %d", maximumNumber);

    getch();
    return 0;
}