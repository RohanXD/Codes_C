#include <stdio.h>
// Function to reverse elements of an array
void reverse(int arr[], int n)
{
	int low=0 ,high=n-1,temp;
	while(low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}

int main(void)
{
	int s,i;
	printf("Enter number of element:");
	scanf("%d", &s);
	int arr[s];
	for (i = 0; i < s; i++)
	{
		printf("\nEnter %d element:", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\nOriginal Array:\n\n");
	for (i = 0; i < s; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nReversed array:\n\n");
	reverse(arr, s);
	for (i = 0; i < s; i++)
	{
		printf("\%d ", arr[i]);
	}
	getch();
	return 0;
}
