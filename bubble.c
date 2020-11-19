// bubble sort
#include<stdio.h>

void main(){
    int n, temp;
    printf("enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements ");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("new sorted array is: ");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
}
