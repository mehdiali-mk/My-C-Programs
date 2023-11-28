#include <stdio.h>
#include <conio.h>

/*
    a(x)2 + bx + c = 0;
    delta = (b)2 + 4ac;

    delta < 0 then img root;
    delta >= 0 then real root;
*/

int main(){

    double a, b, c, delta;

    printf("Enter the value of a = ");
    scanf("%lf", &a);

    printf("Enter the value of b = ");
    scanf("%lf", &b);

    printf("Enter the value of c = ");
    scanf("%lf", &c);

    delta = ((b*b) - (4 * a * c));
    
    if (delta < 0)
    {
        printf("\n\nHere %lf < 0, means it is an Imagenary Root.", delta);
    }
    else
    {
        printf("\n\nHere %lf >= 0, means it is a Real Root.", delta);
    }
    

    getch();
    return 0;
}