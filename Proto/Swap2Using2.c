#include <stdio.h>

int main() 
{
   int a,b;
   printf("Enter the two numbers you want to swap: ");
   scanf("%d %d",&a,&b);
   printf("Orignal Value of A is: %d \n",a);
   printf("Orignal Value of B is: %d \n",b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Swapped Value of A is: %d \n",a);
   printf("Swapped Value of A is: %d \n",b);
   return 0;
}
