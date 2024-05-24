#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a Number to check(Positive/Negative):");
	scanf("%d",&a);
	if (a<0)
		printf("Number is Negative");
	else
		printf("Number is Positive");
	return 0;
	clrscr();
}
