#include<stdio.h>
#include<conio.h>
main()
{
int n,pov=0,neg=0,zero=0,a;
clrscr();
do{
printf("Enter a Number : ",n);
scanf("%d",&n);
if (n>=1)
{//printf("\t You Entered Pov No: %d",pov);
pov++;}
else if (n<=-1)
{//printf("You Entered Neg No: %d",neg);
neg--;}
else
{//printf("You Entered Zero NO: %d",zero);
zero++;}
printf("Do You Wnat TO Continue ?Enter 1 to continue 0 to Terminate");
scanf("%d",&a);}while (a==1);
printf("Positive Entered:%d,Negative Entered:%d,Zero Entered:%d",pov,neg,zero);
getch();
}