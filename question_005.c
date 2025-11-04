//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter Temp in celsius :");
    scanf("%f",&celsius);
    fahrenheit = 32+(1.8*celsius);
    printf("Fahrenheit : %f\n",fahrenheit);
    return 0;
    
}
