// program to check whether a number is palindrome or not
#include<stdio.h>
#include<math.h>

int main(){
    int num,digit=0,sum=0;
    printf("enter a number : ");
    scanf("%d",&num);
    int num1=num;
    while(num>10){
        int x=num;
        num=x/10;
        digit++;
    } digit=digit+1;
    num=num1;
    for(int i=1;i<=digit;i++){
        int x=num%10;
        num=num/10;
        float power=pow(x,digit);
        printf(" x is %d digit is %d power is %d",x,digit,power);
        sum=sum+power;   
        printf("sum is : %d \n",sum);
    }
    if(sum==num1){
        printf("number is armstrong number!!!");
    }else{
        printf("number is not armstrong number");
    }
    return 0;
}