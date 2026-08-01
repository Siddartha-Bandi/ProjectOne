#include <stdio.h>
#include <stdlib.h>

void merge(int left[], int left_size, int right[], int right_size, int a[]) {
    int i = 0, l = 0, r = 0;
    
    while (l < left_size && r < right_size) {
        if (left[l] < right[r]) {
            a[i] = left[l];
            l++;
        } else {
            a[i] = right[r];
            r++;
        }
        i++;
    }
    
    while (l < left_size) {
        a[i] = left[l];
        l++;
        i++;
    }
    
    while (r < right_size) {
        a[i] = right[r];
        r++;
        i++;
    }
}

void mergeSort(int a[], int n) {  
    int i, j = 0; 
    if (n <= 1)
        return;
        
    int mid = n / 2;
    int left[mid], right[n - mid];
    

    for (i = 0; i < n; i++) {
        if (i < mid) {
            left[i] = a[i];
        } else {
            right[j] = a[i];
            j++;
        }
    }
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(left, mid, right, n - mid, a);
}

int main() {
    int a[50], i = 0, n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n!= 1 || n > 50 || n <= 0) {
        printf("Invalid input or size exceeds array limit.\n");
        return 1;
    }
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    mergeSort(a, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}