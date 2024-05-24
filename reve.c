#include<stdio.h>
#include<conio.h>
void rev(int ar[], int k)
{
	int low=0 ,high=k-1,temp;
	while(low < high)
	{
		int temp = ar[low];
		ar[low] = ar[high];
		ar[high] = temp;
		low++;
		high--;
	}
}
void out(int ar[],int k)
{
	int i=0;
	for (i=0;i<k;i++)
	{
		printf("\n%d\n",ar[i]);
	}
}
int main()
{
	int i , n , k , temp;
	
	printf("Enter size of Array:");
	scanf("%d",&n);
	int ar[n];
	k= sizeof (ar)/sizeof (ar[0]);
	for ( i = 0 ; i < n ; i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&ar[i]);
	}
	printf("Original Array:\n");
	
	out(ar,k);
	
	rev(ar,k);
	
	printf("Reverse Array:\n");
	
	out(ar,k);
}
