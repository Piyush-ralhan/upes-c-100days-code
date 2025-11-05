#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    // Try to open the file in read mode
    file = fopen(filename, "r");
    // Check if file exists
    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }
    printf("Contents of '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}

/*
🖥️ Input:
Enter the filename to open: labs.txt

📁 Content of labs.txt:
Name: Piyush
Age: 18

🖥️ Output:
Contents of 'labs.txt':
Name: Piyush
Age: 18
*/
