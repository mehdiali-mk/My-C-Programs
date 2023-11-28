#include <stdio.h>
#include <conio.h>

int main() {

    int number1, number2, number3;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    number3 = number1 < number2;
    printf("\n%d < %d = %d", number1, number2, number3);

    number3 = number1 > number2;
    printf("\n%d > %d = %d", number1, number2, number3);

    number3 = number1 <= number2;
    printf("\n%d <= %d = %d", number1, number2, number3);

    number3 = number1 >= number2;
    printf("\n%d >= %d = %d", number1, number2, number3);

    number3 = number1 == number2;
    printf("\n%d == %d = %d", number1, number2, number3);

    number3 = number1 != number2;
    printf("\n%d != %d = %d", number1, number2, number3);

    getch();
    return 0;
}