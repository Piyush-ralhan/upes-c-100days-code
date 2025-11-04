//Q42.Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n && n != 0)
        printf("%d is a Perfect Number\n", n);
    else
        printf("%d is not a Perfect Number\n", n);
    return 0;
}