// Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;          
    struct Student *ptr = &s; 

    printf("Enter Name Roll Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",ptr->name, ptr->roll, ptr->marks);
    return 0;
}

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: Piyush 590022305 98
Output 1:
Modified Data: Name: Piyush | Roll: 590022305 | Marks: 98

*/