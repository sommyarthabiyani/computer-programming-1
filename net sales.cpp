#include <stdio.h>
#include <conio.h>

int main() {
    float grossSales, discount, netSales;

    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

	    if (grossSales > 20000) {
        discount = 0.15 * grossSales;  
    } else if (grossSales > 10000) {
        discount = 0.10 * grossSales;  
    } else {
        discount = 0.05 * grossSales;  
    }


    netSales = grossSales - discount;


    printf("Gross Sales: %.2f\n", grossSales);
    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", netSales);

    getch();
}
