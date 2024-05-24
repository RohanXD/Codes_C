#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,flag;
	printf("Enter Number of Elements:");
	scanf("%d",&n);
	int arr[n],size;
	// inputing array
	for (i=0;i<n;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Arra is :\n");
	for (i=0;i<n;i++)
	{
		printf("\n%d\n",arr[i]);
	}
	getch();
	printf("Prime Numbers in Array:\n");
	for (i=0;i<n;i++)
	{
		for (j=2;j<arr[i];j++)
		{	
			if(arr[i]%j==0)
			{
				flag=1;
				break;
			}
			else
				flag=0;
		}
		if (flag==0)
		{
			printf("\n%d\n",arr[i]);
		}
	}

	getch();
	return 0;
}
