//Write a program in c  to determine whether the string is palindrome or not
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}
int main() {
    char String[100];
    printf("Enter a string: ");
    scanf("%s", String);

    // Check if the string is a palindrome
    if (isPalindrome(String)) {
        printf("%s is a palindrome.\n",String);
    } else {
        printf("%s is not a palindrome.\n",String);
    }

    return 0;
}
