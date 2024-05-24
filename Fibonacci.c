/*Fibonacci series*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1=0,n2=1,n3,i,num;    
 	printf("Enter the number of elements:");    
	scanf("%d",&num);    
 	printf("\n%d %d",n1,n2); //print 1st and 2nd number
 	for(i=2;i<num ;++i)  // loop start from 2 cause 0 and 1 which are 1st and 2 nd number already printed
 	{    
  		n3=n1+n2;    
  		printf(" %d",n3);    
  		n1=n2;    
  		n2=n3;    
 	}	  
  	return 0;	
}
