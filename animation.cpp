#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
   int i, rows = 10;
   printf("Wait for Ten Seconds: \n");
   Sleep(10000);
   for (i = 1; i <= rows; ++i)
   {
      {
         Sleep(500);
         printf("So ja Madarchod");
         Sleep(500);
         system("cls");
      }
   }
   return 0;
}