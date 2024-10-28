#include<stdio.h>
int main(){
	int count;
	int sp;
	int star;
	
	for(count=1;count<=5;count++){
	     for(sp=1;sp<=10-(count*4);sp++){
     		printf(" ");
     	}
     	for(star=1;star<=count;star++){
	     	printf("*");
        }
        printf("\n");
	}
	return 0;
}