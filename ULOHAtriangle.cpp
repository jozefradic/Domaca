/*
* Author: Jozef Radic
* Date: 20-09-2017
* Description:
*
*/
#include <ctype.h>
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("Insert side a= ");
	scanf("%f",&a);
	printf("Insert side b= ");
	scanf("%f",&b);
	printf("Insert side c= ");
	scanf("%f",&c);
	if(a+b>=c){
		printf("It is possible to construct");
			  }
	else{
		printf("Isn't possible to construct");
	}
	
}
