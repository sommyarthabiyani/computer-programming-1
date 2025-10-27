#include<stdio.h>
int main()
{
          struct book
          {
                    char title[20];
                    char author[20];
                    int edition;
                    char isbn[14];
                    char publisher[20];
                    float price;
          }b1;
          printf("enter title of book");
          gets(b1.title);
          printf("enter author of book");
          gets(b1.author);
          printf("enter edition of book");
          scanf("%d",&b1.edition);
          getchar();
          printf("enter isbn of book");
          gets(b1.isbn);
          printf("enter publisher of book");
          gets(b1.publisher);
          printf("enter price of book");
          scanf("%f",&b1.price);
          printf("title of book is %s\n",b1.title);
          printf("author of book is %s\n",b1.author);
          printf("edition of book is %d\n",b1.edition);
          printf("isbn of book is %s\n",b1.isbn);
          printf("publisher of book is %s\n",b1.publisher);
          printf("price of book is %f\n",b1.price);
}
