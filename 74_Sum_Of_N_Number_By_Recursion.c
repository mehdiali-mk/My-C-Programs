#include <stdio.h>
#include <conio.h>

int calculateSum(int);

int main(){

    int number, sum;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    sum = calculateSum(number);

    printf("\n\nThe sum = %d", sum);
    
    getch();
    return 0;
}

int calculateSum(int number){

    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number + calculateSum(number - 1);
    }

}