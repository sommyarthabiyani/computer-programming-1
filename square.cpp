#include <stdio.h>
#include <conio.h>

int main() 
{
    float side, area, perimeter;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

	area = side * side;
    perimeter = 4 * side;

    printf("Area of the square = %f\n", area);
    printf("Perimeter of the square = %f\n", perimeter);

    getch();
}