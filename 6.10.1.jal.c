#include<stdio.h>
int main(){
    float c;
    float add(void);
    c=add();
    printf("answer=%f\n",c);

}
float add (void)
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z=x+y;
    printf("answer=%f",z);
}
