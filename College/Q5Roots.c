//Program to compute all the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b - 4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.f\n", root1);
        printf("Root 2 = %.f\n", root2);
    } else if (discriminant == 0){
        root1 = -b / (2 * a);
        printf("The root is real and equal:\n");
        printf("Root 1 = %.f\n", root1);
    } else {
        float real = -b / (2 * a);
        float imaginary = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex:\n");
        printf("Root 1 = %f + %fi\n", real, imaginary);
        printf("Root 2 = %f - %fi\n", real, imaginary);
    }

    return 0;
}
