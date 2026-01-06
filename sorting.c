#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void quick_sort(int arr[], int start, int end);
void merge_sort(int arr[], int start, int end);


int main() {
    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // bubble_sort(arr, n);
    // printf("The sorted elements are: ");
    // for (i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n\n");

    // selection_sort(arr, n);
    // printf("The sorted elements are: ");
    // for (i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n\n");

    // insertion_sort(arr, n);
    // printf("The sorted elements are: ");
    // for (i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n\n");

    quick_sort(arr, 0, n - 1);
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}



void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int n) {
    int i, j, temp, smallest;
    for (i = 0; i < n - 1; i++) {
        smallest = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

void insertion_sort(int arr[], int n) {
    int i, j, prev, curr;
    for (i = 1; i < n - 1; i++) {
        curr = arr[i];
        prev = i - 1;
        
        while (arr[prev] > curr && prev >= 0) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

void quick_sort(int arr[], int start, int end) {
    if (start < end) {
        int indx = start - 1, j, pivotIndx = end, temp;

        for (j = start; j < pivotIndx; j++) {
            if (arr[j] <= arr[pivotIndx]) {
                indx++;
                temp = arr[indx];
                arr[indx] = arr[j];
                arr[j] = temp;
            }
        }
        
        temp = arr[pivotIndx];
        arr[pivotIndx] = arr[indx + 1];
        arr[indx + 1] = temp; 

        quick_sort(arr, start, pivotIndx - 1);
        quick_sort(arr, pivotIndx + 1, end);
    }
}

void merge_sort(int arr[], int start, int end) {
    if (start < end) {
        int i, j, k, mid;

        mid = (start + end) / 2;

        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);

        int temp[end - start + 1];

        i = start, j = mid + 1, k = 0;

        while (i <= mid && j <= end) {
            if (arr[i] < arr[j]) {
                temp[k] = arr[i];
                k++;
                i++;
            }
            else {
                temp[k] = arr[j];
                k++;
                j++;
            }
        }
        while (i <= mid) {
            temp[k] = arr[i];
            k++;
            i++;
        }
        while (j <= end) {
            temp[k] = arr[j];
            k++;
            j++;
        }

        for (i = 0; i < k; i++) {
            arr[start + i] = temp[i];
        } 
    }
}