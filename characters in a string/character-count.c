#include <stdio.h>
int main(){

    char s[1000],i;

    printf("Enter The String Here: ");

    scanf("%s",s);

    for(i=0;s[i]!='\0';i++){}

    printf("\nNumber of Characters in The String is %d.\n",i);

    getch();
}
