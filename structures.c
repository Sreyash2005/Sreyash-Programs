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
    char gender;
    int m1, m2, m3, m4, m5;
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

typedef struct distance {
    int km;
    int m;
} dist;




void printstuinfo(stu s);                                                                   //Declaration of structural function

/*
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
    int n, i, num, cnt = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    stu s[n];                                                                               //Structure array

    printf("Enter students data:\n");
    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);
        printf("Enter gender(M/F): ");
        scanf(" %c", &s[i].gender);
        printf("Enter marks in subject 1: ");
        scanf("%d", &s[i].m1);
        printf("Enter marks in subject 2: ");
        scanf("%d", &s[i].m2);
        printf("Enter marks in subject 3: ");
        scanf("%d", &s[i].m3);
        printf("Enter marks in subject 4: ");
        scanf("%d", &s[i].m4);
        printf("Enter marks in subject 5: ");
        scanf("%d", &s[i].m5);
    }
    printf("\n");
    
    printf("Enter subject number whose failed list to be displayed: ");
    scanf("%d", &num);

    printf("\nStudents info:\n");
    for (i = 0; i < n; i++) {
        printstuinfo(s[i]);
    }

    for (i = 0; i < n; i++) {
        if (num == 1) {
            if (s[i].m1 < 40) {
                cnt++;
            }
        }
        else if (num == 2) {
            if (s[i].m2 < 40) {
                cnt++;
            }
        }
        else if (num == 3) {
            if (s[i].m3 < 40) {
                cnt++;
            }
        }
        else if (num == 4) {
            if (s[i].m4 < 40) {
                cnt++;
            }
        }
        else if (num == 5) {
            if (s[i].m5 < 40) {
                cnt++;
            }
        }
    }
    printf("List of failed students: %d\n", cnt);

    return 0;
}

void printstuinfo(stu s) {
    printf("Name: %s\n", s.name);
    printf("Roll No.: %d\n", s.roll);
    printf("Gender: %c\n", s.gender);
    printf("Marks in Subject 1: %d\n", s.m1);
    printf("Marks in Subject 2: %d\n", s.m2);
    printf("Marks in Subject 3: %d\n", s.m3);
    printf("Marks in Subject 4: %d\n", s.m4);
    printf("Marks in Subject 5: %d\n", s.m5);
    printf("Total marks: %d\n", s.m1 + s.m2 + s.m3 + s.m4 + s.m5);
}
*/




/*
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
*/





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




/*
int main() {
    dist d1, d2;
    int sum_km, sum_m, temp;

    printf("Enter data for 1st distance:\n");
    printf("Enter km: ");
    scanf("%d", &d1.km);
    printf("Enter m: ");
    scanf("%d", &d1.m);

    printf("Enter data for 2nd distance:\n");
    printf("Enter km: ");
    scanf("%d", &d2.km);
    printf("Enter m: ");
    scanf("%d", &d2.m);

    sum_km = d1.km + d2.km;
    sum_m = d1.m + d2.m;

    if (sum_m >= 1000) {
        temp = sum_m / 1000;
        sum_km += temp;
        sum_m -= (temp * 1000);
    }

    printf("Sum of distances = %dkm %dm\n", sum_km, sum_m);

    return 0;
}
*/