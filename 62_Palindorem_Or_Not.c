#include <stdio.h>
#include <conio.h>

int main()
{

    int number, tempNumber, reverse = 0, reminder, sign = 1;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
        sign = -sign;
    }

    tempNumber = number;

    while (number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }

    if (tempNumber == reverse)
    {
        printf("\n\n%d is a palindorem number.", tempNumber);
    }
    else
    {
        printf("\n\n%d is not a palindorem number.", tempNumber);
    }

    getch();
    return 0;
}