//Array element deletion
#include <stdio.h>

int main() {
    int n, i, j, k, loc;
    int array[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the location you want to delete: ");
    scanf("%d", &loc);
    for (j = loc - 1; j < n - 1; j++) {
            array[j] = array[j + 1];
    }
    printf("The new array is: ");
    for (k = 0; k < n-1; k++) {
        printf("%d ", array[k]);
    }
    return 0;
}
