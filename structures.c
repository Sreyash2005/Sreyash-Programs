#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//defining a structure
struct student {
    char name[100];
    int roll;
    float cgpa;
};

//typedef function
typedef struct Student {
    char name[100];
    int roll;
    float cgpa;
} stu;

typedef struct address {
    int house_num;
    int block;
    char city[100];
    char state[100];
} adrs;

typedef struct vector {
    int x;
    int y;
    int z;
} vec;


/*
void printstuinfo(stu s);                                                                   //Declaration of structural function



int main() {
    struct student s1;                                                                      //Initializing structure
    printf("Enter name: ");
    fgets(s1.name, 100, stdin);
    printf("Enter roll no.: ");
    scanf("%d", &s1.roll);
    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Student info\nName: %s\nRoll No.: %d\nCGPA: %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}
*/

/*
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct student s[n];                                                                     //Structure array

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudents info:\n");
    for (i = 0; i < n; i++) {
        printstuinfo(s[i]);
    }

    return 0;
}



void printstuinfo(stu s) {
    printf("Name: %s\n", s.name);
    printf("Roll No.: %d\n", s.roll);
    printf("CGPA: %.2f\n", s.cgpa);
}
*/


int main() {
    adrs p[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter house no.: ");
        scanf("%d", &p[i].house_num);
        printf("Enter block: ");
        scanf("%d", &p[i].block);
        printf("Enter city: ");
        scanf(" %[^\n]", p[i].city);
        printf("Enter state: ");
        scanf(" %[^\n]", p[i].state);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("Address of %dth person:\nHouse no.: %d\nBlock: %d\nCity: %s\nState: %s\n", i + 1, p[i].house_num, p[i].block, p[i].city, p[i].state);
    }

    return 0;
}




/*
void vectorsum(vec v1, vec v2, vec *sum);
void printvector(vec *sum);

int main() {
    vec v1 = {5, 6, 7};
    vec v2 = {7, 8, 9};
    vec sum;

    vectorsum(v1, v2, &sum); 
    printvector(&sum);

    return 0;
}

void vectorsum(vec v1, vec v2, vec *sum) {
    (*sum).x = v1.x + v2.x;
    (*sum).y = v1.y + v2.y;
    (*sum).z = v1.z + v2.z;
}
void printvector(vec *s) {
    printf("%di + %dj + %dz", (*s).x, (*s).y, (*s).z);
}
*/