#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    void swap(int,int);
    printf("\nenter 2 no :-");
    scanf("%d %d",&a,&b);
    swap(a,b);
    getch();
}
void swap(int x,int y)
{
    int z;
    z=x+y;
    x=z-x;
    y=z-x;
    printf("%d %d",x,y);
}
