//Q- Write a C program to make a simple calculator using switch case.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    int b;
    char c;
    printf("Enter your first number");
    scanf("%d", &a);
    printf("Enter your second number");
    scanf("%d", &b);
    printf("Enter your arithematic function");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    
    default:
        break;
    }
}