#include <stdio.h>
#include <conio.h>

int main(){

    int number, sum = 0, count = 1;

    printf("\n\nEnter the Number = ");
    scanf("%d", &number);

    sumAgain:

    sum = sum + count;
    count++;

    if (count <= number)
    {
        goto sumAgain;
    }
    
    printf("\n\nThe sum upto %d number = %d", number, sum);


    getch();
    return 0;
}