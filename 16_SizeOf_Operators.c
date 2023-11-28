#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nsizeof(char) = %d byte", sizeof(char));
    printf("\nsizeof(int) = %d byte", sizeof(int));
    printf("\nsizeof(short int) = %d byte", sizeof(short int));
    printf("\nsizeof(long int) = %d byte", sizeof(long int));
    printf("\nsizeof(float) = %d byte", sizeof(float));
    printf("\nsizeof(double) = %d byte", sizeof(double));
    printf("\nsizeof(long double) = %d byte", sizeof(long double));

    getch();
    return 0;
}