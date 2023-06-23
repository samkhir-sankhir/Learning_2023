#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStructArray(struct Student* students, int size, const char* searchName) {
    int found = 0;
    
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

int main() {
    int size;
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    struct Student students[size];
   
    
    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);
    
    searchStructArray(students, size, searchName);
    
    return 0;
}

