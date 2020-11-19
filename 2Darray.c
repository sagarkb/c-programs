#include<stdio.h>

void main(){
    int n, m;
    printf("enter a and m: ");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("enter elements: ");
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix is:\n ");
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            printf("%d ",arr[i][j]);
        }
        printf(" \n");
    }
}