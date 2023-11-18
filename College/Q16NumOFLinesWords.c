//Write a c program to count the number of lines , characters , words
#include <stdio.h>
#include <string.h>
int main() {
    char text[1000];
    printf("Enter text:\n");
    scanf(" %[^\n]", text);
    int words = 1, characters = 0, lines = 1;
    // Counting the number of words, characters, and lines
    for (int i = 0; i < strlen(text); i++) {
        //Counting the number of words
        if (text[i] == ' ') {
            words++;
        //Counting the number of lines
        } else if (text[i] == '\n') {
            lines++;
        //Counting the number of characters
        } else {
            characters++;
        }
    }
    printf("The number of words in the text is: %d\n", words);
    printf("The number of characters in the text is: %d\n", characters);
    printf("The number of lines in the text is: %d\n", lines);

    return 0;
}
