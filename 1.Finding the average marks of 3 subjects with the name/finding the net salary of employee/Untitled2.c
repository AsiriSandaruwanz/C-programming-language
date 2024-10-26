#include<stdio.h>
void main(){
	char e_name[20];
	int b_salary;
	int n_of_hours;
	int rate_hour;
	
	printf("enter the name of the employee");
	scanf("%s",&e_name);
	printf("enter the basic salary of the employee");
	scanf("%d",&b_salary);
	printf("enter the number of hours that you have worked");
	scanf("%d",&n_of_hours);
	printf("enter the amount that pay for OT hours as the rate");
	scanf("%d",&rate_hour);
	
	float tax_amount=b_salary*0.06;
	int gross_salary=b_salary+(n_of_hours*rate_hour);
	float net_salary=gross_salary-tax_amount;
	
	printf("GROSS SALARY: %d",gross_salary);
	printf("TAX AMOUNT: %f",tax_amount);
	printf("NET SALARY: %f",net_salary);
	return 0;
	
}