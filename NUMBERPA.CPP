#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,row,n=1;
printf("\t Enter the no of Row: ");
scanf("%d",&row);
for(i=1;i<=row; i++)
 {
  for(j=1;j<=i;++j)
   {
     printf("\t %d",n);
    ++n;
   }
 printf("\n");
}
getch();
return 0;
}