#include<stdio.h>
int main () {
	int row;
	int count;
	int sp;
	int star;
	
	printf("Star diamond only can have be odd number of rows:");
	scanf("%d",&row);
	
	if(row%2!=0){
		for(count=1;count<=((row+1)/2);count++){
		   	    for(sp=((row+1)/2);sp>count;sp--){
		         	printf(" ");
		        }
		        for(star=1;star<=((count*2)-1);star++){
        			printf("*");
        		}
				printf("\n");	
		}
		for(count=1;count<=(((row+1)/2)-1);count++){
			    for(sp=1;sp<=count;sp++){
    				printf(" ");
    			}
    			for(star=1;star<=(row-count)-count;star++){
			    	printf("*");
			    }
			    printf("\n");
		}

	}else{
		printf("please try again with odd number of rows");
	}
	return 0;
}