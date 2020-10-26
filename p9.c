// program to print half pyramid with stars
#include<stdio.h>

int main(){
    // for(int i=1;i<=1;i++){
    //     for(int j=5;j>=1;j--){
    //         printf("_");
    //     }
    //     printf("*");
    //     for(int j=5;j>=1;j--){
    //         printf("_");
    //     }
    // }
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
        }
    return 0;
}   

//program to find full pyramid 
// int n;
//     printf("enter value of n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//         }