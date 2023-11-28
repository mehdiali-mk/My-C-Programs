#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    /*
    num1 = 3
    num2 = 2

    num1 = 3 + 2
    num2 = 5 - 2
    num2 = 5 - 3
    */

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n\n1st number = %d\n2nd number = %d", num1, num2);

    return 0;
}