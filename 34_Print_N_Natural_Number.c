#include <stdio.h>
#include <conio.h>

int main()
{

    int number, printCount = 1;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printNumber:

    if (printCount %5 != 0)
    {
        printf(" %d, ", printCount);
    }
    else
    {
        printf(" %d ", printCount);
        printf("\n");
    }

    printCount++;

    if (printCount <= number)
    {
        goto printNumber;
    }

    getch();
    return 0;
}