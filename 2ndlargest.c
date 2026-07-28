#include<stdio.h>
int main(){
    int n, a[20], i, second, largest;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

largest = second = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }if (largest == second) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element is %d\n", second);
    }

    
}