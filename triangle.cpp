#include<stdio.h>
#include<conio.h>

int main() 
{
    float l,h,a;
    
    printf("Enter the length (base) of the triangle: ");
    scanf("%f",&l);

    printf("Enter the height of the triangle: ");
    scanf("%f",&h);

    a=(l*h)/2;

    printf("Area of the triangle = %f\n",a);
	getch();
}
