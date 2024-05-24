//Reversing an Array
#include<stdio.h>
void inp(int arr[],int k);
void out(int arr[],int k);
void rev(int arr[],int k);
int main()
{
	int n,i;
	printf("Enter Number of value being inserted:");
	scanf("%d",&n);
	int arr[n];
	inp(arr,n);
	printf("\nOriginal List of number:\n\n");
	out(arr,n);
	printf("\n\nReverse List of number:\n\n");
	rev(arr,n);
	out(arr,n);
	getch();
	return 0;
}
void inp(int arr[],int k)
{
	int i=0;
	while(i<k)
	{
		printf("\nEnter value of arr%d:",i+1);
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
}
void rev(int arr[],int k)
{
	int low=0,high=k-1,temp;
	while (low<high)
	{
		temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
