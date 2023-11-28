#include <stdio.h>
#include <conio.h>

int main()
{

    int number, count = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            break;
        }
    }

    if (count == 2)
    {
        printf("\n\nThe %d is a prime number.", number);
    }
    else
    {
        printf("\n\nThe %d is not a prime number.", number);
    }

    getch();
    return 0;
}