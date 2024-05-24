#include<stdio.h>
#include<conio.h>
int main()
{
	float r,area,cir;
	printf("This will help you find Area and Circumference of Circle:");
	printf("\nEnter the Radius of Circle:\t ");
	scanf("%f",&r);
	area=(22/7)*(r*r);
	cir=2*(22/7)*r;
	printf("Area of Circle:%f",area);
	printf("\nCircumference of Circle:%f",cir);
	return 0;
}
