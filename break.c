#include<stdio.h>

int main(){
    int i,n;
    for(i=0;i<15;i++){
        printf("enter positive number : ");
        scanf("%d",&n);
        if(n<0){
            printf("ooops, you entered a -ve number");
            break;
        }
    }
    return 0;
}