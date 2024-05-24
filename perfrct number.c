/*Perfect Number*/
#include <stdio.h>   
#include <conio.h>   
int main()   
{   
	int a,num,sum=0 ;     
	printf("Enter a number :");   
	scanf("%d", &num);    
	for(a=1;a<num;a++)   
  		{   
  			if(num%a==0)
			{     
    			sum+=a;
			}
		}	    
 	if(sum==num)
    	printf("\n%d is a Perfect Number",num) ;   
 	else
    	printf("\n%d is not the Perfect Number",num) ;   
	return 0 ;
	clrscr();
}
