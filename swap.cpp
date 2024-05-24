/*Swapping values*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the values to Swap:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swapped Values:%d %d",a,b);
	return 0;
}
