#include <stdio.h>
int main() {
    FILE *file;
    char line[100];
    // It open the file in read mode
    file = fopen("info.txt", "r");
    // It check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    // Used for read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    // Closing the file
    fclose(file);

    return 0;
}

/*
Input in file:
Name: Piyush
Age: 21

Output:
Name: Piyush
Age: 21
*/
