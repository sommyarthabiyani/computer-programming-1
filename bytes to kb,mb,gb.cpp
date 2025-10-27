#include<stdio.h>
#include<conio.h>

int main()
	{
		long long a,b,c,d;
		char x;
		printf("enter no of byte to convert in other format\n");
		scanf("%lld",&a);
		b=a/1024;
		c=b/1024;
		d=c/1024;
		printf("enter the format you want bytes in\n");
		printf("k for kilobytes\n");
		printf("m for megabytes\n");
		printf("g for gigabytes\n");
		scanf(" %c",&x);
		
		switch(x)
		{
			
			case 'k':
			printf(" the no of kilobytes are %lld kb\n",b);
			break;
			
			case 'm':
			printf(" the no of megabytes are %lld mb\n",c);
			break;
			
			case 'g':
			printf(" the no of kilobytes are %lld gb\n",d);
			break;
			
			default:
			printf(" enter valid format");
				
		}
	getch();	
	}

