#include <stdio.h>
#include <conio.h>
int main() {
    int i, n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum = sum + (2 * i);   
    }
    
    printf("Sum of first %d even natural numbers = %d\n", n, sum);
    
    getch();
}
