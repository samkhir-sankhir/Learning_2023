#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStructArray(char* inputString, struct Student* students, int size) {
    char* token;
    int i = 0;
    
    token = strtok(inputString, " ");
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);
        
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int size, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    char inputString[100];
    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    
    parseStringToStructArray(inputString, students, size);
   
    printf("\nStudent Details:\n");
    for (i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
   
    free(students);
    
    return 0;
}

