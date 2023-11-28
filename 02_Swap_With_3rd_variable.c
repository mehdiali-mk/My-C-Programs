#include<stdio.h>
#include<conio.h>

int main(){
    
    int num1, num2, num3;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("1st Number = %d\n2nd Number = %d", num1, num2);
    
    return 0;
}