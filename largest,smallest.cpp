#include <stdio.h>
#include <conio.h>

int main() 
	{
    	int a,b;
		printf("Enter two numbers: ");
    	scanf("%d %d", &a,&b);

	    if (a>b) 
			{
        printf("%d is the largest and %d is the smallest.\n", a, b);
    		} else if (b>a)
				{
      			  printf("%d is the largest and %d is the smallest.\n", b,a);
				} else 
					{
       			 printf("Both numbers are equal.\n");
    				}

    getch();
}
