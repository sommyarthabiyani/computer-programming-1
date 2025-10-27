#include <stdio.h>
#include <conio.h>

int main() {
    int m1, m2, m3;
    float avg;

    
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);


    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail (less than 35 in a subject)\n");
    } else {
        avg = (m1 + m2 + m3) / 3.0;


        if (avg > 70) {
            printf("Result: Distinction (Average = %.2f)\n", avg);
        } else if (avg > 60) {
            printf("Result: First Class (Average = %.2f)\n", avg);
        } else if (avg > 50) {
            printf("Result: Second Class (Average = %.2f)\n", avg);
        } else if (avg > 35) {
            printf("Result: Third Class (Average = %.2f)\n", avg);
        } else {
            printf("Result: Fail (Average = %.2f)\n", avg);
        }
    }

	getch();
}
