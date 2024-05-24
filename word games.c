/*Word Games*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20];
	int b;
	char c[20];
	printf("Enter Your First Name:");
	scanf("%s", a);
	printf("Enter Your Class 12th Percentage:");
	scanf("%d", &b);
	printf("Enter Your Favourite Male Celebrity First Name:");
	scanf("%s", c);
	
	printf("My name is %s \n", a);
	printf("I am %d percent idiot \n", b);
	printf("I want to kill %s \n", c);
	return 0;
}
