/*Pascal triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int nrow;
	printf("Enter the Number of rows:");
	scanf("%d",&nrow);
	int row,space;
	for (row=0;row<nrow;row++)
	{
		for(space=nrow-row;space>=1;space--)
		{
			printf(" ");
		}
		int schar=1,cchar;
		int nume=row;
		int deno=1;
		for (cchar=0;cchar<=row;cchar++)
		{
			printf("%d ",schar);
			schar=schar*nume;
			schar=schar/deno;
			nume--;
			deno++;
		}		
		printf("\n");
	}
	return 0;
	clrscr();
}
