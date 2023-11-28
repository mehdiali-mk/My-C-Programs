#include <stdio.h>
#include <conio.h>

void printFactors(int);

int main()
{

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printFactors(number);

    getch();
    return 0;
}

void printFactors(int number)
{
    int factor;

    for (int i = 1; i <= number; i++)
    {
        if (i == number)
        {
            printf(" %d.", i);
        }
        else
        {
            if (number % i == 0)
            {
                printf(" %d, ", i);
            }
        }
    }
}