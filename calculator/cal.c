#include<stdio.h>
#include<conio.h>
void main (void)
{
 char ch;
 float num1,num2;
// clrscr();
 system("cls");
 printf("What do you want to do?\n\n");
 printf("Addition, Subtraction, Multiplication or Division:\n");
 ch=getche();
 printf("\nEnter first number:");
 scanf("%f",&num1);
 printf("\nEnter second number:");
 scanf("%f",&num2);
 printf("\n\n");

if(ch=='A' || ch=='a')
 printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
if(ch=='S'|| ch=='s')
 printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
if(ch=='M'|| ch=='m')
 printf("%.2f x %.2f = %.2f",num1,num2,num1*num2);
if(ch=='D'|| ch=='d')
 printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
getch();
}
