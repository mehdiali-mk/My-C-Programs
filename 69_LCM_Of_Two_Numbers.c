#include <stdio.h>
#include <conio.h>

int main(){

    int number1, number2, i, maximumNumber;

    printf("\n\nEnter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    maximumNumber = number1 > number2 ? number1 : number2;

    for (i = maximumNumber; i <= number1 * number2; i++)
    {
        if (i%number1 == 0 && i%number2 == 0)
        {
            break;
        }
    }
    
    printf("\n\nThe LCM of %d and %d = %d", number1, number2, i);

    getch();
    return 0;
}