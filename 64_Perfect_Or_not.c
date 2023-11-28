#include <stdio.h> 
#include <conio.h>

int main(){

    int number, sum = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (number == sum)
    {
        printf("\n\nThe %d is a perfect number.", number);
    }
    else
    {
        printf("\n\nThe %d is not a perfect number.", number);
    }
    
    

    getch();
    return 0;
}