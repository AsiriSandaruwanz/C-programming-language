#include<stdio.h>
int main(){
	char c_name[20];
	int units;
	int rate;
	
	printf("enter the name of the customer");
	scanf("%s",&c_name);
	printf("enter the number of units");
	scanf("%d",&units);
	printf("enter the rate per unit");
	scanf("%d",&rate);
	
	int final_bill=units*rate;
	
	if(final_bill>1000){
	  printf("you have to pay the tax");
	  final_bill=final_bill+200; 
	}
	
	printf("FINAL BILL: %d",final_bill);
	return 0;
	
}