#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "jerry";
    char string2[] = "ferry";

    int i, j, k;

    // Compare string1 with "jerry"
    i = strcmp(string1, "jerry");
    // Compare string1 with string2p
    j = strcmp(string1, string2);
    // Compare string1 with "jerry boy"
    k = strcmp(string1, "jerry boy");

    printf("%d %d %d\n", i, j, k);

    return 0;
}
