#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,c;
	char op;
	printf("enter first no:-");
	scanf("%f",&a);
	printf("enter second no:-");
	scanf("%f",&b);
	printf("enter operator(+,-,*,/)");
	scanf(" %c",&op);
	
	switch(op)
		{
		case'+':
		
		c=a+b;
		printf("the sum is %f",c);
		break;
	
		case'-':
		
			c=a-b;
			printf("the difference is %f",c);
			break;
		
		case'*':
		
			c=a*b;
			printf("the product is %f",c);
			break;	
	
		case'/':
			
			c=a/b;
			printf("the quetient is %f",c);
			break;
	
	
		default:
			printf(" enter valid operator");		
		}	
	getch();
}
