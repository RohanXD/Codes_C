#include<stdio.h>
#include<conio.h>
void rev(int ar[], int k)
{
	int i , j  , temp;
	for (i = 0 ; i < k ; i++)
	{
		for (j = i+1 ; j < k ; j++)
		{
			if( ar[i] > ar[j] ) 
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
void in(int ar[],int k)
{
	int i;
	for ( i = 0 ; i < k ; i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&ar[i]);
	}
}
void out(int ar[],int k)
{
	int i;
	for ( i = 0 ; i < k ; i++)
	{
		printf("\n%d\n",ar[i]);
	}
}
int main()
{
	int i , n , k ;
	
	printf("Enter size of Array:");
	scanf("%d",&n);
	int ar[n];
	k= sizeof (ar)/sizeof (ar[0]);

	in(ar,k);
	
	printf("Original Array:\n");

	out(ar,k);
	
	rev(ar,k);
	
	printf("Ascending Order:\n");
	
	out(ar,k);
}
