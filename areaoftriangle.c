#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area,per;
	printf("Enter Sides of Triangle A,B,C:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	per=2*s;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n A=%f\n B=%f\n C=%f\n Per=%f\n Area=%f\n",a,b,c,per,area);
	return 0;
	clrscr();
}
