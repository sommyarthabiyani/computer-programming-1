#include <stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int *p=arr;
int i,size;
size=sizeof(arr)/sizeof(arr[0]);
printf("Original array: ",arr);
for(i=0;i<=size;i++)
          printf("%d", *(p+i));
          printf("\nReverse array:");
          p=p+size-1;
for(i=size-1;i>=0;i--){
          printf("%d",*(p));
          p--;}
}
