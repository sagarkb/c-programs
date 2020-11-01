#include<stdio.h>

 void main(){
//     int arr[4]={10,20,30,40};
//     printf("%d",arr[2]);

    int n;
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
     for(int i=0;i<n;i++){
        //printf("%d ",&array[i]);   provides address of each variable in an array!!!!
        printf("%d ",array[i]);
    }
    
}