#include<stdio.h>
int main(){
	int num[5]={25,35,45,55,65};
	int count;
	int tot=0;
	float avg;
	
	for(count=0;count<5;count++){
		tot=tot+num[count];
	}
	avg=tot/5;
	
	printf("The total is %d\n",tot);
	printf("The average is %.2f\n",avg);
	return 0;
}