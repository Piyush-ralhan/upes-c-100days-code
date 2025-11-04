//Q41.Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, first, last, temp, divisor = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = n % 10; 
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp; 
    if (n < 10) {
        printf("After swapping: %d\n", n);
        return 0;
    }
    int middle = (n % divisor) / 10;
    int swapped = last * divisor + middle * 10 + first;

    printf("After swapping: %d\n", swapped);

    return 0;
}