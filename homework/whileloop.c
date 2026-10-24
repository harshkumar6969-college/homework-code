//Q- Write a C program to find the sum of digits of a given number 
//using a while loop.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    int count=0;
    int i = 0;
    printf("Enter your number");
    scanf("%d",&a);
    while (a != i){
        i++;
        count = count + i;
    }
    printf("%d", count);
}