#include <stdio.h>
#include <conio.h>

int main(){

    int startRange, endRange;

    printf("\n\nEnter the starting range = ");
    scanf("%d", &startRange);

    printf("Enter the ending range = ");
    scanf("%d", &endRange);

    if (startRange > endRange)
    {
        startRange = startRange + endRange;
        endRange = startRange - endRange;
        startRange = startRange - endRange;
    }

    printf("\n\n");
    for (int i = startRange; i <= endRange; i++)
    {
        printf("\n");
        for (int j = 1; j <= 10; j++)
        {
            printf("\t%d", i*j);
        }
        
    }
    

    getch();
    return 0;
}