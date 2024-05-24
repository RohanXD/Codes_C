#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Numbers to check who is greatest:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && b>c)
		printf("%d is Greatest",a);
	else if (a<b && a>c) 
		printf("%d is Greatest",b);
	else 
		printf("%d is Greatest",c);
	return 0;
	clrscr();
}
