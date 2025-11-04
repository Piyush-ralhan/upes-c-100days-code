//Q31.Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n,bin[32],i=0;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n == 0){
        printf("binary ");
        return 0;
    }

    while(n > 0){
        bin[i] = n % 2;
        n = n/2;
        i++;
    }
    printf("binary: ");
    for(int j = i-1; j>=0 ; j--){
        printf("%d",bin[j]);
    }
    printf("\n");
    return 0;

}