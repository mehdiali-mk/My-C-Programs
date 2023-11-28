#include <stdio.h>
#include <conio.h>

int main()
{

    int number, count = 0, flag = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\nThe prime number are:\n");
    for (int i = 1; i <= number; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
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
            printf(" %d, ", i);
            flag++;
        }
                if (flag % 10 == 0)
        {
            printf("\n");
        }
    }

    getch();
    return 0;
}