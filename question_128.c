#include <stdio.h>
#include <ctype.h>   //i used this for using isalpha() and tolower()

int main() {
    FILE *fp;
    char fname[50];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter the file name: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL) {
        printf("Error! Cannot open the file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // convert to the lowercase

        if (isalpha(ch)) { // check if it is an alphabet
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("\nTotal number of vowels: %d", vowels);
    printf("\nTotal number of consonants: %d\n", consonants);

    return 0;
}

