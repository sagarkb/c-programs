#include<stdio.h>

 int main() {
//     int ascii='a';
//     printf("%d",ascii);
        printf("%d\n",sizeof(char)); //=1
        printf("%d\n",sizeof(int)); //=4
        printf("%d\n",sizeof(short int)); //=2
        printf("%d\n",sizeof(long int)); //=4
        printf("%d\n",sizeof(float)); //=4
        printf("%d",sizeof(long double)); //=12
        printf("%d\n",sizeof(long)); //=4
       // printf("%d",sizeof(boolean)); no such data type
    return 0;
}   