#include <stdio.h>
void inp(int x[][10],int m,int n);
void out(int y[][10],int m,int n);
int main() 
{
  int r, c, i, j, cho, a[10][10], b[10][10], sum[10][10],sub[10][10];
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("\nEnter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  inp(a,r,c);
  out(a,r,c);
  printf("\nEnter elements of 2nd matrix:\n");
  inp(b,r,c);
  out(b,r,c);
  printf("1. Add Matrix\n\n2. Subtract Matrix\n");
  scanf("%d",&cho);
  if(cho==1)
	{
  		printf("\nSum of two matrices:\n\n");
  		for (i = 0; i < r; ++i)
  		{
  			for (j = 0; j < c; ++j) 
			{
    			sum[i][j] = a[i][j] + b[i][j];
    		}
  		}
		out(sum,r,c);  
  	}
  
  else
  	{
  		printf("\nSubtraction of two matrices:\n\n");
  			for (i = 0; i < r; ++i)
  			{
  				for (j = 0; j < c; ++j) 
				{
  		  			sub[i][j] = a[i][j] - b[i][j];
   		 		}
  			}
  		out(sub,r,c);
	}
    return 0;
} 
  

void inp(int x[][10],int m,int n)
{
	int i,j;
	for (i = 0; i < m; ++i)
    {
    	for (j = 0; j < n; ++j) 
		{
      		printf("Enter element a%d%d: ", i + 1, j + 1);
      		scanf("%d", &x[i][j]);
    	}
	}	
}
void out(int y[][10],int m,int n)
{
	int i,j;
	for (i = 0; i < m; ++i)
    {
    	for (j = 0; j < n; ++j) 
		{
      		printf("%d\t",y[i][j]);
      		if (j == n - 1) 
	  		{
        		printf("\n\n");
      		}
    	}
	}	
}
