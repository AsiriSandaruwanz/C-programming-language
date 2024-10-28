#include<stdio.h>
int main(){
	int count;
	int sp;
	int star;
	
	for(count=1;count<=4;count++){
		for(sp=1;sp<=4-count;sp++){			
			printf(" ");
		}
		for(star=1;star<=count;star++){
			printf("*");
			if(star<count){
				printf(" ");
			}
		}
		
		printf("\n");
	}
	return 0;
}