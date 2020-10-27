// program to print pyramid pattern using stars
#include<stdio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1; j<=n-i-1; j++){
            printf(" ");
        } 
        for(int k=1;k<=2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}