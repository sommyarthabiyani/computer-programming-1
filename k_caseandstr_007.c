#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100], upper[100], lower[100], toggle[100];
    int i, len;

    // Accept string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    // Calculate length of string
    printf("Length of the string: %d\n", len);

    // Convert to uppercase, lowercase and toggle case
    for(i = 0; i < len; i++) {
        upper[i] = toupper(str[i]);
        lower[i] = tolower(str[i]);
        /*if(i%2==0){
            toggle[i]=toupper(str[i]);
        }else{
            toggle[i]=tolower(str[i]);*/

              if (isupper(str[i]))
            toggle[i] = tolower(str[i]);
        else if (islower(str[i]))
            toggle[i] = toupper(str[i]);
        else
            toggle[i] = str[i];



    }
    upper[len] = '\0';
    lower[len] = '\0';
    toggle[len] = '\0';

    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);
    printf("Toggle case: %s\n", toggle);

    return 0;
}
