#include <stdio.h>
#include <conio.h>

int main(){

    int year;

    printf("\n\nEnter the year = ");
    scanf("%d", &year);

    if (year % 4 != 0)
    {
        printf("\n\n%d is not a leap year.", year);
    }
    else
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n\n%d is a leap year.", year);
            }
            else
            {
                printf("\n\n%d is not a leap year.", year);
            }
            
        }
        else
        {
            printf("\n\n%d is a leap year.", year);
        }
        
    }
    

    getch();
    return 0;
}