/*
#include <stdio.h>

int main() {
    float price[3];
    printf("Enter the price of three items: ");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);

    float gst = (price[0] + price[1] + price[2]) * 0.18;
    float final_price = price[0] + price[1] + price[2] + gst;
    printf("Final cost is: %.2f", final_price);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                    // To count no. of odd numbers in an array
    int arr[3] = {1, 2, 3};
    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        if (arr[i] % 2 != 0) {
            cnt++;
        }
    }
    printf("No. of odd numbers in the given array is %d\n", cnt);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter a number for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                     // Reverse an array
    int arr[5] = {1, 2, 3, 4, 5}, temp[5], i, j;

    for (i = 4, j = 0; i >= 0; i--, j++) {
        temp[j] = arr[i];
    }
    for (i = 0; i < 5; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                      // Storing n no. of fibonacci numbers
    int n, i, a = 0, b = 1, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fib[n];

    fib[0] = a;
    fib[1] = b;

    for (i = 2; i < n; i++) {
        f = a + b;
        a = b;
        b = f;
        fib[i] = f;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int table[2][10], i, j;

    for (i = 0; i <= 1; i++) {
        for (j = 0; j < 10; j++) {
            table[i][j] = (i + 2) * (j + 1);
        }
    }

    for (i = 0; i <= 1; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                            //search an element
    int n, i, num, cnt = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter number_%d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Number found at location: %d\n", (i + 1));
            cnt++;
        }
    }

    if (cnt == 0) {
        printf("Number not found\n");
    }

    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int n, i, j, cnt1, cnt2 = 0, num;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter a number for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        cnt1 = 0;
        num = arr[i];

        for (j = i; j < n; j++) {
            if (arr[j] == num) {
                cnt1 += 1;
            }
        }

        if (cnt1 > 1) {
            cnt2 += cnt1;
        }
    }

    printf("Number of duplicate elements found is %d\n", cnt2);
    return 0;
}
*/




/*
#include <stdio.h> 

int main() {
    int n, i, j, largest_num = 0, large_num = 0, index;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter a number for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest_num) {
            largest_num = arr[i];
            index = i;
        }
    }

    for (i = 0; i < n; i++) {
        if (i != index) {
            if (arr[i] > large_num) {
                large_num = arr[i];
            }
        }
    }

    printf("Second largest number in array is %d\n", large_num);
    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                        // delete an element
    int arr[100], n, i, j, idx, next;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter the location to delete: ");
    scanf("%d", &idx);

    for (i = 0; i < n; i++) {
        printf("Enter a number at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i == (idx - 1)) {
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

    return 0;
}
*/




/*
#include <stdio.h>
 
int main() {                                                            // sort an array(ascending order)
    int arr[100], n, i, j, temp;  
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/





/*
#include <stdio.h>

int main() {
    int array[20], n, i, idx, key;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the key and index: ");
    scanf("%d%d", &key, &idx);

    for (i = n - 1; i >= idx; i--) {
        array[i + 1] = array[i];
    }
    array[idx] = key;
    n++;

    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
*/





/*
#include <stdio.h>

int main() {                                                     // Unique elements
    int n, i, j, num, cnt;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements found in the array are: ");
    for (i = 0; i < n; i++) {
        cnt = 0;
        num = arr[i];
        for (j = 0; j < n; j++) {
            if (arr[j] == num) {
                cnt += 1;
            }
        }

        if (cnt == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
*/





/*
#include <stdio.h> 

int main() {                                                     // Even and Odd numbers
    int n, i, even, odd;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers in array are ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Odd numbers in array are ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
*/





/*
#include <stdio.h>

int main() {                                                     // Reverse array
    int n, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = n - 1; i < n; i++, j--) {
        temp[j] = arr[i];
    }

    printf("Elements in reverse order in the array: ");
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/