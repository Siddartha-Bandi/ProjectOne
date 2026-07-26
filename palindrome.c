#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,j;
    printf("Enter a string: ");
    scanf("%s",str);
    j=strlen(str)-1;
    for(i=0;i<j;j--,i++){
        if(str[i]!=str[j]){
            printf("%s is not a palindrome.\n",str);
        return 0;
        }
    }
    printf("%s is a palindrome.\n",str);
    return 0;
}