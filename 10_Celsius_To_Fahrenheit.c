#include <stdio.h>
#include <conio.h>

int main() {

    float celsius, fahrenheit;

    printf("Enter the celsius = ");
    scanf("%f", &celsius);

    fahrenheit = (((celsius * 180) / 100) + 32);

    printf("\n\n%f Celsius = %f Fahrenheit\n\n", celsius, fahrenheit);

    return 0 ;
}