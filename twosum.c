#include <stdio.h>

int main() {
    int n;
    int nums[n],target;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    printf("Enter the Elements: \n");
    for (int i=0; i<n; i++) {
    scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: \n");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Pair found: values (%d, %d)\n", nums[i], nums[j]);
                return 0;
            }
        
        }
    }
    printf("No pair found.\n");
    return 0;
}
