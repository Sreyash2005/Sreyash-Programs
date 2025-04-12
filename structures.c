#include <stdio.h>
#include <stdlib.h>


//defining a structure
struct student {
    char name[100];
    int roll;
    float cgpa;
};


int main() {
    struct student s1;
    printf("Enter name: ");
    fgets(s1.name, 100, stdin);
    printf("Enter roll no.: ");
    scanf("%d", &s1.roll);
    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Student info\nName: %s\nRoll No.: %d\nCGPA: %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}