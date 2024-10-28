#include<stdio.h>
int main (){
	int count;
	int sp;
	int star;
	
	for(count=1;count<=4;count++){
		for(star=4;star>=count;star--){
			printf("*");
			if(star>count){
				printf(" ");
			}
		}
		
		printf("\n");
		
		for(sp=1;sp<=count;sp++){
			printf(" ");
		}
		
	}
	return 0;
}