#include<stdio.h>

int main(){
    int i,sum=0,n;
    for(i=0;i<15;i++){
        printf("enter a number");
        scanf("%d",&n);
        if(n<0)
         continue;
        sum+=n; 
    }
    printf("sum of positive number is: %d",sum);
    return 0;
}