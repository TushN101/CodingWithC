#include <stdio.h>
#include <math.h>
int main() 
{
    int num,ognum,singlenum;
    int reversenum=0;
    int sumofdigits=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    ognum = num;
    while(num!=0)
    {
        singlenum=num%10;
        reversenum = reversenum*10 + singlenum;
        sumofdigits += singlenum;
        num = num /10;
    }
    printf("Orignal Number: %d \n",ognum);
    printf("Reversed Number: %d \n",reversenum);
    printf("Sum of Digits: %d \n",sumofdigits);
    return 0;
}
