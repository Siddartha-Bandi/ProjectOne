#include <stdio.h>
int main() {
    int n,key,i,found=0;
    printf("Enter the numbers of Elements: \n");
    scanf("%d",&n);
   
    int arr[n];
    printf("Enter the %d Elements: \n",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
   
    printf("Enter elements to search: ");
    scanf("%d",&key);
   
    for (int i=0;i<n;i++){
    if (arr[i]==key) {
        printf("Element %d found at posn %d\n",key,i+1);
               found=1;
               break;
            }
        }
    if(!found){
            printf("Element %d not found in the array\n",key);
        }
    return 0;
}
