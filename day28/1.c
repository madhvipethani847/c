#include<stdio.h>
#include<string.h>

struct Student{
	
  int stu_id;
  char stu_name[20];
  int stu_age;
  char stu_course[20];
  char stu_city[20];
  int stu_std;
  char stu_school[20];
	
};

int main(){
	
	int n;
	printf("enter student limit : ");
	scanf("%d",&n);
	
	struct Student stu[n];
	int i;
	
	for(i=0;i<n;i++){
		
		printf("enter student id : ");
		scanf("%d",&stu[i].stu_id);
		
		printf("enter student name : ");
		scanf("%s",&stu[i].stu_name);
		
		printf("enter student age : ");
		scanf("%d",&stu[i].stu_age);
		
		printf("enter student course : ");
		scanf("%s",&stu[i].stu_course);
		
		printf("enter student city : ");
		scanf("%s",&stu[i].stu_city);
		
		printf("enter student std : ");
		scanf("%d",&stu[i].stu_std);
		
		printf("enter student school : ");
		scanf("%s",&stu[i].stu_school);
		
		printf("student's id : %d\n",stu[i].stu_id);
		
		printf("student's name : %s\n",stu[i].stu_name);
		
		printf("student's age : %d\n",stu[i].stu_age);
		
		printf("student's course : %s\n",stu[i].stu_course);
		
		printf("student's city : %s\n",stu[i].stu_city);
		
		printf("student's std : %d\n",stu[i].stu_std);
		
		printf("student's school : %s\n\n\n",stu[i].stu_school);
		
		
	}
	
	
	
	return 0;
}