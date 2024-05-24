/*Combination nCr*/
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int a,c=1;
	for (a=1;a<=n;++a)
		c=c*a;
	return c;
}
int main()
{
	printf("\tThis program will help you find the Combination\n");
	int n,r,x,y,z,s;
	printf("Enter the value of n in nCr:\t");
	scanf("%d",&n);
	printf("Enter the value of r in nCr:\t");
	scanf("%d",&r);
	if (n>=r)
	{
		x=fact(n);
		y=fact(r);
		z=fact(n-r);
		s=x/(y*z);pas
		printf("Factorial Value of n is:%d\n",x);
		printf("Factorial Value of r is:%d\n",y);
		printf("Factorial Value of n-r is:%d\n",z);
		printf("Value of nCr is:%d",s);
	}
	else 
		printf("Valuse of r is greater then n");
	return 0;
	clrscr();
}
