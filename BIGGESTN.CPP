#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,x;
printf("The Value of a and b",a,b);
scanf("%d,%d",&a,&b);
x = (a>b) ? a:b;
printf("Biggest Value= %d",x);
getch();
return 0;
}
