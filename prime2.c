#include<stdio.h>

#include<conio.h>

void main()

{

     int ar[100],i,n,j,counter;

     

     printf("Enter the size of the array ");

     scanf("%d",&n);

     printf("\n Now enter the elements of the array");

    for(i=0;i<n;i++)

     {

           scanf("%d",&ar[i]);

     }

     

     printf(" Array is -");

     for(i=0;i<n;i++)
18
     {
19
           printf("\t %d",ar[i]);
20
     }
21
      
22
     printf("\n All the prime numbers in the array are -");
23
     for(i=0;i<n;i++)
24
     {
25
           counter=0;
26
           for(j=2;j<ar[i];j++)
27
           {
28
                 if(ar[i]%j==0)
29
                 {
30
                       counter=1;
31
                       break;
32
                 }
33
           }
34
           if(counter==0)
35
           {
36
                 printf("\t %d",ar[i]);
37
           }
38
   }
39
     getch();

}

