#include<stdio.h>
#include<conio.h>
int main()
{

	int a[5],i,j,t;
    printf("enter 5 values");
	for(i=0;i<=4;i++)
        scanf("%d",&a[i]);

	printf("\nUnsorted Array:");
    for (i=0;i<=4;i++)
        printf("%d ",a[i]);

    for (i=0;i<=3;i++)
        for (j=i+1;j<=4;j++)
          if(a[i] > a[j])
            {
                t=a[i];
                a[i] = a[j];
                a[j] = t;
            }

    printf("\nSorted Array:");
for (i=0;i<=4;i++)
    printf("%d ",a[i]);
getch();
}
