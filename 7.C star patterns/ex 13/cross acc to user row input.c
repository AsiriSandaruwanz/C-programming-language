#include<stdio.h>
int main(){
	int input;
	int sp,row;
	int star;
	
	printf("enter the number of rows:");
	scanf("%d",&input);
	
	for(row=1;row<=input;row++){
		for(sp=1;sp<=row-1;sp++){
			printf(" ");
		}
		printf("*");
		
		for(sp=1;sp<=(((input-row)*2)-1);sp++){
			printf(" ");
		}
		if(row<input){
				printf("*");
			}
		
		printf("\n");
	}
	for(row=1;row<=input-1;row++){
		for(sp=1;sp<=((input-row)-1);sp++){
			printf(" ");
		}
		printf("*");
		for(sp=1;sp<=((2*row)-1);sp++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	
return 0;
}