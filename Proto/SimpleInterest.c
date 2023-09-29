#include <stdio.h>

int main() 
{
    float principal;
    float rate;
    float year;
    float simpleinterest;
    printf("Enter the principal amount : ");
    scanf("%f",&principal);
    printf("Enter the rate of intrest: ");
    scanf("%f",&rate);
    printf("Enter the number of years:");
    scanf("%f",&year);
    simpleinterest = (principal*rate*year)/100;
    printf("SimpleInterest: %.2f \n",simpleinterest);
    return 0;
}
