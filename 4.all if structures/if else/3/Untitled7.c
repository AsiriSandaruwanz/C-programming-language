#include<stdio.h>
int main (){
	char c_name[20];
	char p_name[20];
	int add_gb;
	
	printf("enter the customer name");
	scanf("%s",&c_name);
	printf("enter the package name");
	scanf("%s",&p_name);
	printf("enter the additional gb's that you have used");
	scanf("%d",&add_gb);
	

	
	int rate_gb=0;
	
	if(add_gb>=20){
		printf("rate per gb is 120/=");
		rate_gb=120;
	}else{
		printf("rate per gb is 80/=");
		rate_gb=80;
	}
	
	
	
	
	int monthly_usage=p_fee+(add_gb*rate_gb);
	float tax=0;
	
	if(monthly_usage>=5000){
		tax=0.08;
	}
	
	float final_bill=monthly_usage+(monthly_usage*tax);
	
	printf("FINAL BILL VALUE: RS.%f/=",final_bill);
	return 0;
	   

}