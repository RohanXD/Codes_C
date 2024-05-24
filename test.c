#include<stdio.h>
#define r=3
#define c=3
void out(a[3][3]);
int main()
{
	int i,j;
	printf("Enter:");
	int a[r][c];
	printf("Enter Array:");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("a%d%d:",i+1,j+1);
			scanf("%d",a[i][j]);
		}
	}
	out(a);
	
	
}
void out(a[r][c])
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d %d:",i,j);
		}
	}	
}
