#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
   char city[20];
   int pc;
}address_detail;

typedef struct{
   char name[20];
   int age;
   float salary;
   address_detail address;
} person;

int main()
{
   srand(time(NULL));
    
   person student[20];
   strcpy(student[0].name,"Sebastian"); student[0].age=35; student[0].salary=1452; 
   strcpy(student[0].address.city,"Kosice"); student[0].address.pc=92512;
   strcpy(student[1].name,"David"); student[1].age=45; student[1].salary=1471; 
   strcpy(student[1].address.city,"Kosice"); student[1].address.pc=04001;
   strcpy(student[2].name,"Filip"); student[2].age=30; student[2].salary=987; 
   strcpy(student[2].address.city,"Bardejov"); student[2].address.pc=82356;
   strcpy(student[3].name,"Janka"); student[3].age=19; student[3].salary=1203; 
   strcpy(student[3].address.city,"Levoca"); student[3].address.pc=14780;
   strcpy(student[4].name,"Denisa"); student[4].age=35; student[4].salary=859; 
   strcpy(student[4].address.city,"Kosice"); student[4].address.pc=90845;

   strcpy(student[5].name,"Dominik"); student[5].age=28; student[5].salary=1452; 
   strcpy(student[5].address.city,"Kosice"); student[5].address.pc=84652;
   strcpy(student[6].name,"Jan"); student[6].age=31; student[6].salary=1020; 
   strcpy(student[6].address.city,"Senica"); student[6].address.pc=71254;
   strcpy(student[7].name,"Tobias"); student[7].age=32; student[7].salary=456; 
   strcpy(student[7].address.city,"Senec"); student[7].address.pc=12387;
   strcpy(student[8].name,"Tereza"); student[8].age=41; student[8].salary=785; 
   strcpy(student[8].address.city,"Poprad"); student[8].address.pc=12874;
   strcpy(student[9].name,"Slavka"); student[9].age=20; student[9].salary=1025; 
   strcpy(student[9].address.city,"Kosice"); student[9].address.pc=68787;
   
   strcpy(student[10].name,"Samuel"); student[10].age=24; student[10].salary=1332; 
   strcpy(student[10].address.city,"Kosice"); student[10].address.pc=87458;
   strcpy(student[11].name,"Xenia"); student[11].age=22; student[11].salary=800; 
   strcpy(student[11].address.city,"Presov"); student[11].address.pc=8001;
   strcpy(student[12].name,"Daniel"); student[12].age=44; student[12].salary=1701; 
   strcpy(student[12].address.city,"Michalovce"); student[12].address.pc=07101;
   strcpy(student[13].name,"Branislav"); student[13].age=25; student[13].salary=1101; 
   strcpy(student[13].address.city,"Martin"); student[13].address.pc=41444;
   strcpy(student[14].name,"Simona"); student[14].age=32; student[14].salary=1045; 
   strcpy(student[14].address.city,"Kosice"); student[14].address.pc=04022;
   
   strcpy(student[15].name,"Dusan"); student[15].age=18; student[15].salary=697; 
   strcpy(student[15].address.city,"Michalovce"); student[15].address.pc=55654;
   strcpy(student[16].name,"Kamil"); student[16].age=28; student[16].salary=1500; 
   strcpy(student[16].address.city,"Kosice"); student[16].address.pc=04011;
   strcpy(student[17].name,"Michaela"); student[17].age=27; student[17].salary=1300; 
   strcpy(student[17].address.city,"Senec"); student[17].address.pc=92545;
   strcpy(student[18].name,"Roman"); student[18].age=18; student[18].salary=1005; 
   strcpy(student[18].address.city,"Presov"); student[18].address.pc=04001;
   strcpy(student[19].name,"Oliver"); student[19].age=30; student[19].salary=1206; 
   strcpy(student[19].address.city,"Kosice"); student[19].address.pc=04012;
   
   // TO DO
   
   // 1. write down name and city of all students
   
   int i,j;
   for(i=0;i<19;i++){
   
   	printf("Student %s live in %s\n ",student[i].name, student[i].address.city);
   }
   
   // 2. write down the name and salary of student with highest salary
   
	float pom=student[0].salary;
   for(i=1;i<19;i++){
   	if(pom<student[i].salary)
   	pom=student[i].salary;
   					}
   printf("Highest salary is %1.2f ",pom);
   
   // 3. write down all students from Kosice or Presov
   
   printf(" \nStudent from Presov or Kosice:");
   for(i=0;i<19;i++)
   	if(strcmp(student[i].address.city, student[19].address.city) == 0 || strcmp(student[i].address.city, student[18].address.city) == 0)
   	printf("%s,",student[i].name);
	   
   	
   
   // 4. write down all student that their salary is between 1000 and 1300
   
   printf("\nStudent with salary between 1000 and 1300: ");
   for(i=0;i<20;i++){
   	if(student[i].salary<1300 && student[i].salary>1000)
   	printf("%s,",student[i].name);
   					}
   
   
   // 5. calculate average age of all students
   
   		int vek,vek1=0;
		for(i=0;i<20;i++){
		vek=student[i].age;
		vek1=vek+vek1; }
		vek1=vek1/20;
		printf("\nAverage age is: %d",vek1);
   
   
   
   // 6. calculate average salary of student that are under 30 years old
   
   printf("\nAverage salary of student under 30 is: ");
   float rat=0,tem,dal=0;
   for(i=0;i<20;i++){
   		if(student[i].age<30){
		   
   		rat=student[i].salary;
   		tem=rat+tem;
   		dal++;
		   }
   }
   tem=tem/dal;
printf("%1.2f",tem);


   	
   	
    

   
   
   
   // 7. count number of students not from Kosice
   int con=0;
   printf("\nStudent not from Kosice: ");
      for(i=0;i<19;i++)
   	if(strcmp(student[i].address.city, student[19].address.city) == 1){
   		con++;
	   }
   	printf("%d",con);

   
   
   
   // 8. find and write down the oldest student
   int por=student[0].age;
   printf("\nOldest student is ");
   for(i=0;i<19;i++){
   	if(student[i].age>por)
   	por=student[i].age;
   }
   for(i=0;i<19;i++){
   	if(student[i].age==por)
   	printf("%s",student[i].name);
					}
   
   
   
   // 9. write down number of student that their name is longer than 7 characters
   int nam,poc=0;
   printf("\nStudents with longer name than 7ch are ");
   for(i=0;i<20;i++){
   nam=strlen(student[i].name);
   if(nam>7);
   poc++;
   					}
   					printf("%d",con);
   
   
   
   // 10. sort students by salary ascending and write down the list 
   
   printf("\nStudent salary: ");
    for(i=0;i<19;i++)
   	for(j=i+1;j<20;j++)
	   if(student[i].salary > student[j].salary){
	  		person temp;
   			temp=student[i];
   			student[i]=student[j];
   			student[j]=temp;
   												}
   			for(i=0;i<20;i++){
			  printf("%s,",student[i].name); }
			   
			   		   							
		   			   
   					
   
   
   
}
