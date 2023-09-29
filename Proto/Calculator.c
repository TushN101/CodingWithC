#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Calculator \n");
    int num1;
    int num2;
    char operator;
    printf("Enter the numbers and then the operator: ");
    scanf("%d %d %c",&num1 , &num2 , &operator);
    switch (operator)
    {
    case '+' :
    printf("The sum of the number is %d",num1+num2);
    break;
    
    case '-':
    printf("The substraction of the number is %d",num1-num2);
    break;
    
    case '*':
    printf("The multiplication of the number is %d",num1*num2);
    break;
    
    case '/':
    printf("The division of the number is %d",num1/num2);
    break;
    
    default:
    printf("Wrong operator");
    break;
    }
    return 0;
}