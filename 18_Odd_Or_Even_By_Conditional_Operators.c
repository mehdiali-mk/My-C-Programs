#include <stdio.h>
#include <conio.h>

int main(){

    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    number % 2 ? printf("\n\n%d is an odd number.", number): printf("\n\n%d is an even number.", number);

    getch();
    return 0;
}