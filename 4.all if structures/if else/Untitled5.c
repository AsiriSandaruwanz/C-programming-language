#include<stdio.h>
int main(){
	char e_name[20];
	int b_salary;
	int ot_hours;
	
	printf("enter the name of the employee");
	scanf("%s",&e_name);
	printf("enter the basic salary you gain");
	scanf("%d",&b_salary);
	printf("enter the number of ot hours that you have worked");
	scanf("%d",&ot_hours);
	
	int rate;
	if(ot_hours>=50){
		printf("your rate is 100/=\n");
		rate=100;
	}
	else{
		printf("your rate is 125/=\n");
		rate=125;
	}
	
	int final_salary=b_salary+(ot_hours*rate);
	
	printf("FINAL BILL AMOUNT: RS.%d./=\n",final_salary);
	return 0;
	}