#include<stdio.h>  
  
int main()  
{  
    int a;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &a);  
  
    (a > 0) ?  
    (printf("%d is positive\n", a)) :  
    ( (a < 0) ?  
      (printf("%d is Negative\n", a)) :  
      (printf("%d is Zero\n", a))    
    );  
  
    return 0;  
}  
