#include <stdio.h>
#include <conio.h>

int main() {

    int number1, number2, number3;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    number3 = number1++; // This will asign number1 to number3 and add 1 to number1.
    printf("\n\nNumber 3 = %d\nNumber 1 = %d", number3, number1);

    number3 = ++number1; // This will add 1 to number1 and asign it to number3.
    printf("\n\nNumber 3 = %d\nNumber 1 = %d", number3, number1);

    number3 = number2++; // This will asign number2 to number3 and add 1 to number1.
    printf("\n\nNumber 3 = %d\nNumber 2 = %d", number3, number2);

    number3 = ++number2; // This will add 1 to number2 and asign it to number3.
    printf("\n\nNumber 3 = %d\nNumber 2 = %d", number3, number2);

    number3 = number1--; // This will asign number1 to number3 and subtract 1 to number1.
    printf("\n\nNumber 3 = %d\nNumber 1 = %d", number3, number1);

    number3 = --number1; // This will subtract 1 to number1 and asign it to number3.
    printf("\n\nNumber 3 = %d\nNumber 1 = %d", number3, number1);

    number3 = number2--; // This will asign number2 to number3 and subtract 1 to number1.
    printf("\n\nNumber 3 = %d\nNumber 2 = %d", number3, number2);

    number3 = --number2; // This will subtract 1 to number2 and asign it to number3.
    printf("\n\nNumber 3 = %d\nNumber 2 = %d", number3, number2);




    
    getch();
    return 0;
}