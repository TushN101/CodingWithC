#include <stdio.h>

int main() 
{
    int num;
    int singlenum;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        singlenum = num%10;
        num = num/10;
        printf("%d \n",singlenum);
    }
    return 0;
}
