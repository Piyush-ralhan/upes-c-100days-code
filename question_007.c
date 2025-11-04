//Q7:Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number a :");
    scanf("%d",&a);
    printf("Enter the number b :");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a =a-b;
    printf("First number:%d\n",a);
    printf("Second number:%d\n",b);
    return 0;

}