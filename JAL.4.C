#include<stdio.h>
int main()
{
 int a[5],*p,i;
 p=a;
 printf("enter a 5 different values\n");
 for(i=0;i<5;i++){
    scanf("%d",p);
    p++;
 }
 printf("how,printing all values of array a\n");
 printf("using pointer variable p.\n");
 p=a;
 for(i=0;i<5;i++){
   printf("%d ",*p);
    p[i];
    p++;
 }
 return 0;

}

