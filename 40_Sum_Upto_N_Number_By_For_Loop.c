#include <stdio.h>
#include <conio.h>

int main(){

    int number, sum = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    printf("\n\nThe Sum = %d", sum);
    

    getch();
    return 0;
}