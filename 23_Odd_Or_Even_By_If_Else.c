#include <stdio.h>
#include <conio.h>

int main(){

    int number1;

    printf("Enter the number = ");
    scanf("%d", &number1);

    if (number1 % 2 == 0)
    {
        printf("\n\n%d is an even number.", number1);
    }
    else
    {
        printf("\n\n%d is an odd number.", number1);
    }
    

    getch();
    return 0;
}