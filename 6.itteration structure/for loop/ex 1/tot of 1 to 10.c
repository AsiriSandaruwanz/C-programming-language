#include<stdio.h>
int main(){
	int counter;
	int tot=0;
	for(counter=1;counter<=10;counter++)
	{
	    tot=tot+counter;	
	}
	
	printf("THE TOTAL: %d",tot);
	return 0;
}