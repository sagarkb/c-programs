#include<stdio.h>

int main(){
    int x;
    int i=0;
    while(i<10){
        //x=++i;
        x=i++;
        printf("%d",x);
        printf("%d\n",i);
        
    }
    return 0;
}