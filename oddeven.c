#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number to check (even / odd)");
	scanf("%d",&a);
	if(a%2==0)
		printf("number is Even");
	else
		printf("Number is Odd");
	return 0;
	clrscr();
}
