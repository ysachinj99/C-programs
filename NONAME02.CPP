//A commercial Bank has Included an incentive policy of giving bonus to all it's
//deposite holders.A bonus of 2% of the balance and 5% is given to female
//account holders if their balance is more than RS 5000/-
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int Amt;
float Bonus,Total;
char gender;
printf("\n **Bank of V.k.Krishna Menon**");
printf("\n Enter Your Deposite Amount:");
scanf("%d",&Amt);
printf("\n Gender Male/Female:");
scanf("%d",gender);
if(gender=='m')
{printf("\n Your getting 2% Incentive bonus!");
Amt+=Bonus;
Bonus= 0.02;
printf("\n Your Total Amount is",Total);}
else if (Amt>=5000)
{printf("\n Your getting 5% Incentive bonus!");
Bonus= 0.05;
//Bonus*Amt= Total;
printf("\n Your Total Amount is",Total);}
//break;
else {printf("\n Your getting 2% Incentive Bonus!");}
getch();
return 0;
}
