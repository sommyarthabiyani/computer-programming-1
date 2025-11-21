#include <stdio.h>

int main() {
    int ages[10];
    int i;

    // Accept ages
    printf("Enter the ages of 10 people:\n");
    for(i = 0; i < 10; i++) {
        printf("Person %d: ", i);
        scanf("%d", &ages[i]);
    }

    // Check eligibility and print result
    printf("\nEligibility Results:\n");
    for(i = 0; i < 10; i++) {
        if(ages[i] >= 18) {
            printf("Person %d: Eligible\n", i );
        } else {
            printf("Person %d: Not Eligible\n", i);
        }
    }

    return 0;
}
