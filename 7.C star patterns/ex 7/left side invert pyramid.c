#include<stdio.h>
int main (){
	int row;
	int star;
	
	for(row=1;row<=5;row++){
		for(star=5;star>=row;star--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}