#include<stdio.h>
#include<conio.h>
void main (void)
{
 char ch;
 float num1,num2;
 clrscr();
 printf("What do you want to do?\n");
 printf("Addition, Subtraction, Multiplication or Division:");
 ch=getche();
 printf("\nEnter first number:");
 scanf("%f",&num1);
 printf("\nEnter second number:");
 scanf("%f",&num2);
 printf("\n\n");

if(ch=='A')
 printf("%f %c %f = %.2f",num1,"+",num2,num1+num2);
if(ch=='S')
 printf("%f %c %f = %.2f",num1,"-",num2,num1-num2);
if(ch=='M')
 printf("%f %c %f = %.2f",num1,"*",num2,num1*num2);
if(ch=='D')
 printf("%f %c %f = %.2f",num1,"/",num2,num1/num2);
getch();
}
