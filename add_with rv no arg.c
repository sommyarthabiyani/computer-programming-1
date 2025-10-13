#include<stdio.h>
void main()

{
    float c;
    float add (void);
    c= add();
    printf("answer=%f",c);
}
    float add(void)

{
        float x,y,z;
         printf("\nEnter 2 nos.");
          scanf("%f %f",&x,&y);
           z= x+y;
           return z;
}



