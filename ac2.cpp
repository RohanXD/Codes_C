#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x,sum,nr;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; 
	nr=1;
	for (i=1;i<n;i++)
	{
	  nr=nr*x/(float)i;
	  sum+=nr;
	}
	printf("\nThe sum  is : %f\n",sum);
	return 0;
} 
