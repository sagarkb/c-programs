// binary search

#include<stdio.h>

void main(){
    int n, key, found = 0;
    printf("enter a no: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements ");
    for (int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key: ");
    scanf("%d", &key);
    if(key>arr[n/2]){
        for (int i = n / 2; i < n;i++){
            if(key==arr[i]){
                found++;
            }
        }
    }else{
        for (int i = 0; i < n / 2;i++){
            if(key==arr[i]){
                found++;
            }
        }
    }
    
}

// will do after sorting algorithms.. 