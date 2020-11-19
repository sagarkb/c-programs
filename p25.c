// linear search
#include<stdio.h>

void main(){
    int n, found = 0,key,index;
    printf("enter n: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &array[i]);
    }
    printf("enter key ");
    scanf("%d",&key);
    for (int i = 0; i < n;i++){
        if(key==array[i]){
            found++;
            index = i;
        }
    }
    if(found==0){
        printf("-1");
    }else {
        printf("key %d found at index %d",key, index);
    }
}