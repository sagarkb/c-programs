// #include<stdio.h>

// int max(int a,int b){
//     return (a>b)?a:b;
// }

// void main(){
//     int a=100,b=200;
//     int maximum=max(a,b);
//     printf("max is : %d",maximum);
// }

/// example of call by reference
#include<stdio.h>

void fun(int y){
    y=30;
}

void main(){
    int x=20;
    fun(x);
    printf("%d",x);
}
