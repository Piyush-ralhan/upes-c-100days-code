#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;
    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("❌ Error: Could not open input.txt\n");
        return 1;
    }
    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf(" Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }
    // Read each character, convert to uppercase if needed, and write to output
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }
    // Close both files
    fclose(inputFile);
    fclose(outputFile);
    printf(" Conversion complete. Output saved to output.txt\n");
    return 0;
}

/*
Sample content of HELLO.txt:
Hello World
C programming

Result in output.txt:
HELLO WORLD
C PROGRAMMING

🖥️Output:
Conversion complete. Output saved to output.txt
*/
