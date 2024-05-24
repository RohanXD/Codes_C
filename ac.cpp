#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int n)
{
	int a,c;
	for (a=1;a<=n;a++)
	{
		c=c*a;
	}
	return c;
}
int main()
{
	float cal,x,sum,nr;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n); 
	nr=1;
	for (i=0;i<=n;i++)
	{
	  nr=pow(x,i);
	  cal=nr/(float)fact(i);
	  sum=sum+cal;
	}
	printf("\nThe sum  is : %f\n",sum);
	return 0;
} 

