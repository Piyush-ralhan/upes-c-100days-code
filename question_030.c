//Q30. Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int n ,rev,rem;
    rev = 0;
    printf("Enter number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem = n % 10;
        rev= rev*10 + rem;
        n = n/10;        
      }
      printf("Reverse number : %d",rev);
      return 0;
}