// program to check whether a number is prime or not 
#include<stdio.h>

int main(){
    int i,n,x=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("number %d is not prime it is divisible by %d\n",n,i);
            x++;
            break;
        }
    }
    if(x==0){
        printf("number is prime");
    }else{
        printf("number is not prime");
    }
    
    return 0;
}