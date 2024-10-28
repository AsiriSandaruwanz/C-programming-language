#include<stdio.h>
int main(){
	int counter;
	int prime;
	
	for(counter=1;counter<=100;counter++){
		for(prime=2;prime<counter;prime++){
			if(counter%prime==0)
			break;
		}
		if(counter==prime){
			printf("%d \n",counter);
		}
	}
	return 0;
}