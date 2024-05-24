//Largest in array
#include<stdio.h>

int main()
{
	int n;
	printf("Enter Number of value being inserted:");
	scanf("%d",&n);
	int a[n],i,num=1,max,flag=0;
	for(i=0;i<n;++i)
	{
		printf("Enter value number %d:",num);
		scanf("%d",&a[i]);
		num++;
	}
	max=a[0];
	for(i=0;i<n;++i)
	{
		if(max<a[i])
			max=a[i];
			flag=1;
			
	}
	if(flag==1)
		printf("Largest number in Enterd values is %d",max);
}
