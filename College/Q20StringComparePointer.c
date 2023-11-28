//Compare two strings using pointers
#include <stdio.h>

int main() {
    const char *string1 = "Hello, World!";  
    const char *string2 = "Hello, Universe!";
    while (*string1 != '\0' && *string1 == *string2) {
        string1++;
        string2++;
    }
    if (*string1 == *string2) {
        printf("The strings are equal.\n");
    } else if (*string1 < *string2) {
        printf("String 1 is smaller than String 2.\n");
    } else {
        printf("String 1 is larger than String 2.\n");
    }

    return 0;
}
