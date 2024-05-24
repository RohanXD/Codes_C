//Finding prime number in an array
#include<stdio.h>
int main() 
{
   int  i, s, j, flag;
   printf("Enter size of an array:");
   scanf("%d", &s);
   int arr[s];
   for (i = 0; i < s; i++) 
   {
		printf("\nEnter %d Element:",i+1);	
    	scanf("%d", &arr[i]);
   }
   printf("\nAll Prime Number in list is:");
   for (i = 0; i < s; i++) 
   {
       j = 2;
       flag = 1;
       while (j < arr[i]) 
	   {
           if (arr[i] % j == 0) 
		   {
               flag = 0;
               break;
           }
           j++;
       }
       if (flag == 1) 
	   {
           printf("%d ", arr[i]);
       }
       
   }
   return 0;
}
