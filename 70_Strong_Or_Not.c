#include <stdio.h>
#include <conio.h>

int main(){

    int number, tempNumber, factorial = 1, reminder, sum = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    tempNumber = number;

    while (number>0)
    {
        reminder = number % 10;
        factorial = 1;
        for (int i = reminder; i >= 1; i--)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        number = number / 10;
    }

    if (tempNumber == sum && tempNumber != 0)
    {
        printf("\n\n%d is a strong number.", tempNumber);
    }
    else{
         printf("\n\n%d is not a strong number.", tempNumber);
    }
    
    

    getch();
    return 0;
}