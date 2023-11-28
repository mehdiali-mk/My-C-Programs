#include <stdio.h>
#include <conio.h>

int main() {

    float fahrenheit, celsius;
    
    printf("Enter the Fahrenheit = ");
    scanf("%f", &fahrenheit);

    celsius = (((fahrenheit - 32) * 100) / 180);

    printf("\n\n%f Fahrenheit = %f Celsius\n\n", fahrenheit, celsius);
    
    
    /*
    f - 32 = C * 180 / 100
    (f - 32) * 100 = c * 180
    C = (((f - 32) * 100) / 180)
    */

    return 0;
}