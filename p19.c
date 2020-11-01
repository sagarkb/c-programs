// program to impement pow function 
#include<stdio.h>

int power(int num,int pow){
    long result=num;
    if(pow==1){
        return num;
    }
    for(int j=2;j<=pow;j++){
        result=result*num;
    }
    
    return result;
}

void main(){
    int num,pow;
    printf("enter number and power: ");
    scanf("%d%d",&num,&pow);
    long result=power(num,pow);
    printf("power is :%ld",result);
}