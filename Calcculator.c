/*Calculator*/
#include<stdio.h>
#include<conio.h>
int main()
{

	double a;
	double b;
	char op;
	
	printf("Enter Fisrt Number (a): ");
	scanf("%lf", &a);
	printf("Enter the operator: ");
	scanf("%s", &op);
	printf("Enter Second Number (b): ");
	scanf("%lf", &b);
	
	if (op == '+'){
		printf("Addition of a & b %f", a+b);
	} else if (op == '-'){
		printf("Subtraction of a & b %f", a-b);
	} else if (op == '*'){
		printf("Multiplication of a & b %f", a*b);
	} else if (op =='/'){
		printf("Division of a & b %f", a/b);
	} else {
		printf("Invalid Operator");
	}
}
