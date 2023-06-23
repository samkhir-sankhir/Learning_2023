#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStructArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    struct Student students[size];
    
    
    printf("Array of Structures:\n");
    displayStructArray(students, size);
    
    return 0;
}

