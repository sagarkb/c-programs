//program to read input until user enter a positive number
#include<stdio.h>

int main(){
    int i;
    // printf("enter a number: ");
    // scanf("%d",&i);
    // while(i<0){
    //     printf(" enter a number again: ");
    //     scanf("%d",&i);
    // }

    do{
        printf("enter a value: ");
        scanf("%d",&i);
    }while(i<=0);

    printf("you entered a positive number: %d ",i);
    
    return 0;
}