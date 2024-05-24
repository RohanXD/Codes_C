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
	nr=1;
	sum=1;
	for (i=1;i<=n-1;i++)
	{
	  nr=nr*x;
	  sum+=nr;
	}
	printf("\nThe sum  is : %f\n",sum);
	return 0;

} 
