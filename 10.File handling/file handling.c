#include<stdio.h>
  void writestudentinfo (){
  	char id[10];
  	char name[10];
  	int marks;
  	
  	printf("enter the id of the student:");
  	scanf("%s",id);
    printf("enter the name of the student:");
  	scanf("%s",name);
    printf("enter the marks of the student:");
  	scanf("%d",&marks);
  	
  	FILE *file;
  	file=fopen("result.txt","a+");
  	if (marks>=50){
	  	fprintf(file,"ID: %s NAME:%s MARKS: %d",id,name,marks);
    }else {
    	fprintf(file,"ID: %s NAME:%s MARKS: %d",id,name,marks);
    }
    fclose(file);
    printf("file Updated Successfully!!");
    
  
  
  void readstudentInfo () {
  	FILE *file;
  	file=fopen("result.txt","r");
  	char file_content[50];
  	//fgets(file_content,50,file); can use to read only one line
  	
  	char *result;
  	  do{
	     result=fgets(file_content,50,file);
	       if(result!=NULL){
	         printf("%s",file_content);
   	       }	
      }while(result!=NULL);
      
	  fclose(file);
	  printf("end of file");
  }
  
  int main (){
  	
  }
  
  
