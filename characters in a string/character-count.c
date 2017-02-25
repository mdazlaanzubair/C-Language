#include <stdio.h>
int main(){

    char s[1000],i;

    printf("Enter a String: ");

    scanf("%s",s);

    for(i=0;s[i]!='\0';i++){}

    printf("\nLength of the String %d.\n",i);

    getch();
}
