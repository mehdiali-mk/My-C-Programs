#include <stdio.h>
#include <conio.h>

int main(){

    int number, count = 1;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    printf("\n\n");
    printTable:

    printf("\n%d X %d = %d", number, count, number*count);
    count++;

    if (count <= 10)
    {
        goto printTable;
    }
    

    getch();
    return 0;
}