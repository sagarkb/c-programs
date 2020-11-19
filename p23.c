// program to print max and min element of array
#include<stdio.h>

void main(){
    int n;
    int max,min;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
       
        for(int j=0;j<n;j++){
            if(array[i]<array[j]){
                max=array[j];
            }
            if(array[j]>array[i]){
                min=array[i];
            }else{
                min=array[j];
            }
        }
    }

    printf("max is :%d and min is %d",max,min);

}
