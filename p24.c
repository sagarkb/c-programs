// program to find max and min in array
#include<stdio.h>

void main(){
    int n,small,large;
    printf("enter value of n:");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n;i++){
        small = array[0];
        large = array[0];
        for (int j = 0; j < n-1;j++){
            if(large<array[j+1]){
                large = array[j + 1];
            }
        }
        for (int k = 0; k < n - 1;k++){
            if(small>array[k+1]){
                small = array[k + 1];
            }
        }
    }
    printf("small=%d and large=%d ", small, large);
}