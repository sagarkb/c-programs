// program to calculate sum of natural numbers 
#include<stdio.h>

int main(){
    int n, sum=0,i=1;
    printf("enter number: ");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum is %d",sum);
    return 0;
}