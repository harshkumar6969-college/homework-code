//Q- Write a C program to check whether a given number is a prime number or not.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a,count=0;
    printf("Enter your number");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        if (a%i == 0){
            count++;
        }
    }
    if (count == 2){
        printf("Number is prime number");
    }
    else{
        printf("Number is not prime");
    }
}