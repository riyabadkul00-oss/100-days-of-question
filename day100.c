#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;           // normal structure variable
    struct Student *ptr;        // pointer to structure

    ptr = &s;    // pointer stores the address of structure variable

    // Taking input using -> operator
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Displaying output using -> operator
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}
