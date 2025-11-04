//Q18. Write a program to assign grades based on a percentage input.
// Q18: Program to assign grades based on percentage input
#include <stdio.h>
int main() {
    int percentage;
    printf("Enter percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    }
    else if (percentage >= 75) {
        printf("Grade B\n");
    }
    else if (percentage >= 60) {
        printf("Grade C\n");
    }
    else if (percentage >= 50) {
        printf("Grade D\n");
    }
    else if (percentage >= 0) {
        printf("Grade F\n");
    }
    else {
        printf("Invalid input! Percentage cannot be negative.\n");
    }

    return 0;
}