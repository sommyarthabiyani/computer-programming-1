#include <stdio.h>
#include <conio.h>
void main()
{
int arr[]={10,20,30,40};
int *j,*i;
i=&arr[1];j=(arr+1);
printf("%s",((i==j)?"eq.":"!eq."));

getch();
}
