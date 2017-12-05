/*
* Author: Jozef Radic
* Date: 27-11-2017
* Description:
*
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct{		
 	char a[100];
 	char b[100];} rectangle;
 	
 	int main ()
{
	int i,a=0,b=0,n=0,o=0,s=0;
	FILE *f=fopen ("rectanglesides.txt", "r"); 
	FILE *fw=fopen ("rectangle.txt", "w");

 	rectangle rectangleSide[100];
 	
 	while(fscanf(f,"%s %s", rectangleSide[n].a, rectangleSide[n].b)!=EOF){
	 n++;  } 
	
	 for(i=0;i<n;i++){
	 
	a=atoi(rectangleSide[i].a);
	b=atoi(rectangleSide[i].b);
	o=2*(a+b);
	s=a*b;
	fprintf(fw, "a:%d b:%d o=%d s=%d\n",a,b,o,s);
	 }	
	printf("Result is in rectangle.txt");
	fclose (f);
}

