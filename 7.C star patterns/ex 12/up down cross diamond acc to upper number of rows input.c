#include<stdio.h>
int main(){
	int input;
	int sp;
	int star;
	int row;
	
	printf("enter the upper number of rows:");
	scanf("%d",&input);
	
	for(row=1;row<=input;row++){
		for(sp=1;sp<=row-1;sp++){
			printf(" ");
		}
		for(star=1;star<=(input+1)-row;star++){
			printf("*");
			if(star<=input-1){
				printf(" ");
			}
		}
		printf("\n");
   	}
   	for(row=1;row<=input-1;row++){
	   	for(sp=1;sp<=(input-(row+1));sp++){
	   		printf(" ");
	   	}
	   	for(star=1;star<=row+1;star++){
	   		printf("*");
	   		if(star<=row){
				printf(" ");
			}
	   	}
	   	printf("\n");
	   	
    }
    printf("\n");
	return 0;
}