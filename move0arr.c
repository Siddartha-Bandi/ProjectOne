#include<stdio.h>
int main(){
    int n,i,a[50],j=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }printf("After moving zeroes to end: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}