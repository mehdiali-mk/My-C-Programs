#include <stdio.h>
#include <conio.h>

int main(){

    int startRange, endRange, sum = 0;

    printf("\n\nEnter the starting range = ");
    scanf("%d", &startRange);

    printf("Enter the ending range = ");
    scanf("%d", &endRange);

    for (int i = startRange; i <= endRange; i++)
    {
        if (i%3==0)
        {
            sum = sum + i;
        }
    }

    printf("\n\nThe Sum between %d to %d = %d", startRange, endRange, sum);
    

    getch();
    return 0;
}