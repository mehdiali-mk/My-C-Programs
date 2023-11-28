#include <stdio.h>
#include <conio.h>

int main()
{

    int month;

    printf("\n\nEnter the Month number = ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n\nThe %d month has 31 Days.", month);
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n\nThe %d month has 30 Days.", month);
        break;

    case 2:
        printf("\n\nThe %d month has 28 Or 29 Days.", month);
        break;

    default:
        printf("\n\nOpps! You have entered the value less than 1 or greater than 12.");
        break;
    }

    getch();
    return 0;
}