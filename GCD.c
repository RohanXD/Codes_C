/*Greatest common Divisor (GCD)*/
#include<stdio.h>
#include<conio.h>
int hcf(int a,int b);
int main()
{
	printf("This program will help to find Greatest Common Divisor (GCD)\n ");
	int a,b,c,GCD;
	printf("Enter two numbers to find GCD:");
	scanf("%d%d",&a,&b);
	GCD=hcf(a,b);
	printf("GCD of %d and %d is: %d",a,b,GCD);
	return 0;
	clrscr();
}
int hcf (int a,int b)
{
	int c,d;
	for (c=1;c<=a&&c<=b;c++)
	{
		if (a%c==0&&b%c==0)
			d=c;
	}
	return d;
}
