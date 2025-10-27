#include <stdio.h>
#include <conio.h>

int main() {
    int n, i;

    printf("Enter how many times you want to print your name: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Dev Madhu\n");   // Replace with your own name
    }

    getch();
}
