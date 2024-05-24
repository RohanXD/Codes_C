/*Sin and Cosine Of a number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b;
	double c;
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Enter Your Choice \n1.Sine \n2.Cosine\n");
	scanf("%d",&b);
	if(b==1)
	{
		c=sin(a);
		printf("%lf",c);
	}
	else
	{
		c=cos(a);
		printf("%lf",c);
	}
	return 0;
	clrscr();
}
