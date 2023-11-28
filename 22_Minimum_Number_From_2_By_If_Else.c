#include <stdio.h>
#include <conio.h>

int main() {

    int number1, number2;

    printf("Enter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    if (number1 < number2)
    {
        printf("\n\n%d is the minimum number.", number1);
    }
    else
    {
        printf("\n\n%d is the minimum number.", number2);
    }
    

    getch();
    return 0;
} 