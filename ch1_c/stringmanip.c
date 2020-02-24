#include <stdio.h>
#include <stdlib.h>

char* munch(char* sentence) {
    char* response = malloc(sizeof(char) * 100);
    // TODO eat those vowels!

    return response;
}

int main() {
    char sentence[100];
    // TODO read input
    printf("INPUT: %s\n", sentence);
    printf("OUTPUT: %s\n", munch(sentence));
}