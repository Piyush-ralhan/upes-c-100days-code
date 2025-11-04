//Q9:Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include<math.h>
int main(){
    //SI = simple interest and CI = compund interest
    //Principal = p and rate = R and Time = T and A= Amount 
    float SI,CI,A;
    float P,R,T;
    printf("Enter the principal value:");
    scanf("%f",&P);
    printf("Enter the rate :");
    scanf("%f",&R);
    printf("Enter  the Time :");
    scanf("%f",&T);
    SI = P*R*T/100;
    A = P * pow((1 + R / 100), T);
    CI = A - P;
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
    