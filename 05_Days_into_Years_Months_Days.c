/*
Aim = To convert the days into years months days.
Author = Mehdiali (MK).
Date = 12 / June / 2023 - 12:51 PM.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("\n\n~~ Written By: Mehdiali (MK) ~~\n\n");
    
    int numberOfDays, years, months, days;

    printf("Enter the Number  of Days = ");
    scanf("%d", &numberOfDays);

    years = numberOfDays / 365;
    days = numberOfDays % 365;
    months = days / 30;
    days = days % 30;

    printf("\n\n\nYears = %d\nMonths = %d\nDays = %d\n\n\n", years, months, days);

    getch();
    return 0;
}