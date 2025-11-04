#include <stdio.h>
#include <math.h>
#include <string.h>

void printHello();                                      // Function declaration
void printGoodBye();
void greet();
int len_int(int a);
void is_prime(int a);
int Sum2N(int a, int b);
void Table(int n);
void calc_price(float n);
float areaSquare(float side);
void Square(int lr, int ur);
float percentage(float n);
void fibonacci(int n);
void swap(int *a, int *b);
void print_Array(int arr[], int n);
int cnt_odd_arr(int arr[], int n);
void rev_arr(int arr[], int n);
void insert(int arr[], int n, int num, int pos);
void delete_num(int arr[], int n, int pos);
int search(int arr[], int n, int num);
int len_str(char arr[]);
void salting(char password[], char salt[]);
void slice(char str[100], int n, int m);
void bubble_sort(int arr[], int n);
// Recursive Function
void printHelloWorld(int cnt);
int SumN(int n);
int fact(int n);
int fibonacciN(int n);










int main() {                                           // Function call
    int num;                                           // here num is an argument/actual parameter
    printf("Enter number: ");
    scanf("%d", &num);

    fibonacci(num);
    return 0;
}

// int main() {
//     int x, y;
//     printf("Enter values for x and y: ");
//     scanf("%d %d", &x, &y);

//     swap(&x, &y);

//     printf("Now x is %d and y is %d\n", x, y);

//     return 0;
// }

// int main() {
//     int arr[100], num, i = 0;
//     char ans1, ans2;

//     while (ans1 != 'n' && ans1 == 'y') {
//         printf("Enter number%d: ", i + 1);
//         scanf("%d", &arr[i]);
//         printf("Do you want to input more(y/n): ");
//         scanf(" %c", &ans1);
//         i++;
//     }

//     while (ans2 != 'n' && ans2 == 'y') {
//         printf("Enter a number to be searched in array: ");
//         scanf("%d", &num);
        
//         search(arr, i, num);
        
//         printf("Do you want to input more(y/n): ");
//         scanf(" %c", &ans2);
//     }
//     return 0;
// }

// int main() {
//     char str[100];
//     int n, m;

//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     printf("Enter the starting and ending index: ");
//     scanf("%d %d", &n, &m);

//     printf("%s", str);

//     slice(str, n, m);

//     return 0;
// }

// int main() {
//     char name[100];
//     printf("Enter a name: ");
//     scanf(" %[^\n]", name);

//     printf("The length of the %s is %d\n", name, len_str(name));

//     return 0;
// }










void printHello() {                          // Function definition
    printf("Hello!\n");
}

void printGoodBye() {
    printf("Good Bye!\n");
}

void greet() {
    char ch;
    printf("Enter first letter of your nationality(Indian/French): ");
    scanf("%c", &ch);
    
    if (ch == 'i') {
        printf("Namaste\n");
    }
    else if (ch == 'f') {
        printf("Bonjour\n");
    }
}

int len_int(int a) {
    int len = 0;
    if (a == 0) {
        len = 1;
    }
    else {
        while (a != 0) {
            a /= 10;
            len += 1;
        }
    }
    return len;
}

void is_prime(int a) {
    int i, check = 1;
    for (i = 2; i < (a / 2); i++) {
        if (a % i == 0) {
            check = 0;
            break;
        }
    }

    if (check == 0) {
        printf("False\n");
    }
    else {
        printf("True\n");
    }
}

int Sum2N(int a, int b) {
    return a + b;
}

void Table(int n) {                                 // here n is a parameter/formal parameter
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void calc_price(float n) {
    float Gst = 0.18 * n;
    printf("Final price is %f\n", n + Gst);
}

float areaSquare(float side) {
    return pow(side, 2);
}

void Square(int lr, int ur) {
    for (lr; lr <= ur; lr++) {
        printf("%d^2 = %d\n", lr, lr * lr);
    }
}

float percentage(float n) {
    int marks, sum = 0, percent;

    for (int i = 1; i <= n; i++) {
        printf("Enter mark: ");
        scanf ("%d", &marks);

        sum += marks;
    }
    
    percent = sum / n;
    return percent;
}

void fibonacci(int n) {
    int i = 1, j = 1, k = 0, f = 0;
    printf("%d %d ", f, i);

    while (i < n - 1) {
        f = k + j;
        k = j;
        j = f;
        printf("%d ", f);
        i++;
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_Array(int arr[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int cnt_odd_arr(int arr[], int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cnt++;
        }
    }
    return cnt;
}

void rev_arr(int arr[], int n) {
    int temp[n], i, j = 0;

    for (i = (n - 1), j = 0; i >= 0; i--, j++) {
        temp[j] = arr[i];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void insert(int arr[], int n, int num, int pos) {
    int i, j, prev, temp;

    prev = arr[n - 1];
    temp = n;
    
    for (i = n; i >= 0; i--) {
        if (i == (pos - 1)) {
            arr[i] = num;
            break;
        }
        else {
            arr[i] = prev;
        }

        temp -= 1;
        prev = arr[temp - 1];
    }
}

void delete_num(int arr[], int n, int pos) {
    int i, j, next;
    
    for (i = 0; i < n; i++) {
        if (i == (pos - 1)) {
            for (j = i; j < n; j++) {
                next = arr[j + 1];
                arr[j] = next;
            }
        }
    }

    n -= 1;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int search(int arr[], int n, int num) {
    int i, cnt;

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Number found at location: %d\n", (i + 1));
            cnt++;
        }
    }

    if (cnt == 0) {
        printf("Number not found\n");
    }
}

int len_str(char arr[]) {
    int cnt = 0;

    while (arr[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < (n - 1); i++) {
        for (j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


// Recursive Function //


void printHelloWorld(int cnt) {                     
    if (cnt == 0) {
        return;
    }
    printf("Hello World\n");
    printHelloWorld(cnt - 1);
}

int SumN(int n) {
    if (n == 1) {
        return 1;
    }
    int SumNm1 = SumN(n-1);
    int sum = SumNm1 + n;
    return sum; 
}

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = fact(n-1) * n;
    return factN;
}

int fibonacciN(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int fibNm1 = fibonacciN(n - 1);
    int fibNm2 = fibonacciN(n - 2);
    int fibN = fibNm1 + fibNm2;

    return fibN;
}

void salting(char password[], char salt[]) {
    strcat(password, salt);
}

void slice(char str[100], int n, int m) {
    int i, j;
    char newstr[100];

    for (i = 0, j = n; j <= m; i++, j++) {
        newstr[i] = str[j];
    }
    newstr[i] = '\0';

    printf("%s", newstr);
}