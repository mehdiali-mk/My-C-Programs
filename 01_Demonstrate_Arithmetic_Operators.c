#include<stdio.h>
#include<conio.h>

int main(){
    
    int num1, num2;

    printf("Enter the first number = ");
    scanf("%d", &num1);
    
    printf("Enter the second number = ");
    scanf("%d", &num2);

    printf("\n\nThe Addition = %d\nThe Subtraction = %d\nThe Multiplication = %d\nThe Division = %d\nThe Modulo = %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);

    
    return 0;
}