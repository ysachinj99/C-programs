#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("Enter the No:");
scanf("%d",&num);
if (num % 2 == 0)
 printf("number %d is even",num);
else
printf("number %d is odd",num);
getch();
return 0;
}
