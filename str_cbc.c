#include<stdio.h>

void printstring (void)
{
          char name[]="pdpu";

          //scanf("%s",name);
          char *ptr = name;
          while(*ptr!='\0')
          {
                    printf("%c",*ptr);ptr++;
          }
          printf("length of the string is %d",ptr-name);
}
int main()
{
          printstring();
}
