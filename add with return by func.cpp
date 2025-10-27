#include<stdio.h>
#include<conio.h>

int main()
{
    float c;
    float add(void);
    c=add();
    printf("äns=%.2f",c);
    getch();
}
float add(void)
{
    float x,y,z;
    printf("\nenter 2 no :-");
    scanf("%f %f",&x,&y);
    z=x+y;
    return z;
}
