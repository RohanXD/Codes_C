#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=1;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sqrt(i*(sum-i));
	}
	printf("Sum of first n numbers=%d",sum);
}
