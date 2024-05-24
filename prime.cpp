/*Prime Number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\tProgram to check Prime Number\n ");
	int a,b,c=0;
	printf("Enter a number :");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Prime Number\n");
	}
	else
	{
		printf("Not a prime Number");
	}
	return 0;
	
}
