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
	float a,b,c,d;
	printf("Insert side a= ");
	scanf("%f",&a);
	printf("Insert side b= ");
	scanf("%f",&b);
	printf("Insert side c= ");
	scanf("%f",&c);
if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
	printf("Its pythagora's triangle");
		}
else{
printf("It isnt pythagora's triangle");
	}
}
