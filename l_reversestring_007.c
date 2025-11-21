#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    // Accept string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse the string
    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
