//Q23.Write a program to calculate a library fine based on late days.
#include<stdio.h>
int main(){
    int days, fine;
    printf("Enter number of Days:");
    scanf("%d",&days);
    fine = 0;
    if(days<=5){
        fine = days * 2;
        printf("Total Fine : %d \n",fine);
    }else if(days<=10){
        fine = days * 4;
        printf("Total fine : %d\n",fine);
    }else if(days<=30){
        fine = days * 6;
        printf("Total fine : %d\n",fine);

    }else{
        printf("Membership cancelled");
    }
    return 0;
}