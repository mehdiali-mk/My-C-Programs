#include <stdio.h>
#include <conio.h>

int main(){

    int number = 5;
    int *ptr, **ptrTOptr;

    ptr = &number;
    ptrTOptr = &ptr;

    printf("\nnumber = %d", number);
    printf("\n&number = %d", &number);
    printf("\n*ptr = %d", *ptr);
    printf("\nptr = %d", ptr);
    printf("\n&ptr = %d", &ptr);
    printf("\nptrTOptr = %d", ptrTOptr);
    printf("\n*ptrTOptr = %d", *ptrTOptr);
    printf("\n**ptrTOptr = %d", **ptrTOptr);

    getch();
    return 0;
}