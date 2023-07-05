#include<stdio.h>
#include<string.h>

struct employee{
	
  int emp_id;
  char emp_name[20];
  int emp_age;
  char emp_roll[20];
  char emp_city[20];
  int emp_experience[20];
  char emp_company_name[20];
	
};

int main(){
	
	int n;
	printf("enter employee limit : ");
	scanf("%d",&n);
	
	struct employee emp[n];
	int i;
	
	for(i=0;i<n;i++){
		
		printf("enter employee id : ");
		scanf("%d",&emp[i].emp_id);
		
		printf("enter employee name : ");
		scanf("%s",&emp[i].emp_name);
		
		printf("enter employee age : ");
		scanf("%d",&emp[i].emp_age);
		
		printf("enter employee roll : ");
		scanf("%s",&emp[i].emp_roll);
		
		printf("enter employee city : ");
		scanf("%s",&emp[i].emp_city);
		
		printf("enter employee experience : ");
		scanf("%s",&emp[i].emp_experience);
		
		printf("enter employee company_name : ");
		scanf("%s",&emp[i].emp_company_name);
		
		printf("\n\n\n");
		
		printf("employee's id : %d\n",emp[i].emp_id);
		
		printf("employee's name : %s\n",emp[i].emp_name);
		
		printf("employee's age : %d\n",emp[i].emp_age);
		
		printf("employee's course : %s\n",emp[i].emp_roll);
		
		printf("employee's city : %s\n",emp[i].emp_city);
		
		printf("employee's std : %d\n",emp[i].emp_experience);
		
		printf("employee's school : %s\n\n\n",emp[i].emp_company_name);
		
		
	}
	
	
	
	return 0;
}