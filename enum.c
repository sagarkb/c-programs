#include<stdio.h>

enum week{Mon,Tue,Wed,Thurs,Fri,Sat};

int main(){ 
    enum week day;
    day=Fri;
    printf("%d",day);

    return 0;
}