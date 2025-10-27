#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter first no:-");
	scanf("%d",&a);
	printf("enter second no:-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the no are:- %d & %d\n",a,b);
	getch();
}
