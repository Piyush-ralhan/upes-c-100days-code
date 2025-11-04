//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    float radius,area,circumference;
    printf("Enter the value of radius :");
    scanf("%f",&radius);
    area = 3.14 *radius *radius ;
    circumference = 2*3.14*radius ;
    printf("area :%.2f\n",area);
    printf("circumference: %.2f\n",circumference);
    return 0;

}
