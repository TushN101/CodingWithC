#include <stdio.h>

int findGCD(int num1, int num2);
int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
int findGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return findGCD(num2, num1 % num2);
    }
}
