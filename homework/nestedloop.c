//Q-  Write a C program to print a pyramid pattern using nested for loops.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    printf("       *");
    printf("\n");
    for (int i=1;i<=6;i++){
        for (int j=6;j>=i;j--){
            printf(" ");
        }
        
        for (int k=1;k<=i;k++){
            printf("*");
        }
        for (int l=0;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
}