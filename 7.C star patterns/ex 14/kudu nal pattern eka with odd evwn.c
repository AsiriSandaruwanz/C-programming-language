#include<stdio.h>
int main (){
	int i,r,j,s;
	
	printf("enter the number of rows that you want:");
	scanf("%d",&i);
	
	for(s=1;s<=i;s++){
			printf("*");
		}
	printf("\n");
	
	if(i%2==0){
	   
	   for(r=1;r<=((i/2-1));r++){
          printf("*");
		  for(j=1;j<r;j++){
			  printf(" ");
		  }
		  printf("*");
		  
          for(j=1;j<=(i-(2*(1+r)));j++){
		      printf(" ");
	      }
	      printf("*");
	      
          for(j=1;j<r;j++){
			  printf(" ");
		  }	
		  printf("*");
		  printf("\n");
		  		
	  }
	 
	  	for(r=1;r<=((i/2)-1);r++){
          printf("*");
		  for(j=1;j<=(i-((i/2)+(r+1)));j++){
			  printf(" ");
		  }
		  printf("*");
		  
          for(j=1;j<=((r*2)-2);j++){
		      printf(" ");
	      }
	      printf("*");
	      
          for(j=1;j<=(i-((i/2)+(r+1)));j++){
			  printf(" ");
		  }	
		  printf("*");
		  printf("\n");
	  }
	  for(s=1;s<=i;s++){
			printf("*");
      }
      return 0;
	}else{
	
		i=(i-1)/2;
	for(r=1;r<=((i*2)+1);r++){
			printf("*");
		}			
		printf("\n");
		for(r=1;r<=(i-1);r++){
			printf("*");
			for(j=1;j<=(r-1);j++){
				printf(" ");
			}
			printf("*");
			for(j=1;j<=(((i-r)*2)-1);j++){
				printf(" ");
			}
			printf("*");
			for(j=1;j<=(r-1);j++){
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		printf("*");
		for(r=1;r<=i-1;r++){
			printf(" ");
		}
		printf("*");
		for(r=1;r<=i-1;r++){
			printf(" ");
		}
		printf("*");
		printf("\n");
		
	    for(r=1;r<=(i-1);r++){
			printf("*");
			for(j=1;j<=(i-(r+1));j++){
				printf(" ");
			}
			printf("*");
			for(j=1;j<=(r+(r-1));j++){
				printf(" ");
			}
			printf("*");
			for(j=1;j<=(i-(r+1));j++){
				printf(" ");	
			}
			printf("*");
			printf("\n");
		}
		for(r=1;r<=((i*2)+1);r++){
			printf("*");
		}		
		
	}
	  return 0;
	
}