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

typedef struct{		//struktura kde sa zapise stlpec s original abecedou a druhy so zmenenou
 	char origin[2];
 	char code[2];} table;
 
int main ()
{
	int i,j,n=0;
	char c,p;
	FILE *f=fopen ("codeTable.txt", "r"); //  3 riadky otvorenia suborov 
	FILE *fw=fopen ("decoded.txt", "w");
	FILE *fd=fopen ("secretCode.txt", "r");
	
   table codeTable[36];		//velkost o rozmere jedneho stlpca

while(fscanf(f,"%s%s", &codeTable[n].origin, &codeTable[n].code)!=EOF){		//cyklus nacitania kazdeho stlpca do jedneho stringu
  	n++;} 
	  
while((c=fgetc(fd))!=EOF){		//vytiahne pismeno a porovna
	
 	if(isupper(c)){				//velke pismena,zacne prehladavat ak narazi na zhodu v zmenenom stlpci da poradie z pozicie I povodny znak
 		for(i=0;i<n;i++){ 
		   
   	    if(codeTable[i].code[0]==c){
 			    c=codeTable[i].origin[0];
 			    break; 
   	}
 	}  	 
 	}
 	if(islower(c)){		//male pismena,zacne prehladavat ak narazi na zhodu v zmenenom stlpci da poradie z pozicie I povodny znak
 		for(i=0;i<n;i++){
   	    	
   	    	if(codeTable[i].code[0]==toupper(c)){
   	    		c=tolower(codeTable[i].origin[0]);
   	            break;
 			}
 		  }  	 
 	}
 	putc (c, fw);	//vypise prelozeni text do suboru
}
   printf("Decoded text is in file DECODED.txt");
}
	
