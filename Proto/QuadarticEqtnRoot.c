#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c;
    float x1,x2;
    printf("General Quadratic Equation ax2+bx+c=0 \n");
    printf("Enter the value of a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("%f \n",x1);
    printf("%f \n",x2);
    return 0;
}
