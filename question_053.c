/*Q53.Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*/
#include <stdio.h>

int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}