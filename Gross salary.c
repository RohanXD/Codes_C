//This program will help you to find the gross salary of the employee
#include<stdio.h>
#include<conio.h>
int main()
{
	double bs,hra,da,gs;
	printf("Enter Your Basic Salary: \t");
	scanf("%lf",&bs);
	if(bs<=1500){
		hra=(bs*10)/100;
		da=(bs*90)/100;
	}
	else{
		hra=500;
		da=(bs*98)/100;
	}
	gs=bs+hra+da;
	printf("\n Basic Salary=%f",bs);
	printf("\n House Rental Allowance =%f",hra);
	printf("\n Dearness Allowance=%f",da);
	printf("\n Gross Salary=%f",gs);
}
