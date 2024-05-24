/*Factorial*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
int fact(int q)
{
	int p, m = 1;
	for (p = 1; p <= q; p++)
	{
		m *= p;
	}
	return m;
}
int main()
{
	printf("\tThis program will help you find factorial of a Number\n");
	int a, c;
	printf("Enter a number to find its factorial:");
	scanf("%d", &a);
	if (a > 0)
	{
		c = fact(a);
		Sleep(1000);
		printf("Factorial of %d is: %d\n", a, c);
	}
	else
	{
		printf("Number is less than 0");
	}
	return 0;
}
