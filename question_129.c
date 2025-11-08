#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r"); // open file in read mode
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // read numbers until end of file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp); // close the file

    if (count == 0) {
        printf("No numbers found in file.\n");
    } else {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
