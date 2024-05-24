//Display and Counting odd and even numbers in Array 
#include<stdio.h>
void inp(int arr[],int k);
void out(int arr[],int k);
int main()
{
 int s, i, a[10];
 int Even_Count = 0, Odd_Count = 0;
 printf("Enter the Size of list :  ");
 scanf("%d", &s);
 int arr[s]; 
 printf("\nEnter the list Elements:\n");
 inp(arr,s);
 printf("\nList of number:\n\n");
 out(arr,s);
 printf("\nList of Even number:");
 for(i = 0; i < s; i ++)
 {
   if(arr[i] % 2 == 0)
   {
	 Even_Count++;
     printf("%d ",arr[i]);
   }
 }
 printf("\n\nTotal Number of Even Numbers in this Array = %d ", Even_Count);
 printf("\n\nList of Odd number:");
 for(i = 0; i < s; i ++)
 {
   if(arr[i] % 2 != 0)
   {
	 Odd_Count++;
     printf("%d ",arr[i]);
   }
 }
 printf("\n\nTotal Number of Odd Numbers in this Array = %d ", Odd_Count);
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
