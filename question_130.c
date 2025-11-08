#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll;
    float marks;
    int n, i;

    fp = fopen("students.txt", "w"); // open file to write
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // write student details into file
    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp); // close the file after writing

    // open file again to read data
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("-----------------\n");

    // read and display data
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
