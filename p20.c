// program to print prime numbers between two given numbers:
#include<stdio.h>

void prime( int num1, int num2){
    int count=0;
    printf(" prime numbers between %d and %d is: ",num1,num2);
    for(int i=num1;i<=num2;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d ",i);
        }
        count=0;
    }

}

void main(){
    int num1,num2;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    prime(num1,num2);

}
