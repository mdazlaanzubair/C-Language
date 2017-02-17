#include <stdio.h>
int main(){
int num1,num2,num3,num4,num5,sum,avg,sqr,cube;
printf("Enter Your First Number: ");
scanf("%d",&num1);
printf("Enter Your Second Number: ");
scanf("%d",&num2);
printf("Enter Your Third Number: ");
scanf("%d",&num3);
printf("Enter Your Fourth Number: ");
scanf("%d",&num4);
printf("Enter Your Fifth Number: ");
scanf("%d",&num5);
sum = num1+num2+num3+num4+num5;
sqr = sum*sum;
cube = sum*sum*sum;
avg = sum/5;
system("cls");
printf("\n\tSquare of Your Numbers is %d,\n\n", sqr);
printf("\tCube of Your Numbers is %d,\n\n", cube);
printf("\tAverage of Your Number is %d.\n\n", avg);
getch();
}

