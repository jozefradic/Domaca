#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
	char name[20];
	int age;
	float salary;
}person;

int main()
{
	srand(time(NULL));
	person emp1,emp2;
	strcpy(emp1.name, "Viktor");
	emp1.age=32;
	emp1.salary=1508.13;
	strcpy(emp2.name, "Domninika");	
	emp2.age=30;
	emp2.salary=1499.99;
	
	printf("Name: %s, age: %d, salary: %1.2f",emp1.name, emp1.age, emp1.salary);
	
	//pole zamestnancov
	person employees[20];
	printf("\nEnter name: ");
	scanf("%s", &employees[0].name);
		printf("\nEnter age: ");
	scanf("%d", &employees[0].age);
		printf("\nEnter salary: ");
	scanf("%f", &employees[0].salary);
	
	int i,j;
	float count,roz=0;
	for(i=1;i<20;i++){
		for(j=0;j<6;j++)
		employees[i].name[j]=rand()%26+'A';
		employees[i].name[6]='\0';
		
		employees[i].age=rand()%33+18;
		employees[i].salary=rand()%1000+500;
					}
	for(i=0;i<20;i++)
	{
		printf("\nName: %s, age: %d, salary: %1.2f",employees[i].name, employees[i].age, employees[i].salary);
	}
	for(i=0;i<20;i++){
		count=employees[i].salary;
		roz=count+roz; }
		roz=roz/20;
		printf("\nAverage salery is: %1.2f",roz);
		
		int vek,vek1=0;
		for(i=0;i<20;i++){
		vek=employees[i].age;
		vek1=vek+vek1; }
		vek1=vek1/20;
		printf("\nAverage age is: %d",vek1);
		
		//ratanie veku
		int con=0;
		for(i=0;i<20;i++){
			if(employees[i].age>20 && employees[i].age<30)
			con++;}
		printf("\nAge from 20 to 30: %d",con);
		
				int cont=0;
		for(i=0;i<20;i++){
			if(employees[i].salary>1300)
			cont++;}
		printf("\nPerson earn more than 1300: %d",cont);
		
		
					
}
