#include <stdio.h>
#include <conio.h>

int main(){

    int number, tempNumber, sum = 0, reminder;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }
    
    tempNumber = number;

    while (number > 0)
    {
        reminder = number % 10;
        sum = sum + (reminder * reminder * reminder);
        number = number / 10;
    }
    
    if (tempNumber == sum)
    {
        printf("\n\nThe %d is an Amstrong number.", tempNumber);
    }
    else
    {
        printf("\n\nThe %d is not an Amstrong number.", tempNumber);
    }
    

    getch();
    return 0;
}