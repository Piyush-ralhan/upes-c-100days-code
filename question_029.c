//Q29. Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n,fact;
    fact = 1;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        fact *= i;
    }
    printf("%d",fact);
    return 0; 
}