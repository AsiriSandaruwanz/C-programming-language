#include<stdio.h>
int main (){
	int num_1;
	int num_2;
	
	printf("enter the first number");
	scanf("%d",&num_1);
	printf("enter the second number");
	scanf("%d",&num_2);
	
	int tot=(num_1+num_2);
	
	if(tot%4==0){
		printf("The number you entered can be divided by 4");
	}
	
	else{
		printf("The number you entered can not be divided by 4");
	}
	
	
	printf("thanks for using our programn");
	return 0;
}