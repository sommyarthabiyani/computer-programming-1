#include<stdio.h>
#include<conio.h>
#include<string.h>

void printstring(void)
{
    char name[]="ABCD";
    char *ptr=name;
    while(*ptr!='\0')
 {
     printf("%c",*(++ptr));
     //*(++ptr);
 }
 printf("length of string is %d",ptr-name);
}
int main()

{
    printstring();
    getch();
}
