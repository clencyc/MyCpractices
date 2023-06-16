#include <stdio.h>

int binarySearch(int arr[], int target, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearch(arr, target, mid + 1, high);
    } else {
        return binarySearch(arr, target, low, mid - 1);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int target = 5;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, target, 0, arrSize - 1);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
