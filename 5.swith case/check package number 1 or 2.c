#include<stdio.h>
int main (){
	int p_number;
    
    printf("enter the name of the package:");
    scanf("%d",&p_number);
    
    int fee=0;
    switch(p_number){
    	case 1:
    	printf("you have selected our standard package");
    	fee=2500;
    	break;
    	
    	case 2:
    	printf("you have selected the premium package");
    	fee=5000;
    	break;
    	
    	default:
    	printf("please select the package type correctly");
    	return 0;
    	break;
    }
    int final_bill=(fee+20000);
    printf("FINAL BILL: %d",final_bill);
    return 0;
}