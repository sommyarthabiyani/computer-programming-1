#include<stdio.h>
#include<conio.h>

int main() 
	{
		float f,c;
		printf("enter farenheit to convert into celcius:-");
		scanf("%f",&f);
		c=(f-32)*5/9;
		printf("the celcius temp =%f",c);
		getch();
	}

