#include <stdio.h>
#include <conio.h>

int main()
{

    int number, maximumDigit = 0, reminder;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }

    while (number > 0)
    {
        reminder = number % 10;
        if (reminder > maximumDigit)
        {
            maximumDigit = reminder;
        }
        number = number / 10;
    }

    printf("\n\nThe maximum Digit = %d", maximumDigit);

    getch();
    return 0;
}