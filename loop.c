/*
#include <stdio.h>

int main() {
    int i = 0;
    for (i; i <= 10; i += 1) {
        if (i < 10) {
            printf("%d, ", i);
        }
        else if (i == 10) {
            printf("%d", i);
        }
    }
    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    char ch = 'a';
    for (ch; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int i = 0, n;
    printf("Enter number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d \n", i);
        i++;
    }
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i; i <= n; i += 1) {
        sum += i;
    }
    printf("Sum is %d \n", sum);

    i -= 1;
    while (i >= 1) {
        printf("%d \n", i);
        i -= 1;
    }
    return 0;
}
*/




/*
#include <stdio.h>                                          //Table of n

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d\tx\t%d\t=\t%d\n", n, i, n * i);
    }
    return 0;
}
*/




/*
#include <stdio.h>                                          // Armstrong number
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0, rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {                                     // digits = (int)log10(num) + 1;
        temp /= 10;
        digits++;
    }
    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    (sum == num) ? printf("It is an armstrong number") : printf("Not an armstrong number");
    return 0;
}
*/




/*
#include <stdio.h>
#include <math.h>

int main() {
    int lr, ur, temp, digits, sum, rem, i;
    printf("Enter the lower range and the upper range: ");
    scanf("%d%d", &lr, &ur);

    for (i = lr; i <= ur; i++) {
        digits = sum = 0;
        temp = i;

        // digits = (int)log10(num) + 1;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = i;

        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d is an armstrong number\n", i);
        }
    }
    return 0;
}
*/




/*
#include <stdio.h>                                                  // Taking input until odd input

int main() {
    int i;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &i);
        
        if (i % 2 != 0) {
            printf("%d is odd \n", i);
            break;
        }
        printf("%d is even \n", i); 
    }
    return 0;
}
*/




/*
#include <stdio.h>                                                 // Taking input until 7 multiple input

int main() {
    int n;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 7 == 0) {
            break;
        }
        printf("%d is valid\n", n);
    }
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int i;
    
    for (i = 5; i <= 50; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int num, fact = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    for (num; num >= 1; num -= 1) {
        fact *= num;
    }
    printf("The factorial of %d is %d", temp, fact);

    return 0;
}
*/




/*
#include <stdio.h>                                                               // Sum of n to n

int main() {
    int fst_num, last_num, sum = 0, temp;
    printf("Enter the first no. and last no.: ");
    scanf("%d%d", &fst_num, &last_num);
    temp = fst_num;

    for (fst_num, last_num; fst_num <= last_num; fst_num++) {
        sum += fst_num;
    }
    printf("Sum of numbers from %d to %d is %d\n", temp, last_num, sum);
    
    return 0;
}
*/




/*
#include <stdio.h>                                                     // Pattern *

int main() {
    char star = '*';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", star);
        }
        printf("\n");
    }
    return 0;
}
*/




/*
#include <stdio.h>                                                     // Prime or not

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            printf("%d is not prime\n", x);
            return 0;
        }
    }
    printf("%d is prime", x);
    return 0;
}
*/




/*
#include <stdio.h>                                                           // Palindrome or not

int main() {
    int num, temp, rem, len = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        temp /= 10;
        len++;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    rev == num ? printf("%d is palindrome", num) : printf("%d is not a palindrome", num);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int n, m, i, sum = 0, percentage;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter mark: ");
        scanf ("%d", &m);

        sum += m;
    }
    
    percentage = sum / n;
    printf("Total percentage = %d", percentage);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int n, i = 1, j = 1, k = 0, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d %d ", f, i);

    while (i < n - 1) {
        f = k + j;
        k = j;
        j = f;
        printf("%d ", f);
        i++;
    }
    return 0;
}
*/