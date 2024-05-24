#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter Number of Elements:");
	scanf("%d",&n);
	int arr[n],size;
	// inputing array
	for (i=0;i<n;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nOriginal Elements:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	size=sizeof arr/sizeof arr[0];
	//iterating loop
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
			{	//swap if elements are not a position
				if (arr[j]>arr[i])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
	}
	//display array output
	printf("\nElements in ascending order:\n");
	for (i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
	
	return 0;
	getch();
}
