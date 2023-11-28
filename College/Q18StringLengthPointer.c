//Finding the length of the string using pointer
#include <stdio.h>
int main() {
    char mystring[] = "Hello, World!";
    char *ptr = mystring;
    int length=0;
    while (*ptr != '\0') {
        ptr++;
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
