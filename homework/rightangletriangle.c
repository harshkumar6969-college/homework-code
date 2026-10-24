//Q- Write a C program to print a numbered right-angled triangle 
//pattern using nested loops.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    for (int i=1;i<=6;i++){
        for (int k=1;k<=i;k++){
            printf("%d", k);
        }
        printf("\n");
}}