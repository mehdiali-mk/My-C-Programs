#include <stdio.h>
#include <conio.h>

int main(){

    char character;

    printf("\n\nEnter the character = ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':    
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':    
    case 'O':
    case 'U':

        printf("\n\n%c is an vowel.", character);
        break;
    
    default:

        printf("\n\n%c is not an vowel.", character);
        break;
    }

    getch();
    return 0;
}