#include<stdio.h>
int main (){
	int count;
	int star;
	
	for(count=1;count<=5;count++){
		for(star=1;star<=count*2;star++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}