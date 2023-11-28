#include <stdio.h>
#include <conio.h>

int main()
{

    int number, reverse = 0, reminder, sign = 1;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
        sign = -sign;
    }

    while (number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }

    printf("\n\nThe reverse of Digit = %d", reverse*sign);

    getch();
    return 0;
}