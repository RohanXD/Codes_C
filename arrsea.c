//Searching an element in array
#include <stdio.h>
void inp(int arr[],int k);
void out(int arr[],int k);
int main() 
{
   int n, i, sea; 
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("\nEnter the array elements: \n");
   int arr[n];
   inp(arr,n);
   printf("\nList of Number:\n\n");
   out(arr,n);
   printf("\nEnter the item to be searched: ");
   scanf("%d", &sea);
   //Research starts from the index 0
   i = 0;
   while (i < n && sea != arr[i]) 
   {
      i++;
   }
   if (i < n) {
      printf("\nThe element is found in the position = %d", i + 1);
   } else {
      printf("\nElement not found!");
   }
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
	printf("\n");
}
