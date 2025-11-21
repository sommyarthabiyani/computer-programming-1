#include <stdio.h>
#include <string.h>

int main() {
    char source[100], target[100];

    // Accept unknown/source string from user
    printf("Enter any string: ");
    fgets(source, sizeof(source), stdin);

    // Remove newline character if present
    int len = strlen(source);
    if(source[len - 1] == '\n') {
        source[len - 1] = '\0';
    }

    // Copy source string to target using strcpy
    strcpy(target, source);

    // Print both strings
    printf("source string = %s\n", source);
    printf("target string = %s\n", target);

    return 0;
}

