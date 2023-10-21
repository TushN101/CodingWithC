#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter an expression: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Cant divide with zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    printf("Result: %f\n", result);

    return 0;
}
