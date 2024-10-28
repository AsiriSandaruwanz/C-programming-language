#include<stdio.h>
int main(){
	int counter;
	int square=0;
	
	for(counter=1;counter<=10;counter++){
		square=counter*counter;
		printf("square of %d is: %d \n",counter,square);
	}
	return 0;
}