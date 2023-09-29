#include <stdio.h>
#include <math.h>
int main() 
{
   for(int i=1;i<=5;i++)
   {
       for(int j=i;j>0;j--)
       {
           printf("%d",j);
       }
       printf("\n");
   }
}
//1
//21
//321
//4321
//54321
