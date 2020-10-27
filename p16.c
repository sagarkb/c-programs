// seating arrangement
#include<stdio.h>

int main(){
	int testcase,seat;
    printf("number of testcases: ");
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
        printf("seat number: ");
		scanf("%d",&seat);
      
		switch(seat%6){
            
			case 0: printf("%d WS\n",seat+1);break;
			case 1: printf("%d WS\n",seat+11);break;
			case 2: printf("%d MS\n",seat+9);break;
			case 3: printf("%d AS\n",seat+7);break;
			case 4: printf("%d AS\n",seat+5);break;
			case 5: printf("%d MS\n",seat+3);break;
		}
	}
	return 0;
}