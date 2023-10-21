#include <stdio.h>

int main() {
    int num, reverse = 0, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
