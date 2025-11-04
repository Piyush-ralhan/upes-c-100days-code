//Q22. Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    //P = profit , L - Loss , CP - Cost price , SP - Selling price
    float P,L,CP,SP,Percentage;
    printf("Enter the Cost price :");
    scanf("%f",&CP);
    printf("Enter the selling price : ");
    scanf("%f",&SP);

    if(SP > CP ){
        P = SP - CP ;
        Percentage = (P/CP)*100;
        printf("Profit = %.2f \n",P);
        printf("Percentage Profit = %2.f \n",Percentage);
    }else if(SP < CP ){
        L = CP - SP;
        Percentage = (L/CP)*100;
        printf("Loss = %.2f\n",L);
        printf("Percentage loss = %.2f\n",Percentage);
    }else{
        printf("NO PROFIT & NO LOSS \n");
    }
    return 0;
}
