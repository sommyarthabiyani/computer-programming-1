#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, num, sum = 0;
    float mean;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = sum / (float)n;  

    printf("Sum of %d numbers = %d\n", n, sum);
    printf("Mean of %d numbers = %.2f\n", n, mean);

    getch();
}
