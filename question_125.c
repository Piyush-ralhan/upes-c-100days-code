#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char newLine[100];
    // Get filename from user
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    // Clear input buffer before using fgets
    getchar();
    printf("Enter the line to append: ");
    fgets(newLine, sizeof(newLine), stdin);
    // Append the line to the file
    fputs(newLine, file);
    fclose(file);
    printf("Line appended successfully to %s\n", filename);
    return 0;
}

/*
🖥️  Input:
Enter the filename to append to: hello.txt
Enter the line to append: Branch: CSE

📁 Output of hello.txt:
Name: Piyush
Age: 18
Branch: CSE

🖥️  Output:
Line appended successfully to hello.txt
*/
