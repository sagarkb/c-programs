// program to print fibonacci series
#include<stdio.h>

int main(){
    int num, a0=1,a1=1;
    printf("enter number of series : ");
    scanf("%d",&num);
    printf(" the series is : %d %d ",a0,a1);
    for(int i=0;i<num;i++){
        int next=a0+a1;
        printf("%d ",next);
        a0=a1;
        a1=next;
        
    }
    return 0;
}
