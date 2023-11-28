#include <stdio.h>
#include <conio.h>

int main(){

    int number, count=1;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    while (count <= number)
    {
        if (count == number)
        {
            printf(" %d. \n\nHere is your desired output.", count);
        }
        else if (count%5 != 0)
        {
            printf(" %d, ", count);
        }
        else
        {
            printf(" %d \n", count);
        }
        count++;
    }
    

    getch();
    return 0;
}