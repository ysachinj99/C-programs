#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num;
printf("Enter a Numnber:");
scanf("%d",&num);
if(num>=0)
printf("%d is Positive Number \n",num);
else
printf("%d is Negative Number\n",num);
getch();
return 0;
}