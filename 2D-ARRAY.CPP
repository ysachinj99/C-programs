#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int arr[5][2]={{0,0},{1,2},{3,4},{5,6},{7,8}};
int i,j;
for(i=0;i<5;i++)
{
 for(j=0;j<2;j++)
 {
 printf("a[%d][%d]=%d\n",i,j,arr[i][j]);
 }
}
getch();
return 0;
}