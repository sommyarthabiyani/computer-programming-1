#include<stdio.h>
void main(){
    int a,b;
    void add(int,int);
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    add( a, b);
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("answer is=%d",z);
}
