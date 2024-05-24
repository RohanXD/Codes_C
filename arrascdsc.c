//Printing ascending and descending order in array
#include <stdio.h>
int i,j,temp;
void asc(int arr[],int n)
{
	for (i = 0; i < n; ++i) 
    {
 		for (j = i + 1; j < n; ++j)
        {
 			if (arr[i] > arr[j]) 
            {
 		        temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
 		}
    }
    printf("\nThe numbers arranged in ascending order are given below:\n\n");
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}
void desc(int arr[],int n)
{
	
 	for (i = 0; i < n; ++i) 
    {
 		for (j = i + 1; j < n; ++j)
        {
 			if (arr[i] < arr[j]) 
            {
 		        temp =  arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
 		}
    }
    printf("\n\nThe numbers arranged in Descending order are given below:\n\n");
    for (i = 0; i < n; ++i)
    {
    	printf("%d ", arr[i]);
	}
}
int main()
{
    int n;
    printf("Enter number values being inserted:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter Element %d:",i+1);
		scanf("%d", &arr[i]);
 	}
	asc(arr,n);
	desc(arr,n);
 	getch();
 	return 0;
}
