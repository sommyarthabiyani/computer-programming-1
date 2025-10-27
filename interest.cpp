#include<stdio.h>
#include<conio.h>

int main() 
	{
		float a,i,p,r,n;
		printf("enter principle amt:-");
		scanf("%f",&p);
		printf("enter rate of interest:-");
		scanf("%f",&r);
		printf("enter time in yesrs:-");
		scanf("%f",&n);
		i=p*r*n/100;
		printf("the interest is %f rs\n",i);
		a=p+i;
		printf("the total amt is %f rs\n",a);
		getch();
	}
