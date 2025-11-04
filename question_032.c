//Q32. Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n,rev=0,oringal,rem;
    printf("enter number: ");
    scanf("%d",&n);
    oringal = n;
    while(n != 0){
        rem=n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    if(oringal == rev ){
        printf("is a palindrome number \n",oringal);
    }else{
        printf("not a palindrome number \n",oringal);
    }
    return 0;
}