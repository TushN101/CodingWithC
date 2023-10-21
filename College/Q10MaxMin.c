#include <stdio.h>
int MaxFind(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
int MinFind(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}
int main() {
    int num1, num2, max, min;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    max = MaxFind(num1, num2);
    min = MinFind(num1, num2);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}
