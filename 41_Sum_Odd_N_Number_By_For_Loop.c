#include <stdio.h>
#include <conio.h>

int main(){

    int number, sum = 0;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i%2==1)
        {
            sum = sum + i;
        }
    }

    printf("\n\nThe Sum = %d", sum);
    

    getch();
    return 0;
}