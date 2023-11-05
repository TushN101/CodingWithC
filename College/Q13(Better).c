Matrix Multiplication
#include <stdio.h>

int main() {
    int rowA, colA, rowB, colB, i, j, k;
    int matrix1[10][10];
    int matrix2[10][10];
    int matrixresult[10][10] = {0};

    printf("Enter the number of rows and columns for matrix A (rowA colA): ");
    scanf("%d %d", &rowA, &colA);

    printf("Enter the number of rows and columns for matrix B (rowB colB): ");
    scanf("%d %d", &rowB, &colB);

    if (colA != rowB) {
        printf("Matrix multiplication is not possible because the number of columns in matrix A is not equal to the number of rows in matrix B.\n");
    } else {
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < rowA; i++) {
            for (j = 0; j < colA; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of matrix B:\n");
        for (i = 0; i < rowB; i++) {
            for (j = 0; j < colB; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("Matrix A:\n");
        for (i = 0; i < rowA; i++) {
            for (j = 0; j < colA; j++) {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B:\n");
        for (i = 0; i < rowB; i++) {
            for (j = 0; j < colB; j++) {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }

        // Perform matrix multiplication here

        printf("Result of matrix multiplication:\n");
        for (i = 0; i < rowA; i++) {
            for (j = 0; j < colB; j++) {
                for (k = 0; k < colA; k++) {
                    matrixresult[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                printf("%d ", matrixresult[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
