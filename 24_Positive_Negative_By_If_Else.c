#include <stdio.h>
#include <conio.h>

int main(){

    int number;

    printf("Enter the number = ");
    scanf("%d", &number);
    
    if (number < 0)
    {
        printf("\n\n%d is a negative number.", number);
    }
    else
    {
        printf("\n\n%d is a positive number.", number);
    }
    

    getch();
    return 0;
}