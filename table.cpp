/*Table Generation for n number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,m;
	printf("Enter a Number:");
	scanf("%d",&a);
	for (b=1;b<=10;b++)
	{
		m=a*b;
		printf("%d x %d = %d\n",a,b,m);
	}
	return 0;
	
}
