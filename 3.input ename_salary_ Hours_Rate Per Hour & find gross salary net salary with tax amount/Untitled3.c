#include<stdio.h>
int main(){
	char employee[50];
	int basic_salary;
	int nu_of_hours;
	int rate_hour;
	
	printf("Enter the name of the employee:");
	scanf("%s",employee);
	printf("enter the basic salary of the employee:");
	scanf("%d",basic_salary);
	printf("Enter the Number Of Hours That Employee has WOrked:");
	scanf("%d",nu_of_hours);
	printf("Enter the rate per Hours That Employee Get Paid:");
	scanf("%d",rate_hour);
	
	
	float tax_amount=basic_salary*0.06;
	int gross_salary=basic_salary+(nu_of_hours*rate_hour);
	float net_salary=gross_salary-tax_amount;
	
	printf("TAX AMOUNT: %f \n",tax_amount);
	printf("GROSS SALARY: %d \n",gross_salary);
	printf("NET SALARY: %f",net_salary);
	return 0;
}