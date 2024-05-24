//Sum of two array in another array
#include<stdio.h>
void inp(int arr[],int k);
void out(int arr[],int k);
int main()
{
	int i,n;
	printf("Enter Size of list:");
	scanf("%d",&n);
	printf("\nEnter First List:\n");
	int ar1[n],ar2[n],sum[n];
	inp(ar1,n);
	printf("\nFirst List Element:\n\n");
	out(ar1,n);
	printf("\nEnter Second List:\n");	
	inp(ar2,n);
	printf("\nSecond List Element:\n\n");
	out(ar2,n);
	for(i=0;i<n;i++)
	{
		sum[i]=ar1[i]+ar2[i];
	}
	
	printf("\nSum of arrays:\n\n");	
	out(sum,n);
	getch();
	return 0;		
}
void inp(int arr[],int k)
{
	int i=0;
	while(i<k)
	{
		printf("\nEnter value %d:",i+1);
		scanf("%d",&arr[i]);
		i++;
	}	
}
void out(int arr[],int k)
{
	int i=0;
	while(i<k)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
}
