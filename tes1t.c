#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	scanf("%d%d",&r1,&c1);
	scanf("%d%d",&r2,&c2);
	while(r1!=r2 && c1!=c2)
	{
		scanf("%d%d",&r1,&c1);
		scanf("%d%d",&r2,&c2);
	}
	return 0;
}
