#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main() {

    float radius, area, perimeter;

    printf("Enter the Radius = ");
    scanf("%f", &radius);

    area = PI*radius*radius;
    perimeter = 2*PI*radius;

    printf("\n\nThe area = %f\nThe perimeter = %f", area, perimeter);

    return 0;
}