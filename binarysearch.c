#include<stdio.h>
int main(){
    int a[20],n,key,low,high,mid,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("Element found @ %d position\n",mid+1);
            return 0;
        }else if(a[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }printf("Element %d not in the array.\n",key);
    return 0;
}