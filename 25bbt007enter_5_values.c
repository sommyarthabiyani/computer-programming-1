#include<stdio.h>
int main(){
    int a[5];
    for(int i=0,j=1;i<5,j<=5;i++,j++){
        printf("ENTER 5 VALUES:");
        scanf("%d",&a[i]);
    }
for(int i=0;i<4;i++){
        if(a[i] > a[j]){
            int t= a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("\n sorted array:");
    for(int i=0,i<5,i++)
    printf("%d",a[i]);


}
