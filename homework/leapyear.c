//Q- Write a C program to check whether a given year is a leap year or not.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
int a;
printf("Enter year: ");
scanf("%d", &a);
if ((a%400==0) || (a%100 != 0 && a%4==0)){
    printf("This is leap year\n");
}
else {
    printf("It is not leap year\n");
}}