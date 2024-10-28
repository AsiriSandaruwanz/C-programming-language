#include<stdio.h>
int main (){
	int input;
	int row;
	int sp;
	int star;
	
	printf("enter the number of rows that you want");
	scanf("%d",&input);
	
	for(row=1;row<=(input-1);row++){
		for(star=1;star<=row;star++){
			printf("*");
		}
		for(sp=1;sp<=(input-(row-1))*2;sp++){
			printf(" ");
		}
		for(star=1;star<=row;star++){
			printf("*");
		}
		
		printf("\n");
	}
	for(row=1;row<=((input*2)+2);row++){
		printf("*");
	}
	printf("\n");
	return 0;
}