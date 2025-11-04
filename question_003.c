//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    int area,perimeter;
    area = l*b;
    printf("Area :%d\n",area);
    perimeter = 2*(l + b );
    printf("perimeter : %d\n",perimeter);
    return 0;

}