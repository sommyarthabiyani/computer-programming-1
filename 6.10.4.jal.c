#include<stdio.h>
int main()
{
    float a,b,c;
    float add(float,float);
    printf("enter 2 nos.");
    scanf("%f%f",&a,&b);

    c=add(a,b);
     printf("answer=%d",c);
}
    float add(float x,float y)
{
    return(x+y);

}
