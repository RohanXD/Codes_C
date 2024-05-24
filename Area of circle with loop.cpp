#include<stdio.h>
#include<conio.h>
int main()
{
	double ar,r,p=3.142857;
	printf("Enter the radius of the Circle:");
	scanf("%lf",&r);
	while (r!=0.0)
	{
		if (r<0.0)		
		printf("Area is not Possible");
		else
		{
			ar=p*r*r;
			printf("Area of Circle=%f",ar);
			
		}
	}
	getch();
}
