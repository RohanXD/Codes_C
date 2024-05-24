/*Factor of a number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter a number to find factor:");
	scanf("%d",&a);
	printf("Factor of %d is:",a);
	for (b=1;b<=a;++b)
	{
		if(a%b==0)
		{
			printf(" %d ",b);
		}
	}
	return 0;
	clrscr();
}
