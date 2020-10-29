// program to print rectangle pattern using star
// #include<stdio.h>

// int main(){
//     int rows, columns;
//     printf("enter rows and columns: ");
//     scanf("%d%d",&rows,&columns);
//      for(int i=0;i<rows;i++){
//          for(int j=0;j<columns;j++){
//              printf("* ");
//          }printf("\n");
//      }
//     return 0;
// }

// program to print hollow rectangle pattern
// #include<stdio.h>

// int main(){
//     int rows,columns;
//     printf("enter rows and columns: ");
//     scanf("%d%d",&rows,&columns);
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(i==0||i==(rows-1)){
//                 printf("*");
//             }else if(j==0||(j==columns-1)){
//                  printf("*");
//             }else{
//                  printf(" ");
//                 }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }

// program to write inverted half pyramid
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             printf("*");
//         }
//         printf("\n");   
//     }
//     return 0;
// }

//program to print half pyramid after 180 degree rotation
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf("  ");
//         }
//         for(int k=0;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// half pyramid using numbers
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// program to print floyd's trinagle
#include<stdio.h>

int main(){
    int n, integer=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",integer);
            integer++;
        }
        printf("\n");
    }
    return 0;
}