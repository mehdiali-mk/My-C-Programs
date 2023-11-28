#include <stdio.h>
#include <conio.h>

int main()
{

    int number, sum = 0, reminder;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }

    while (number > 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number / 10;
    }

    printf("\n\nThe sum of digit = %d", sum);

    getch();
    return 0;
}