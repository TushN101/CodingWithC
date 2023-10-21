//Program to find the sum of 3 digits in the 3 digit number 
#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) //To check if the number is not less or more than 3 digit
    {
        printf("Invalid input. Please enter a 3-digit number.\n");
    } 
    else 
    {
        while(number>0)
        {
        digit = number % 10;
        sum += digit;
        number=number/10;
        }
        printf("The sum of the digits is: %d\n", sum);
    }

    return 0;
}
