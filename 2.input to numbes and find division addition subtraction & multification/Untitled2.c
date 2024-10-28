#include<stdio.h>
int main(){
	int num_1;
	int num_2;
	
	printf("enter the first number You need:");
	scanf("%d",&num_1);
	printf("enter the second number that you need:");
	scanf("%d",&num_2);
	
	int addition=num_1+num_2;
	int subtraction=num_1-num_2;
	int multification=num_1*num_2;
	float division=num_1/num_2;
	
	printf("Addition: %d",addition);
	printf("Substraction: %d",subtraction);
	printf("Multification: %d",multification);
	printf("Division: %f",division);
	return 0;
}