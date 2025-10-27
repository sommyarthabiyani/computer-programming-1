#include <stdio.h>
#include <conio.h>

int main() {
    int i, n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("First %d odd natural numbers:\n", n);
    
    for(i = 1; i <= n; i++) {
        printf("%d\n", 2*i - 1);  
    }
    
    getch();
}
