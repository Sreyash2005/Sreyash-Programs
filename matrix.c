/*
#include <stdio.h>

int main() {                                                                   // is equal matrix
    int r1, c1, r2, c2, i, j, check = 1;

    printf("Enter row and column size of A matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter row and column size of B matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Not equal\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter a[%d][%d] value: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter b[%d][%d] value: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 == r2 && c1 == c2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                if (a[i][j] != b[i][j]) {
                    check = 0;
                    break;
                }
            }

            if (check == 0) {
                break;
            }
        }

        if (check == 1) {
            printf("Equal\n");
        }
        else {
            printf("Not equal\n");
        }
    }

    return 0;
}  
*/




/*
#include<stdio.h>                                                              // identity matrix

int main() {
    int r, c, i, j, num, flag = 1;

    printf("Enter the no. of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) { 
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    num = a[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i != j) {
                if (a[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }

            if (i == j) {
                if (a[i][j] != num) {
                    flag = 0;
                    break;
                } 
            }
        }

        if (flag == 0) {
            break;
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) { 
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (flag == 0 || r != c) {
        printf("Not an identity matrix\n");
    }
    else {
        printf("The matrix is an identity matrix\n");
    }

    return 0;
}
*/





/*
#include <stdio.h>

int main() {                                                                   // Trace of a matrix                    
    int r, c, i, j, num, sum = 0;

    printf("Enter the no. of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) { 
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j) {
                sum += a[i][j];
            } 
        }
    }

    printf("The given matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) { 
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Sum of diagonal values = %d", sum);
    return 0;
}
*/





/*
#include <stdio.h>

int main() {                                                                   // transpose 
    int r, c, i, j;

    printf("Enter the values of row and column: ");
    scanf("%d %d", &r, &c);

    int a[r][c], aT[c][r];

    printf("Enter %d elements for A matrix: ", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The given matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            aT[j][i] = a[i][j];
        }
    }

    printf("It's transposed matrix is:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", aT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
