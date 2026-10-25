//Q- Write a C program to find the sum of digits of a given number 
//using a while loop.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int sum = 0;
    int remainder;
    printf("Enter your number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 10;  
        sum = sum + remainder; 
        num = num / 10;        
    }

    printf("%d\n", sum);
    return 0;
}
