#include <stdio.h>
#include <conio.h>

int main(){

    int number1, number2, number3, minimumNumber;
    
    printf("Enter the 1st number = ");
    scanf("%d", &number1);

    printf("Enter the 2nd number = ");
    scanf("%d", &number2);

    printf("Enter the 3rd number = ");
    scanf("%d", &number3);

    minimumNumber = (number1 < number2) && (number1 < number3) ? number1 : (number2 < number1) && (number2 < number3) ? number2: number3;

    printf("\n\n%d is the minimum number.", minimumNumber);
    getch();
    return 0;
}