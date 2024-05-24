/*Combination nCr*/
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\tThis program will help you find the Combination\n");
	int n,r,a,b,c,x=1,y=1,z=1,s,d;
	printf("Enter the value of n in nCr:\t");
	scanf("%d",&n);
	printf("Enter the value of r in nCr:\t");
	scanf("%d",&r);
	if (n>=r)
	{
		for (a=1;a<=n;++a)
		{
			x=x*a;
		}
		printf("Factorial Value of n is:%d\n",x);
		for (b=1;b<=r;++b)
		{
			y=y*b;
		}
		printf("Factorial Value of r is:%d\n",y);
		for (c=1;c<=(n-r);++c)
		{
			z=z*c;
		}	
		printf("\nFactorial Value of n-r is:%d\n",z);
		s=x/(y*z);
		printf("\nFactorial Value of nCr is:%d\n",s);
	}
	else
		printf("r is greater than n");
	return 0;
	clrscr();
}
