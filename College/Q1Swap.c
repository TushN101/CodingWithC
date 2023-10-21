//Swap two variables with and without using a third variable
#include <stdio.h>
void main()
{
    //Using a third variable
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    int c;
    c=b;
    b=a;
    a=c;
    printf("The swapped values are %d and %d \n",a,b);
    
    //Without Using third variable
    int d,e;
    printf("Enter the value of d and e: ");
    scanf("%d %d",&d,&e);
    d=d+e;
    e=d-e;
    d=d-e;
    printf("The swapped values are %d and %d",d,e);
}