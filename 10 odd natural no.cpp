#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    
    printf("First 10 odd natural numbers:\n");
    
    for(i = 1; i <= 10; i++) {
        printf("%d\n", 2*i - 1);   // Formula for odd numbers
    }
    
    getch();
}
