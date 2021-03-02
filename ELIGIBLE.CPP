#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a;
printf("Enter Your Age:",a);
scanf("%d",&a);
printf("Your are %s ",(a>=18)?"Eligible":"Not Eligible");
getch();
return 0;
}