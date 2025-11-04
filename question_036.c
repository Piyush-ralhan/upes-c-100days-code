//Q36.Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    while(b != 0){
        temp = b;
        b= a % b;
        a = temp;
    }
    printf(" HFC(GCD) = %d\n",a);
    return 0;
}