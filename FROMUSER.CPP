#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int arr[2][2],i,j;
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
  {
      printf("Enter The Value for arr[%d][%d]",i,j);
      scanf("%d",&arr[i][j]);
       }
		 }
printf("Print 2-Dimentional Array:\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 printf("Array is",arr[i][j],i,j);
}
getch();
return 0;
}