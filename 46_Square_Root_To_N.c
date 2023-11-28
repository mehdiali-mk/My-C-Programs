#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int number;
    float squareRoot;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\n\n");
    for (int i = 1; i <= number; i++)
    {
        squareRoot = sqrt(i);
        printf("\nSquare Root of %d = %.2f", i, squareRoot);
    }
    

}