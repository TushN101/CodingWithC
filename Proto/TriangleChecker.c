#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Triangle checker \n");
    int side1,side2,side3;
    printf("Enter  the side1 side2 side3:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2 && side1==side3 && side2==side3)
    {
        printf("Equilaterial Triangle");
    }
    if(side1==side2 || side1==side3 || side2==side3)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}