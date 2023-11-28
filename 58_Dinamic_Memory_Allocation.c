#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    char *string;

    string = (char *) malloc(10);

    printf("\n\nEnter the string = ");
    gets(string);
    printf("\n\nThe entered string = %s", string);
    free(string);

    printf("\n\n%s is a string.", string);
    string = NULL;
    printf("\n\n%s is a string.", string);

    string = calloc(5, sizeof(int));
    printf("\n\nEnter the string = ");
    gets(string);
    printf("\n\n%s is a string.", string);

    string = realloc(string, 20);
    printf("\n\nEnter the string = ");
    gets(string);
    printf("\n\n%s is a string.", string);

}