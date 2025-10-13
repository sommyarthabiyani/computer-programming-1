#include<stdio.h>
void main()

{
    float a,b,c;
    float add (float,float);
   printf("\nEnter 2 nos.");
   scanf("%f %f",&a,&b);
   c= add (a,b);
    printf("answer=%f",c);
}
    float add(float x, float y)

{
        return(x+y);
}




