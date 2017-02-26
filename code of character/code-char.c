#include <stdio.h>
int main(){
int code;
char ch;
printf("\n\tEnter a Character: ");
scanf("\t%s",&ch);
printf("\n\tThis is the Code of Your Character: %d",ch);
getch();
printf("\n\n\tEnter the Code to Verify It: ");
scanf("\t%d",&ch);
printf("\n\tHere is the Character of the Code: %c\n\n",ch);
getch();
}
