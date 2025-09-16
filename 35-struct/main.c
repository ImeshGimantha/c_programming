#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[30];
    int age;
    float gpa;
    bool isStudent;
} Student;

void printStudent(Student student);

int main() {

    Student student1 = {"John", 21, 3.1, true};
    Student student2 = {"Grace", 26, 2.78, false};
    Student student3 = {0};

    strcpy(student3.name, "David");
    student3.age = 34;
    student3.gpa = 3.126;
    student3.isStudent = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;

}

void printStudent(Student student) {
    printf("Name    : %s\n", student.name);
    printf("Age     : %d\n", student.age);
    printf("GPA     : %.2f\n", student.gpa);
    printf("Student : %s\n", student.isStudent ? "Yes" : "No");
    printf("\n");
}