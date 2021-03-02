#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n1,n2,option,Add,Sub,Mul,Div,ans;
do{
printf("Enter the Arithematic Operation:");
printf("\n 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Devision\n");
scanf("%d",&option);
printf("Enter 1st No:");
scanf("%d",&n1);
printf("Enrte 2nd No:");
scanf("%d",&n2);
switch (option)
{case 1:printf("Addition =%d",n1+n2);break;
 case 2:printf("Subtraction =%d",n1-n2);break;
 case 3:printf("Multiplication =%d",n1*n2);break;
 case 4:printf("Devision =%d",n1/n2);break;}
printf("\t \n Do you want to continue:\t 1= 'yes',0= 'no'");
scanf("%d",&ans);
}while (ans==1);
getch();
return 0;
}