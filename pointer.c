/*
#include <stdio.h>

int main() {
    int age = 19;
    int *ptr = &age;
    *ptr = 22;
    int _age_ = *ptr;

    printf("%d %d %u %p %u", _age_, *ptr, &age, ptr, &ptr);
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int age, *ptr;
    ptr = &age;
    *ptr = 22;

    printf("%d %u", age, ptr);
    return 0;
}
*/




/*
#include <stdio.h>

void Square(int n) {                                // call by value
    n = n * n;
    printf("%d\n", n);
}

void _Square_(int *n) {                             // call by reference(changes the number at that address)
    *n = (*n) * (*n);
    printf("%d\n", *n);
}


int main() {
    int num = 4;
    Square(num);
    printf("Number is: %d\n", num);

    _Square_(&num);
    printf("Number is: %d\n", num);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int a = 3, b = 5;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int num_a = *ptr_a;

    *ptr_a = b;
    *ptr_b = num_a;

    printf("%d %d", a, b);

    return 0;
}
*/





/*
#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    float *ptr_a = &num1;
    float *ptr_b = &num2;

    if (*ptr_a > *ptr_b) {
        printf("%.2f is maximum\n", *ptr_a);
    } 
    else if (*ptr_b > *ptr_a) {
        printf("%.2f is maximum\n", *ptr_b);
    } 
    else {
        printf("Both are equal\n");
    }
    return 0;
}
*/





/*
#include <stdio.h>

int main() {
    int age1 = 19;
    int age2 = 49;

    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("Difference of %u and %u is %u", ptr1, ptr2, ptr1 - ptr2);

    return 0;
}
*/




/*
#include <stdio.h>

void swap_three(int *a, int *b, int *c);

int main() {
    int a, b, c, *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping: %d %d %d\n", a, b, c);

    swap_three(&a, &b, &c);

    printf("Value after swapping: %d %d %d\n", a, b, c);
    return 0;
}

void swap_three(int *a, int *b, int *c) {
    int temp1 = *a, temp2 = *b;
    *a = *c;
    *b = temp1;
    *c = temp2;
}
*/




/*
#include <stdio.h>

int main() {
    int x, y;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;
    
    printf("Enter a value: ");
    scanf("%d", ptr1);
    printf( "Enter a value: ");
    scanf("%d", ptr2);
    
    printf("Product is %d\n", (*ptr1) * (*ptr2));

    return 0;
}
*/