#include <stdio.h>

int main() {
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    int b11, b12, b13, b21, b22, b23, b31, b32, b33;
    int c11, c12, c13, c21, c22, c23, c31, c32, c33;

    // Input matrix A
    printf("Enter the values for matrix A (3x3):\n");
    scanf("%d %d %d", &a11, &a12, &a13);
    scanf("%d %d %d", &a21, &a22, &a23);
    scanf("%d %d %d", &a31, &a32, &a33);

    // Input matrix B
    printf("Enter the values for matrix B (3x3):\n");
    scanf("%d %d %d", &b11, &b12, &b13);
    scanf("%d %d %d", &b21, &b22, &b23);
    scanf("%d %d %d", &b31, &b32, &b33);

    // Calculate the product matrix elements
    c11 = a11 * b11 + a12 * b21 + a13 * b31;
    c12 = a11 * b12 + a12 * b22 + a13 * b32;
    c13 = a11 * b13 + a12 * b23 + a13 * b33;
    c21 = a21 * b11 + a22 * b21 + a23 * b31;
    c22 = a21 * b12 + a22 * b22 + a23 * b32;
    c23 = a21 * b13 + a22 * b23 + a23 * b33;
    c31 = a31 * b11 + a32 * b21 + a33 * b31;
    c32 = a31 * b12 + a32 * b22 + a33 * b32;
    c33 = a31 * b13 + a32 * b23 + a33 * b33;

    
    printf("Matrix A x Matrix B = Matrix C:\n");
    printf("|%d %d %d|   |%d %d %d|   |%d %d %d|\n", a11, a12, a13, b11, b12, b13, c11, c12, c13);
    printf("|%d %d %d| x |%d %d %d| = |%d %d %d|\n", a21, a22, a23, b21, b22, b23, c21, c22, c23);
    printf("|%d %d %d|   |%d %d %d|   |%d %d %d|\n", a31, a32, a33, b31, b32, b33, c31, c32, c33);


    return 0;
}
