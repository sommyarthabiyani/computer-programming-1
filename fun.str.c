#include<stdio.h>
void printstring(void);
int main()
{
    printstring();
    return 0;

}
void printstring(void)
{    char name[]="PDEU";
    char*ptr=name;
    while(*ptr!='\0'){
        printf("%c",*ptr++);
        //ptr++;

    }

}
{
    printf("length:%d",ptr - name);
}
