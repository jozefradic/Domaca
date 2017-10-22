#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
	srand(time(NULL));
	int arr[N];
	
	int i;
 for(i=0;i<N;i++){
      arr[i]=rand()%9999+10;
 }
 
 for(i=0;i<N;i++)		  { 
   printf("%d ", arr[i] );}
   {
   	int evenCount=0;	
	for(i=0;i<N;i++){
		if(arr[i]%2==0)
		evenCount++;
					}				
	printf("\nEven: %d, Odd: %d", evenCount, N-evenCount);
 	}
 	int oneDigit=0,twoDigit=0,threeDigit=0,forDigit=0;	
	for(i=0;i<N;i++){
		if(arr[i]<10)
		oneDigit++;
		
		if(arr[i]<100)
		
		twoDigit++;
		if(arr[i]<1000)
		threeDigit++;
		if(arr[i]>1000)
		forDigit++;
					}
				printf("\nOneDigit: %d, TwoDigit: %d, ThreeDigit: %d, ForDigit: %d", oneDigit, twoDigit, threeDigit, forDigit);	
int max;
 max=arr[0];
 for(i=1;i<N;i++){
    if(max<arr[i])
        max=arr[i];
 }
 printf("\nMax number: %d",max); 
 
 int min;
 min=arr[0];
 for(i=1;i<N;i++)  {
    if(min>arr[i])
        min=arr[i];}
        printf("\nMin number: %d",min);
  
  printf("\nArray from the end: ");
 for(i=N-1;i>=0;i--){
      printf("%d ",arr[i]);
 }
 printf("\nPalindroms are: ");
 int c1,c2,c3,c4;
 for(i=0;i<N;i++){
 c1=arr[i]/10;
 c2=arr[i]%10;
      if(c1==c2)
	  printf("%d ",arr[i]);}
 for(i=0;i<N;i++){
    c1=arr[i]/100;
    c3=arr[i]%10;
      if(c1==c3)
printf("%d ",arr[i]);}

	for(i=0;i<N;i++){ 
    c1=arr[i]/1000;
    c2=arr[i]/10;
	c3=arr[i]/100;
	c4=arr[i]%10;
      if(c1==c4 && c2==c3 )
	   printf("%d ",arr[i]);}  
 
 printf("\nNumbers devide with 7 are: ");
int nas=0;	
	for(i=0;i<N;i++){
		if(arr[i]%7==0)
		nas++;
}
printf("%d ",nas);

}
