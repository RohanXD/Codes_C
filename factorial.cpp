#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	long int c=1;
	printf("Enter a Valuse to get factorial of:");
	scanf("%d",&a);
	if (a>1)
	{
		for (b=1;b<=a;++b)
		{
			c=c*b;
		}
		printf("Factorial of %d is %d",a,c);
	}
}
