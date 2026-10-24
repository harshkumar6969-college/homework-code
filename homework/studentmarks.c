//Q- Write a C program to assign grades to 
//a student based on marks using the else-if ladder.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    printf("Enter Student Marks");
    scanf("%d", &a);
    if (a>=80 && a<= 100){
        printf("Your grade is A");
    }
    else if (a >=50 && a<=80){
        printf("Your grade is B");
    }
    else if (a >=30 && a <=50){
        printf("Your grade is C");
    }
    else if (a <=30){
        printf("Your Grade is D");
    }
    printf("\n");
}