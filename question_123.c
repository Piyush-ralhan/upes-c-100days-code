#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    // Open the file in read mode
    file = fopen("info.txt", "r");
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    // Read character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    fclose(file);
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);
    return 0;
}

/*
📁 Content of labs.sh:
Name: Piyush
Age: 21

🖥️ Output:
Total Characters: 25
Total Words: 9
Total Lines: 6
*/
