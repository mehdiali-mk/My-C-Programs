#include <stdio.h>
#include <conio.h>

int main(){

    char ch;

    printf("\n\nEnter the character = ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("\n\n%c is a digit.", ch);
    }
    else {
        printf("\n\n%c is not a digit.", ch);
    }
    


    getch();
    return 0;
}