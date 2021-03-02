#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,row;
printf("\t Enter The Number of Rows: ");
scanf("%d",&row);
for (i=1;i<=row;i++)
{
 for (j=1;j<=i;j++)
 {
    printf("\t*");
    }
 printf("\n");
 }
getch();
return 0;
}