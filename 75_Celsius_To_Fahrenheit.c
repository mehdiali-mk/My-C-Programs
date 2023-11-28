#include <stdio.h>
#include <conio.h>

float convertToFahrenheit(float);

int main(){

    float celsius;

    printf("\n\nEnter the celsius = ");
    scanf("%f", &celsius);

    printf("\n\nThe Fahrenheit = %f", convertToFahrenheit(celsius));

    getch();
    return 0;
}

float convertToFahrenheit(float celsius){

    float fahrenheit;

    fahrenheit = (((celsius*180)/100)+32);
    return fahrenheit;
}