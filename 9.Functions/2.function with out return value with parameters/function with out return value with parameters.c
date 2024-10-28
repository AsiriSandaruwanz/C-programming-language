#include<stdio.h>
void find_average(int x,int y){
	int avg=(x+y)/2;
	printf("AVERAGE IS %d",avg);
}
int main (){
	int maths;
	int science;
	
	printf("enter the marks of maths:");
	scanf("%d",&maths);
	printf("enter the marks of science:");
	scanf("%d",&science);
	
	find_average(maths,science);
	return 0;
}