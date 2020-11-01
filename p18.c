// program to swap two numbers
#include<stdio.h>

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main(){
    int x=10,y=20;
    swap(&x,&y);
    printf("x is: %d ,y is: %d",x,y);
}