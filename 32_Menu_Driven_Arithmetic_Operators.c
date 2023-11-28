#include <stdio.h>
#include <conio.h>

int main(){

    float number1, number2, answer;
    char operator;

    printf("\n\nEnter the 1st number = ");
    scanf("%f", &number1);

    printf("Enter the 2nd number = ");
    scanf("%f", &number2);

    printf("Enter the Arithmetic Operator = ");
    scanf(" %c", &operator);


    switch (operator)
    {
    case '+':
        answer = number1 + number2;
        printf("\n\nThe Answer = %f", answer);
        break;

    case '-':
        answer = number1 - number2;
        printf("\n\nThe Answer = %f", answer);
        break;

    case '*':
        answer = number1 * number2;
        printf("\n\nThe Answer = %f", answer);
        break;

    case '/':
        if (number2 != 0)
        {
            answer = number1 / number2;
            printf("\n\nThe Answer = %f", answer);
        }
        else
        {
            printf("\n\nSorry, Division is not posibble.");
        }
        break;

    case '%':
        answer = (int) number1 % (int) number2;
        printf("\n\nThe Answer = %f", answer);
        break;


    default:
        printf("\n\nYou have not entered the corret operator. Retry.");
        break;
    }

    getch();
    return 0;
}