//program to find largest number between 3 given numbers

#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("enter three numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
    (n1>n2)?(n1>n3)?printf("%d is greatest",n1):printf("%d is greatest",n3):(n2>n3)?printf("%d is greatest",n2):printf("%d is greatest",n3);
    return 0;
}