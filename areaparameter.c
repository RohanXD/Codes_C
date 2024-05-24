#include<stdio.h>
#include<conio.h>
int main()
{
	double a,b,area,para;
	int choice;
	printf("\t This will help you find area and parameter of rectangle:");
	printf("\n Enter the Length of Reactangle:\t ");
	scanf("%lf",&a);
	printf("\n Enter the Breath of Reactangle:\t ");
	scanf("%lf",&b);
	printf("\n Enter Your Choice: \n 1.Area:\n 2.Rectangle:\n ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			area=a*b;
			printf("\n Area of rectangle:%f",area);
			break;
		case 2:
			para=2*a+2*b;
			printf("\n Area of rectangle:%f",para);
			break;
		default:
			printf("\n Invalid Choice.");
			break;
	}
	return 0;
}
