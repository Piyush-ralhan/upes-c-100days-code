//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int Num;
    printf("Enter number");
    scanf("%d",&Num);
    if(Num>=0){
        if(Num==0){
            printf("The Number is Zero.\n");

        }else{
            printf("The Number is Positive.\n");
        }
    }else{
        printf("The Number is Negative.\n");
    }
    return 0;

}