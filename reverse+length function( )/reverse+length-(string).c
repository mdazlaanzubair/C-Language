#include <stdio.h>
int main(){

    char str[100] , rev[100] ;

    int i,j,k ;

    printf ("Enter a String Here: ") ;

    scanf ("%s" , &str) ;

    printf ("\n\tOriginal String: %s\n" , str) ;

    for (i = 0 ; str [i] != '\0' ; i++)

    {

        k = i ;

    }

    for (j = 0 ; j <= i ; j++)

    {

        rev [j] = str [k] ;

        k-- ;

    }

    printf ("\n\tReversed String: %s\n",rev) ;

    printf ("\n\tLength of the String: %d\n",i) ;

    getch () ;
}
