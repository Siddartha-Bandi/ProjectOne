#include<stdio.h>
int fact(int);
int main(){
    int n;
    long int f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %ld\n",n,f);
    return 0;
}
int fact(int n){
    if(n==1||n==0)
    return 1;
    else
    return n*fact(n-1);
}