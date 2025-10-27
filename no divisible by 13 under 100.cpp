#include <stdio.h>
#include <conio.h>

int main() {
    int i;

    printf("Numbers divisible by 13 from 1 to 100 are:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 13 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    getch();
}
