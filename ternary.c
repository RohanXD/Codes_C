#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,result1,result2;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	result1= x>y ? x=y :
	printf("The result+1=%d \n", x);
	result2= x<y ? x=y :
	printf("The result+2=%d \n", y);
	getch();
}
