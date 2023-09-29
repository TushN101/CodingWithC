#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The first number is the greatest\n");
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("The second number is the greatest\n");
    } 
    else {
        printf("The third number is the greatest\n");
    }

    return 0;
}
