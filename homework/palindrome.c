//Q- Write a C program to check whether a given number is a palindrome or not.
//Name- Harsh Kumar
//Roll no - 29552
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int reversed=0;
    int count;
    printf("Enter number");
    scanf("%d", &a);
    b = a;
while (a!= 0){
c = a%10;
reversed = (reversed*10) + c;
a = a/10;
}
printf("%d\n", b);
if (reversed == b){
    printf("Number is palindrome");
}
else {
    printf("Number is not palindrome");
}

}