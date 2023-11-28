#include <stdio.h>
#include <conio.h>

int main(){

    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    if (number < 0)
    {
        number *= -1;
    }
    
    printf("\n\nThe Absolute value is %d.", number);
    

    getch();
    return 0;
}