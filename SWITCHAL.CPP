#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b;
char op;
printf("\n Enter 1st No:");
scanf("%d",&a);
printf("\n Enter 2nd No:");
scanf("%d",&b);
fflush(stdin);
printf("\n Enter Operation");
scanf("%c",&op);
switch(op)
{
case '+':
printf("Addition of %d and %d is: %d",a,b,a+b);
break;
case '-':
printf("Subtraction of %d and %d is: %d",a,b,a-b);
break;
case '*':
printf("Multiplication of %d and %d is: %d",a,b,a*b);
break;
case '/':
printf("Division of %d and %d is: %d",a,b,a/b);
break;
default:
printf("%dInvalid Syntax Error");
}
getch();
return 0;
}