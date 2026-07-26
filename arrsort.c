#include<stdio.h>
int main(){
    int n,i,a[50],sort=1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            sort=0;
            break;
        }
    }
    if(sort)
    printf("Array is Sorted.\n");
    else
    printf("Array is not Sorted.\n");
    return 0;
}