/*Greatest common Divisor (GCD)*/
#include<stdio.h>
#include<conio.h>
int main()

{
	printf("This program will help to find Greatest Common Divisor (GCD)\n ");
	int a,b,c,u,v,temp;
	printf("Enter two numbers two find GCD:");
	scanf("%d%d",&a,&b);
	while( b != 0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	printf("GCD of %d and %d is: %d",a,b,v);
	return 0;
	clrscr();
	
}
