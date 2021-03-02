#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
int a,b,c;
float R1,R2;
printf("\nEnter the Value of A=",a);
scanf("%d",&a);
//flush();
printf("\nEnter the Value of B=",b);
scanf("%d",&b);
printf("\nEnter the Value of C=",c);
scanf("%d",&c);
R1= -b+sqrt(b*b - 4*a*c)/2*a;
printf("\nRoot 1 Has Value of =%f",R1);
R2= -b-sqrt(b*b - 4*a*c)/2*a;
printf("\nRoot 2 Has Value of =%f",R2);
getch();
return 0;
}
