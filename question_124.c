#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;
    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%s", sourceName);
    printf("Enter destination filename: ");
    scanf("%s", destName);
    // Open source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    // Open destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    // Copy content character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    // Close both the files
    fclose(sourceFile);
    fclose(destFile);
    printf(" File copied successfully from %s to %s\n", sourceName, destName);
    return 0;
}

/*
📁 Sample content of source file (file.txt):
Name: Piyush
Age: 21

🖥️ Input:
Enter source filename: file.txt
Enter destination filename: hello.txt

📁 Output in destination file (hello.txt):
Name: Piyush
Age: 21

🖥️ Output:
File copied successfully from info.txt to copy.txt
*/
