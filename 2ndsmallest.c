#include<stdio.h>
int main(){
    int n,a[20],i,second,smallest;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    smallest=second=a[0];
    for(i=0;i<n;i++){
        if(a[i]<smallest){
            second=smallest;
            smallest=a[i];
        }else if(a[i]<smallest){
            second=a[i];
        }
    }
    if(second==smallest){
        printf("No second smallest element is found");
    }else{
        printf("Second smallest element is:%d\n",second);
    }
    return 0;
}