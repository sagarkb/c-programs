// program to  find factorial of a given number
#include<stdio.h>

int main(){
    int i,n;
    unsigned long long int fact=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        printf("%d\n",i);
    }
    printf("factorial is %lld",fact); /////////important: take data-type to store large factorial value
    return 0;
}