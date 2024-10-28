#include<stdio.h>
int main (){
	int input;
	int star;
	int sp;
	int row;
	
	printf("enter the number of rows that you want to print:");
	scanf("%d",&input);
	
	if(input%2!=0){
		for(row=1;row<=((input+1)/2);row++){
		      for(sp=1;sp<=(((input+1)/2)-row);sp++){
      			printf(" ");
      		  }
      		  for(star=1;star<=row;star++){
  		      	printf("*");
  		      }
  		      printf("\n");
     	}
	    for(row=1;(((input+1)/2)-row);row++){
    		  for(sp=1;sp<=row;sp++){
  		    	printf(" ");
  		      }
			  for(star=1;star<=(((input+1)/2)-row);star++){
  				printf("*");
  			} 
			printf("\n");   		    
    	}	
	}else{
		printf("please enter a valid numbe of rows in odd\n");
	}
	return 0;
}