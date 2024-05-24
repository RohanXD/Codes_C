/*Combination nPr*/
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\tThis program will help you find the Permutation\n");
	int n,r,a,b,c,x=1,y=1,s;
	printf("Enter the value of n in nPr:\t");
	scanf("%d",&n);
	printf("Enter the value of r in nPr:\t");
	scanf("%d",&r);
	if (n>=r)
	{
		for (a=1;a<=n;++a)
		{
			x=x*a;
		}
		printf("Factorial Value of n is:%d\n",x);
		for (c=1;c<=(n-r);++c)
		{
			y=y*c;
		}	
		printf("\nFactorial Value of n-r is:%d\n",y);
		s=x/(y);
		printf("\nFactorial Value of nPr is:%d\n",s);
	}
	else
		printf("r is greater than n");
	return 0;
	clrscr();
}
