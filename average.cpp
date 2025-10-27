#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,c,m;
	printf("enter marks in first subject:-");
	scanf("%f",&a);
	printf("enter marks in second subject:-");
	scanf("%f",&b);
	printf("enter marks in third subject:-");
	scanf("%f",&c);
	m=(a+b+c)/3;
	printf("the average is %f\n",m);
	getch();
}
