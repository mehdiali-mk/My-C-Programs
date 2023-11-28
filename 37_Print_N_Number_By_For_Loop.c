#include <stdio.h>
#include <conio.h>

int main(){

    int number;

    printf("\n\nEnter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i%5!=0)
        {
            printf(" %d, ", i);
        }
        else
        {
            printf(" %d ", i);
            printf("\n");
        }
        
    }
    

    getch();
    return 0;
}