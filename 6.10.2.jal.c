#include<stdio.h>
void add(int *,int *);
void main(){
    int a,b;

    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    printf("%d    %d\n",a   ,b);
    add(&a, &b);
     printf("%d    %d \n",a,b);

}
void add(int *a,int *b)
{
    int t;
    t=*a;
    a=*b;
    b=t;
     printf("%d  %d\n",a,b);
}
