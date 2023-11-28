#include <stdio.h>
#include <conio.h>

int main(){

    int number1, number2, number3;


    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    printf("Enter the 3rd number = ");
    scanf("%d", &number3);

    if (number1 == number2 && number1 > number3)
    {
        printf("\n\n%d and %d both are same and greater than %d.", number1, number2, number3);
    }
    else if(number2 == number3 && number2 > number1)
    {
        printf("\n\n%d and %d both are same and greater than %d.", number2, number3, number1);
    }
    else if(number1 == number3 && number1 > number2)
    {
        printf("\n\n%d and %d both are same and greater than %d.", number1, number3, number2);
    }
    else if (number1 > number2 && number1 > number3)
    {
        printf("\n\n%d is the maximum from %d and %d.", number1, number2, number3);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("\n\n%d is the maximum from %d and %d.", number2, number1, number3);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("\n\n%d is the maximum form %d and %d.", number3, number1, number2);
    }
    else if (number1 == number2 && number1 == number3)
    {
        printf("\n\n%d and %d and %d are same.", number1, number2, number3);
    }
    else
    {
        printf("\n\n~Error~");
    }


    getch();
    return 0;
}