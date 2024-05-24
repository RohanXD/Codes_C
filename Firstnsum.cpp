/*Sum of n numers*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=0;
	printf("Enter a value of n:");
	scanf("%d",&a);
	for (b=1;b<=a;++b)
	{
		c=c+b;
	}
	printf("Sum of First n Numbers is %d",c);
}
