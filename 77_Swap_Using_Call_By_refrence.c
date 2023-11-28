#include <stdio.h> 
#include <conio.h>

void swapTwoNumbers(int *, int *);

int main(){

    int number1 = 5, number2 = 8;

    swapTwoNumbers(&number1, &number2);

    printf("\n\nThe number1 = %d", number1);
    printf("\nThe number2 = %d", number2);


    getch();
    return 0;
}

void swapTwoNumbers(int *number1, int *number2)
{
    *number1 = *number1 + *number2;
    *number2 = *number1 - *number2;
    *number1 = *number1 - *number2;
}