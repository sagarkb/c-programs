// program to make simple calculator
#include<stdio.h>

int main(){
    int num1, num2;
    char c;
    printf("enter numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("enter operation\n");
    scanf(" %c",&c); // IMPORTANT/////////////////////// note how extra space is given in " %c" to consume enter and then take input
    switch(c){
        case '+': printf( "addition= %d", (num1+num2)); break;
        case '-': printf( "subtraction=%d", (num1-num2)); break;
        case '*': printf( "multiplication=%d", (num1*num2)); break;
        case '/': printf( "division=%d", (num1/num2)); break;
        case '%': printf( "modulus=%d", (num1%num2)); break;
        default: printf("invalid operation");
    }
    return 0;
}