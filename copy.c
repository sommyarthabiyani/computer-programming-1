#include <stdio.h>
void main (){
int a1[5],a2[5];
int size,i;
size=5;
printf("enter values of array:");
for(i=0;i<=size;i++){
scanf("%d",&a1);
}
printf("\nFist array:",a1);
int *p1=a1,*p2=a2;
for(i=0;i<=size;i++){
(*p2+i)=(*p1+i);
(*p2+i)=a2[i];
}

printf("The copied array is:",a2);


}
