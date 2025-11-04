//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
    //D =  Discriminant, R1 = Root1 , R2 = Root2 
    float a,b,c,D,R1,R2,realpart,imagpart;
    printf("Enter the coefficiants a,b,and c");
    scanf("%f %f %f ",&a , &b , &c);
    D = (b * b) - (4*a*c);
    if(D > 0){
        R1 = (-b + sqrt(D))/(2*a);
        R2 = (-b - sqrt(D))/(2 * a);
        printf("Roots are real & distinct:\n");
        printf("Root1=%.2f, Root2 = %.2f \n",R1,R2);
    }
    else if(D = 0){
        R1 = R2 = -b/(2*a);
        printf("Roots are real & equal\n");
        printf("Root1 = Root2 = %.2f\n",R1);
    }else{
        realpart = -b/(2*a);
        imagpart = sqrt(-D)/(2*a);
        printf("Roots are imaginary(complex)\n");
        printf("Root1 = %.2f + %.2f\n",realpart,imagpart);
        printf("Root2 = %.2f - %.2f\n", realpart,imagpart);
    }
    return 0 ;
}