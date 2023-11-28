#include <stdio.h>
#include <conio.h>

int printHelloWorld(int);

int main(){

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\n");
    printHelloWorld(number);

    getch();
    return 0;
}

int printHelloWorld(int number){

    printf("\nHello World");

    if (number == 1)
    {
        return 1;
    }
    else
    {
        return printHelloWorld(number-1);
    }
    
}