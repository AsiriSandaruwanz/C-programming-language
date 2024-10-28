#include<stdio.h>
int main (){
	int counter;
	
	for(counter=1;counter<=100;counter++)
	{
	  if(counter%3==0){
          printf("%d \n",counter);
      }
	}
	return 0;
}