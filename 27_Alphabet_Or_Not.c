#include <stdio.h>
#include <conio.h>

int main(){

    char alphabet;

    printf("\n\nEnter any alphabet = ");
    scanf("%c", &alphabet);

    if (alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("\n\n%c is a Capital Alphabet.", alphabet);
    }
    else if (alphabet >= 'a' && alphabet <= 'z') {
        printf("\n\n%c is a Small Alphabet.", alphabet);
    }
    else
    {
        printf("\n\n%c is not an Alphabet.", alphabet);
    }
    

    getch();
    return 0;
}