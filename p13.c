// program to check whethet a number is palindrome or not
#include<stdio.h>

int main(){
    int originalnumber,samenumber,reversenumber=0,digit=0;
    printf("enter number : ");
    scanf("%d",&originalnumber);
    samenumber=originalnumber;
    // while(originalnumber>10){
    //     int remainder=originalnumber%10;
    //     originalnumber/=10; 
    //     digit++;
    // } digit++;
    // originalnumber=samenumber;
    // for(int i=1;i<=digit;i++){
    //     int remainder=originalnumber%10;
    //     reversenumber=reversenumber*10+remainder;
    //     originalnumber=originalnumber/10;
    // }
    while(originalnumber>0){
        int remainder=originalnumber%10;
        reversenumber=reversenumber*10+remainder;
        originalnumber=originalnumber/10;
        printf("reverse= %d , originalnumber=%d \n", reversenumber,originalnumber );
      }
     if(reversenumber==samenumber){
        printf("number is palindrome");
    }else
    {
        printf("number is not palindrome");
    }
     return 0;
}