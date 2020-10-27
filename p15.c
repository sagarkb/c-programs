// cost of balloons 
#include<stdio.h>

int main(){
	int price=0,participants,testcase,greenprice,purpleprice,q1,q2;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&greenprice,&purpleprice);
		scanf("%d",&participants);
		for(int j=0;j<participants;j++){
			scanf("%d%d",&q1,&q2);
			if(i%2==0){
				price=price+greenprice*q1+purpleprice*q2;
			}
			if(i%2==1){
				price=price+purpleprice*q1+greenprice*q2;
			}
			
		}
		printf("%d\n",price);
		price=0;
	}
	
	return 0;
}