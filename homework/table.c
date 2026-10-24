//Q- Write a C program to accept a number from the user and 
//print its multiplication table up to 10 using a for loop.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    for (int i = 1; i<=10; i++){
        printf("%d\n", a * i);
    }
}