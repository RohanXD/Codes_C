#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,tot;
	float per;
	printf("Enter marks Obtained:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	tot=a+b+c+d+e;
	printf("Total marks Obtained:%d",tot);
	if(per>=60){
		printf("\n1st division:%f",per);
	}
	else if(per>=50&&per<60){
		printf("\n2nd division:%f",per);
	}
	else if(per>=40&&per<50){
		printf("\n3rd division:%f",per);
	}
	else {
		printf("\nYou failed:%f",per);
	}
	return 0;
}
