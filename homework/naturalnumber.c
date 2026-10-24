//Q- Write a C program to find the sum of the first n natural numbers.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    int sum=0;
    printf("Enter your number");
    scanf("%d", &a);
    for (int i=0;i<=a;i++){
    sum = sum + i;
    }
    printf("sum is %d", sum);
       printf("\n");
}