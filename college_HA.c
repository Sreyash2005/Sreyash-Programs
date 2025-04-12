// Day - 3


/*
#include <stdio.h>                                               // Paisa conversion

int main() {
    int amt, rs, ps;
    printf("Enter the amount: ");
    scanf("%d", &amt);

    rs = amt / 100;
    ps = amt % 100;

    printf("%d paisa = %d Rupee %d paisa\n", amt, rs, ps);
    return 0;
}
*/


// Day - 4


/*
#include <stdio.h>                                                

int main() {                                                     // rev 3 digit num
    int num, rev_num, dig1, dig2, dig3;
    printf("Enter a number: ");
    scanf("%d", &num);

    dig1 = num % 10;
    rev_num = dig1;
    num = num / 10;
    dig2 = num % 10;
    rev_num = (rev_num * 10) + dig2;
    dig3 = num / 10;
    rev_num = (rev_num * 10) + dig3;

    printf("%d\n", rev_num);
    return 0;
}
*/
/*
#include <stdio.h>

int main() {                                                     // Single statement swap
    int a, b;                           
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b - (b = a);                                              

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
*/


// Day - 5,6


/*
#include <stdio.h>

int main() {                                                     // whether the triangle is equilateral, isosceles or scalene
    int n1, n2, n3;
    printf("Enter the sides of a triangle: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3) {
        printf("Equilateral\n");
    }
    else if ((n1 == n2 && n2 != n3) || (n1 == n3 && n3 != n2) || (n2 == n3 && n3 != n1)) {
        printf("Isosceles\n");
    }
    else if (n1 != n2 && n2 != n3 && n1 != n3) {
        printf("Scalene\n");
    }

    return 0;
}
*/


// Day - 7


/*
#include <stdio.h>                                               
#include <math.h>

int main() {                                                        // Armstrong
    int n, rem, sum = 0, temp, len = 0;
    printf("n = ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        n /= 10;
        len++;
    }

    n = temp;

    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, len);
        n /= 10;
    }

    if (sum == temp) {
        printf("Armstrong\n");
    }
    else {
        printf("Not Armstrong");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {                                                        // Palindrome
    int num, rev_num = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num /= 10;
    }

    if (rev_num == temp) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

    return 0;
}
*/


// Day - 8


/*
#include <stdio.h>

int main() {                                                        // S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
    int n, i, j, sum = 0;
    printf("n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            sum += j;
        }
    }

    printf("Sum of series is %d\n", sum);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {                                                        // to find out 1/n!
    int n, p = 1, i;
    printf("n = ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        p *= i;
    }

    printf("Result is %f\n", 1/(float)p);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {                                                        //( 1+1/2+1/3……… )
    float i, sum = 0;
    int n; 
    printf("n = ");
    scanf("%d", &n);

    for (i = 1.0; i <= n; i++) {
        sum += 1/i;
    }

    printf("Result is %f\n", sum);
    return 0;
}
*/


// Day - 9,10


/*
       *
      ***
     *****
    *******
   ********* 
   
*//*
#include <stdio.h>

int main() {
    int n, i, j, k, temp;
    printf("n = ");
    scanf("%d", &n);

    temp = n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j < temp; j++) {
            printf(" ");
        }
        
        for (k = 1; k <= ((i * 2) - 1); k++) {
            printf("*");
        }

        temp -= 1;
        printf("\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int ch = 65, n, i, j;
    printf("n = ");
    scanf("%d", &n);

    for (i = ch; i < (ch + n); i++) {
        for (j = i; j >= ch; j--) {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * * 
*//*
#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
            printf("\n");
        }
        else {
            printf("*");
            for (j = 1; j <= ((2 * n) - 3); j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    
    return 0;
}
*/

/*
    *********
     *******
      *****
       ***
        * 
*//*
#include <stdio.h>

int main() {
    int n, i, j, k, temp;
    printf("n = ");
    scanf("%d", &n);

    temp = n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        for (k = 1; k <= ((temp * 2) - 1); k++) {
            printf("*");
        }

        temp -= 1;
        printf("\n");
    }

    return 0;
}
*/

/*
    1
    2 1
    1 2 3
    4 3 2 1
    1 2 3 4 5
*//*
#include <stdio.h>

int main() {
    int n, i, j;
    printf("n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }

            printf("\n");
        }
        else {
            for (j = i; j >= 1; j--) {
                printf("%d ", j);
            }

            printf("\n");
        }
    }
    
    return 0;
}
*/


// Day - 16


/*
#include <stdio.h>

void SWAP(int arr[], int n);


int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("After swapping largest and smallest: ");
    SWAP(a, n);

    return 0;
}
*/


/*
void SWAP(int arr[], int n) {
    int l = arr[0], s = arr[0], i, j, indx_l, indx_s, temp;

    for (i = 0; i < n; i++) {
        if (arr[i] > l) {
            l = arr[i];
        }

        if (arr[i] < s) {
            s = arr[i];
        }
    }

    for (i = 0, j = 0; i < n; i++, j++) {
        if (arr[i] == l) {
            indx_l = i;
        }
        
        if (arr[j] == s) {
            indx_s = j;
        }
    }

    temp = arr[indx_s];
    arr[indx_s] = arr[indx_l];
    arr[indx_l] = temp;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/


// Day - 21


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
#include <string.h>

int main() {
    int len, cnt_chr, cnt = 0, i, check;
    char str[100], *ptr;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    ptr = str;
    len = strlen(str) - 1;

    while (*ptr != '\n') {
        cnt_chr = 0;
        check = 1;

        if (*ptr != ' ' && *ptr != '\n') {
            if (*ptr >= 'A' && *ptr <= 'B') {
                *ptr += 32;
            }

            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
                for (i = cnt; i <= len; i++) {
                    if (*(ptr - cnt + i) == *ptr) {
                        check = 0;
                        cnt_chr++;
                    }
                }

                for (i = 0; i <= len; i++) {
                    if (*(ptr - cnt + i) == *ptr && i < cnt) {
                        check = 1;    
                    }
                }

                if (check == 0) {
                    printf("Vowel %c = %d\n", *ptr, cnt_chr);
                }
            }

            else {
                for (i = cnt; i <= len; i++) {
                    if (*(ptr - cnt + i) == *ptr) {
                        check = 0;
                        cnt_chr++;
                    }
                }

                for (i = 0; i <= len; i++) {
                    if (*(ptr - cnt + i) == *ptr && i < cnt) {
                        check = 1;    
                    }
                }

                if (check == 0) {
                    printf("Consonant %c = %d\n", *ptr, cnt_chr);
                }
            }
            ptr++;
            cnt++;
        }
    }

    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>

int main() {
    int len, i;
    char str[100], *ptr, temp;

    printf("Enter a word: ");
    fgets(str, 100, stdin);

    ptr = str;
    len = strlen(str) - 1;

    if (len % 2 != 0) {
        printf("The string length is odd");
        return 0;
    }

    while (*ptr != '\n') {
        temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;
        ptr += 2;
    }

    ptr = str;

    while (*ptr != '\n') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
*/