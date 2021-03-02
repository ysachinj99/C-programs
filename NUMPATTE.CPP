#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,row;
printf("\t Enter the no of Row:");
scanf("%d",&row);
for (i= 1;i<=row;++i)   //++i Used For Pre - Increment
{
  for(j=1;j<=i;++j)

   {
     printf("\t %d",j);
	}
	printf("\n");
 }
getch();
return 0;
}