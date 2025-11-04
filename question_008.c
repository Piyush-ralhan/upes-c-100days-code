//Q8: Write a program to find and display the sum of the first n natural numbers.
// can also be done by loop
#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("sum of n number :%d\n",sum);
    return 0;

 
}