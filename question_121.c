#include <stdio.h>
int main() {
    FILE *file;
    char name[50];
    int age;
    // Open the file in write mode
    file = fopen("info.txt", "w");
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    // Write to file using fprintf
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    // Close the file
    fclose(file);
    // Confirmation message
    printf("✅ Data successfully saved to info.txt\n");
    return 0;
}

