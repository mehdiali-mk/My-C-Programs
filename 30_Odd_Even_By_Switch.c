#include <stdio.h>
#include <conio.h>

int main(){

    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    switch (number%2)
    {
    case 0:
        printf("\n\n%d is an even number.", number);
        break;
    
    case 1:
        printf("\n\n%d is an odd number.", number);
        break;

    default:
        printf("\n\n~~ERROR~~");
        break;
    }

    getch();
    return 0;
}