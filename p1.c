// program to find whether a given number is even or odd
#include<stdio.h>

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }
    return 0;
}
