#include <stdio.h>
#include <conio.h>

int main(){

    int startRange, endRange, reverse = 0, tempNumber, reminder, flag = 0;

    printf("\n\nEnter the starting range = ");
    scanf("%d", &startRange);

    printf("Enter the ending range = ");
    scanf("%d", &endRange);

    printf("\n\nThe palindorem number are:\n");
    for (int i = startRange; i <= endRange; i++)
    {
        tempNumber = i;
        reverse = 0;
        while (tempNumber > 0)
        {
            reminder = tempNumber % 10;
            reverse = reverse * 10 + reminder;
            tempNumber = tempNumber / 10;
        }
        if (reverse == i)
        {
            if (flag % 10 == 0)
            {
                printf("\n");
            }
            
            printf(" %d, ", i);
            flag++;
        }
    }

    if (flag == 0)
    {
        printf("\n\nSorry! There is no palindorem number.");
    }
    
    

    getch();
    return 0;
}