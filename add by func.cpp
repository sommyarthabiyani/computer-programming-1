#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    void add(int,int);
    printf("\nenter 2 no :-");
    scanf("%d %d",&a,&b);
    add(a,b);
    getch();
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("ans=%d",z);
}
