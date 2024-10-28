#include<stdio.h>
int main (){
	int num[5]={25,35,45,55,65};
	int count;
	
	for(count=4;count>=0;count--){
		printf("The number: %d\n",num[count]);
	}
	return 0;	
	
}