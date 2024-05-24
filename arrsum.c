//Sum Of all elemnts in array
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number of value being inserted:");
	scanf("%d",&n);
	int arr[n],i,sum=1;
	for(i=0;i<n;++i)
	{
		printf("\nEnter value of arr%d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nList of number:\n\n");
	for(i=0;i<n;++i)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;++i)
	{
		sum=sum+arr[i];
	}
	printf("\n\nSum of all element in List:%d",sum);
	getch();
	return 0;
}
