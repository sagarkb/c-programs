// program to print pascal triangle
#include<stdio.h>

void pascal(int n){
    int x=1;
    for(int i=0;i<=n;i++){
        printf("%d \n",x);
        x=x*11;
    }
}

void main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    pascal(n);

}
