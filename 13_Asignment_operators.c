#include <stdio.h>
#include <conio.h>

int main(){

    int number1, number2, number3;

    printf("Enter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    number3 = number1;
    printf("\n%d = %d", number3, number1);

    number3 = number2;
    printf("\n%d = %d", number3, number2);

    number3 = number1 += number2;
    printf("\n%d = %d += %d", number3, number1, number2);

    number3 = number1 -= number2;
    printf("\n%d = %d -= %d", number3, number1, number2);

    number3 = number1 *= number2;
    printf("\n%d = %d *= %d", number3, number1, number2);

    number3 = number1 /= number2;
    printf("\n%d = %d /= %d", number3, number1, number2);

    number3 = number1 %= number2;
    printf("\n%d = %d %= %d", number3, number1, number2);


    getch();
    return 0;
}