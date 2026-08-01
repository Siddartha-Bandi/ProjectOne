#include <stdio.h>

int partition(int arr[], int low, int high);
void qs(int arr[], int low, int high);

void swp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qs(int arr[], int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swp(&arr[i], &arr[j]);
        }
    }

    swp(&arr[low], &arr[j]);
    return j;
}

int main() {
    int arr[50], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 50) {
        printf("Invalid input or size exceeds array limit.\n");
        return 1;
    }
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qs(arr, 0, n - 1);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}