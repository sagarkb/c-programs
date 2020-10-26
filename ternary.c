#include<stdio.h>

// int main(){
//     // int num;
//     // printf("enter a number :");
//     // scanf("%d",num);
//     // (num%2==0)?printf("divisible"):printf("not divisible");
//     int n1=5, n2=10,max;
//     max=(n1>n2)?n1:n2;
//     printf("largest number is : %d",max);
//     return 0;
// }

// program to find even number or odd

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    // if(num%2==0){
    //     printf("number is divisible");
    // }else {
    //     printf("number is not divisible");
    // }
    (num%2==0)?printf("divisible"):printf("not divisible");
    return 0;
}