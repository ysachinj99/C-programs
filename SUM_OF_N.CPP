#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,sum;
printf("Enter 1st Num: \n");
scanf("%d",& a);
printf("Enter 2nd Num: \n");
scanf("%d",& b);
sum = a+b;
printf("Sum's of Given No: %d+%d=%d",a,b,sum);
getch();
return 0;
}