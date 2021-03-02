#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
printf("Enter the Alphabet: ");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'e':
case'i':
case'o':
case'u':
{printf("%c is a Vowel \n",ch);}
break;
default:{printf("%c is a Consonant \n",ch);}}
getch();
//return 0;
}


