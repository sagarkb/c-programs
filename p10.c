// program to count number of integer in a number
#include<stdio.h>

int main(){
    int num, digit=0;
    printf("enter a number: ");
    scanf("%d",&num);
    while(num>10){
        int x=num;
        num=x/10;
        digit++;
    }
    printf("number of digit is : %d",digit+1);
    return 0;
}
