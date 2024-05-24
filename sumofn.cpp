/*Program to find sum of n numbers*/
#include<stdio.h>
#include<conio.h>
int nsum(int p,int q)
{
	int sum=0;
	for (p=1;p<=q;p++)
	{
		sum+=p;
	}
	return sum;
}
int main()
{
	printf("\tThis will help you to find sum of n Numbers\n");
	int a,b,x;
	printf("Enter The last Range of number(n):");
	scanf("%d",&a);
	x=nsum(b,a);
	printf("Total Sum of n numbers is %d",x);
	return 0;
	
	
}
