#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<5;i++){
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    printf("your 2th number:%d\n",a[3]);
    printf("your 5th number:%d\n",a[6]);
    printf("your 7th number:%d\n",a[8]);
}
