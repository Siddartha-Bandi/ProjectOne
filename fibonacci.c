#include <stdio.h>
int main(){
    int n, a=0, b=1, next=1,i;
    printf("Enter the number of terms You want in Fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci sequence: \n");
    printf("%d %d ", a, b);
    for(i=3; i<=n; i++){
        next = a + b;
        printf("%d\t", next);
        a = b;
        b = next;
    }
    return 0;
}