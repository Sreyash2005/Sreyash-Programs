#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int n);
int binary_searchNR(int arr[], int n, int num);
int binary_searchR(int arr[], int start, int end, int num);

int main() {}

int binary_searchNR(int arr[], int n, int num) {
    int start = 0, end = n - 1, mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (num > mid) {
            start = mid + 1;
        }
        else if (num < mid) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}

int binary_searchR(int arr[], int start, int end, int num) {
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (num > mid) {
            return binary_searchR(arr, mid + 1, end, num);
        }
        else if (num < mid) {
            return binary_searchR(arr, start, mid - 1, num);
        }
        else {
            return mid;
        }
    }

    return -1;
}