/*
# include<stdio.h>                                                    // if-else if-else age

int main() {
    
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        if (age >= 60) {
            printf("U r senior citizen\n");
        }
        else {
            printf("U r adult\n");
        }
    }
    else if (age >= 13 && age < 18) {
        printf("U r teenager\n");
    }
    else if (age > 0 && age < 13) {
        printf("U r still a child\n");
    }
    else {
        printf("U do not exist\n");
    }

    return 0;
}
*/




/*
# include<stdio.h>                                                     // Ternary Operator

int main() {
    
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult") : printf("Not adult");

    return 0;
}
*/




/*
# include<stdio.h>                                                     // Switch for day

int main() {

    int day;
    printf("Enter day(1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Sunday");
            break;

        case 2: printf("Monday");
            break;

        case 3: printf("Tuesday");
            break;

        case 4: printf("Wednesday");
            break;

        case 5: printf("Thursday");
            break;

        case 6: printf("Friday");
            break;

        case 7: printf("Saturday");
            break;

        default: printf("Not a valid day \n");
    }

    return 0;

}
*/




/*
# include<stdio.h>                                                    // Grade

int main() {

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100) {
        printf("Pass\n");
        if (marks >= 90) {
            printf("Grade: A+");
        }
        else if (marks < 90 && marks >= 80) {
            printf("Grade: A");
        }
        else if (marks < 80 && marks >= 70) {
            printf("Grade: B");
        }
        else if (marks < 70 && marks >= 60) {
            printf("Grade: C");
        }
        else if (marks < 60 && marks >= 50) {
            printf("Grade: D");
        }
        else {
            printf("Grade: E");
        }
    }
    else if (marks <= 30) {
        printf("Fail \n");
        printf("Grade: F \n");
    }

    return 0;
}
*/




# include<stdio.h>                                                           // Armstrong number using only conditional statements

int main() {

    int num;
    printf("Enter number: ");
    scanf("%d", &num);
