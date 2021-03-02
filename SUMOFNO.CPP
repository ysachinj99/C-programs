#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i, n, sum= 0;
printf("Enter The no : ",&n);
scanf(" %d ",&n);
i=1;
while (n>0)
{
 i=n%10;
 sum = sum+n;
 n=n/10;
}
printf("Sum = %d",sum);
getch();
return 0;
}