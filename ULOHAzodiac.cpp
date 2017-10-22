/*
* Author: Jozef Radic
* Date: 20-09-2017
* Description:
*
*/
#include <stdio.h>
#include <math.h>

int main () {
int month,day;
printf("Insert month of birth: ");
scanf("%d", &month);
printf("Insert day of birth ");
scanf("%d", &day);
{
				if (((day>=21)&& (month==1))||((day<=19 )&&(month==2 )))
				printf("YOU ARE A AQUARIUS");
				if (((day>=21) && (month==2)) || ((day<=20 ) && (month==3 )))
				printf("YOU ARE THE PISCES"); 
				if (((day>=21)&&(month==3))||((day<=20 )&&(month==4 )))
				printf("YOU ARE A ARIES");
				if (((day>=21) && (month==4)) || ((day<=20 ) && (month==5 )))
				printf("YOU ARE THE TAURUS"); 
				if (((day>=21)&&(month==5))||((day<=20 )&&(month==6 )))
				printf("YOU ARE THE GEMINI");
				if (((day>=21)  && (month==6)) || ((day<=20 ) && (month==7 )))
				printf("YOU ARE THE CANCER"); 
				if (((day>=21)&&(month==7))||((day<=20 )&&(month==8 )))
				printf("YOU ARE THE LEO");
				if (((day>=21) && (month==8)) || ((day<=20 ) && (month==9 )))
				printf("YOU ARE THE VIRGO"); 
				if (((day>=21)&&(month==9))||((day<=20 )&&(month==10 )))
				printf("YOU ARE THE LIBRA");
				if (((day>=21)&& (month==10)) || ((day<=20 ) && (month==11 )))
				printf("YOU ARE THE SCORPIO"); 
				if (((day>=21)&&(month==11))||((day<=20 )&&(month==12 )))
				printf("YOU ARE THE SAGGITARIUS");
				if (((day>=21) && (month==12)) || ((day<=20 ) && (month==1 )))
				printf("YOU ARE THE CAPRICORN"); 
				
				}
}
			
