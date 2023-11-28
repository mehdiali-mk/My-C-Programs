#include <stdio.h>
#include <conio.h>

int main(){

    int arraySize, occurance = 0;

    printf("\n\nEnter the size of an array = ");
    scanf("%d", &arraySize);

    int array[arraySize], visited[arraySize];

    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the arrayElement[%d] = ", i);
        scanf("%d", &array[i]);
        visited[i] = 0;
    }
    
    printf("\n\n");
    for (int i = 0; i < arraySize; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        occurance = 1;
        for (int j = i+1; j < arraySize; j++)
        {
            if (array[i] == array[j])
            {
                occurance++;
                visited[j] = 1;
            }
        }
        printf("\nThe occurance of %d = %d times.", array[i], occurance);
    }
    

    getch();
    return 0;
}