#include<stdio.h>

int main(){
    //print fahrenheit to celsius from 0 upto 300
    //int fa=0; ce;
    float fa=0,ce;
    while(fa<=300){
    ce=(float)(fa-32)*5/9;
    printf("fahrenheit %.2f and celsius is : %.2f \n",fa,ce);
    fa+=20;   
    }
    return 0;
}