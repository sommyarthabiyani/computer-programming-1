#include <stdio.h>
void swap (int *,int *);
void main ()
{
int a,b;
printf("enter two values: ");
scanf("%d %d", &a,&b);
printf("before swapping (%d,%d)",a,b);
swap(&a,&b);
printf("\nafter swapping (%d %d)",a,b);
}
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
