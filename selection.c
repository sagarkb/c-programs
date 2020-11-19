// selection sort
#include<stdio.h>

void main(){
    int n, temp;
    printf("enter a number: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array numbers: ");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1;i++){
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
        printf("new updated array is: ");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);  
    }
}

// find minimum , swap it with startinng of unsorted array ,then repeat this step until sorted