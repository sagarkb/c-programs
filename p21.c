// program to claculate nCr
#include<stdio.h>

int combination(int num){
    long long int fact=1;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}

void main(){
    long long int nfact,rfact,subfact;int n,r,result;
    printf("enter n and r: ");
    scanf("%d %d",&n,&r);

    nfact=combination(n);
    rfact=combination(r);
    subfact=combination(n-r);

        result=nfact/(rfact*subfact);
    
    printf("factorial is: %d",result);
}
    