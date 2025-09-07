#include <stdio.h>

int is_sparse(int row, int col, int mat[row][col]);
int count_nz(int row, int col, int mat[row][col]);
void convert_trad_triplet(int row, int col, int trad[row][col]);
void convert_triplet_trad(int tri[][3]);
void transpose_triplet(int tri1[][3]);
void add_two_triplet(int tri1[][3], int tri2[][3]);



int main() {
    int r1, r2, i;
    printf("Enter no. non zero elements in two triplets: ");
    scanf("%d %d", &r1, &r2);

    int mat1[r1 + 1][3];
    int mat2[r2 + 1][3];

    printf("Enter first triplet matrix elements: ");
    for (i = 0; i <= r1; i++) {
        scanf("%d %d %d", &mat1[i][0], &mat1[i][1], &mat1[i][2]);
    }

    printf("Enter second triplet matrix elements: ");
    for (i = 0; i <= r2; i++) {
        scanf("%d %d %d", &mat2[i][0], &mat2[i][1], &mat2[i][2]);
    }

    add_two_triplet(mat1, mat2);

    return 0;
}




int is_sparse(int row, int col, int mat[row][col]) {
    int i, j, cnt_z = 0, cnt_nz = 0;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (mat[i][j] == 0) {
                cnt_z++;
            }
            else {
                cnt_nz++;
            }
        }
    }

    if (cnt_z > cnt_nz) {
        return 1;
    }
    else {
        return 0;
    }
}

int count_nz(int row, int col, int mat[row][col]) {
    int i, j, cnt_nz = 0;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (mat[i][j] != 0) {
                cnt_nz++;
            }
        }
    }

    return cnt_nz;
}

void convert_trad_triplet(int row, int col, int trad[row][col]) {
    if (is_sparse(row, col, trad) == 1) {
        int i, j, x = 1, nz = count_nz(row, col, trad);
        
        int tri[nz + 1][3];

        tri[0][0] = row;
        tri[0][1] = col;
        tri[0][2] = nz;

        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                if (trad[i][j] != 0) {
                    tri[x][0] = i;
                    tri[x][1] = j;
                    tri[x][2] = trad[i][j];
                    x++;
                }
            }
        }

        printf("The triplet form matrix is:\n");
        for (i = 0; i <= nz; i++) {
            printf("%d %d %d\n", tri[i][0], tri[i][1], tri[i][2]);
        }
    }
}

void convert_triplet_trad(int tri[][3]) {
    int i, j, nz = tri[0][2], r = tri[0][0], c = tri[0][1];

    int trad[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trad[i][j] = 0;
        }
    }

    for (i = 0; i <= nz; i++) {
        r = tri[i][0];
        c = tri[i][1];

        trad[r][c] = tri[i][2];
    }

    if (is_sparse(tri[0][0], tri[0][1], trad) == 1) {
        printf("The traditional form matrix is:\n");
        for (i = 0; i < tri[0][0]; i++) {
            for (j = 0; j < tri[0][1]; j++) {
                printf("%d ", trad[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Not sparse\n");
    }
}

void transpose_triplet(int tri1[][3]) {
    int i, j, k, nz = tri1[0][2];

    int tri2[nz + 1][3];
    tri2[0][0] = tri1[0][1];
    tri2[0][1] = tri1[0][0];
    tri2[0][2] = nz;

    k = 1;
    for (i = 0; i <= nz; i++) {
        for (j = 1; j <= nz; j++) {
            if (tri1[j][1] == i) {
                tri2[k][0] = tri1[i][1];
                tri2[k][1] = tri1[i][0];
                tri2[k][2] = tri1[i][2];
                k++;
            }
        }
    }
}

void add_two_triplet(int tri1[][3], int tri2[][3]) {
    if (tri1[0][0] == tri2[0][0] && tri1[0][1] == tri2[0][1]) {
        int nz1 = tri1[0][2], nz2 = tri2[0][2], i = 1, j = 1, k = 0;

        while (i <= nz1 && j <= nz2) {
            if (tri1[i][0] < tri2[j][0]) {
                i++;
            }
            else if (tri1[i][0] > tri2[j][0]){
                j++;
            }
            else {
                if (tri1[i][1] < tri2[j][1]) {
                    i++;
                }
                else if (tri1[i][1] > tri2[j][1]) {
                    j++;
                }
                else {
                    i++;
                    j++;
                }
            }

            k++;
        }

        while (i <= nz1) {
            k++;
            i++;
        }

        while (j <= nz2) {
            k++;
            j++;
        }

        int res[k][3];

        res[0][0] = tri1[0][0];
        res[0][1] = tri1[0][1]; 

        i = j = k = 1;
        while (i <= nz1 && j <= nz2) {
            if (tri1[i][0] < tri2[j][0]) {
                res[k][0] = tri1[i][0];
                res[k][1] = tri1[i][1];
                res[k][2] = tri1[i][2];
                i++;
            }
            else if (tri1[i][0] > tri2[j][0]){
                res[k][0] = tri2[j][0];
                res[k][1] = tri2[j][1];
                res[k][2] = tri2[j][2];
                j++;
            }
            else {
                if (tri1[i][1] < tri2[j][1]) {
                    res[k][0] = tri1[i][0];
                    res[k][1] = tri1[i][1];
                    res[k][2] = tri1[i][2];
                    i++;
                }
                else if (tri1[i][1] > tri2[j][1]) {
                    res[k][0] = tri2[j][0];
                    res[k][1] = tri2[j][1];
                    res[k][2] = tri2[j][2];
                    j++;
                }
                else {
                    res[k][0] = tri1[i][0];
                    res[k][1] = tri1[i][1];
                    res[k][2] = tri1[i][2] + tri2[j][2];
                    i++;
                    j++;
                }
            }

            k++;
        }

        while (i <= nz1) {
            res[k][0] = tri1[i][0];
            res[k][1] = tri1[i][1];
            res[k][2] = tri1[i][2];
            k++;
            i++;
        }

        while (j <= nz2) {
            res[k][0] = tri2[j][0];
            res[k][1] = tri2[j][1];
            res[k][2] = tri2[j][2];
            k++;
            j++;
        }
        
        res[0][2] = k - 1;
        
        printf("The resultant triplet:\n");
        for (i = 0; i < k; i++) {
            printf("%d %d %d\n", res[i][0], res[i][1], res[i][2]);
        }
    }
}