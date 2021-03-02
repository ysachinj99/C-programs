#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i, n;
printf("Enter The no: ",&n);
scanf("%d",&n);
for(i=2; i<=2/n; i++)
{
if(n%i==0)
{
break;
}
}
if(i>n/2)
printf("\n %d is a Prime Number \n",n);
else
printf("\n %d is not a Prime Number \n",n);
getch();
return 0; }