#include <stdio.h>

void main()

{

     char color;

     system("cls");

     printf("Enter character (R/G/B): ");

     color= getchar();

     if(color == 'R' || color == 'r')
     printf ("Red");

     else if(color == 'G' || color == 'g')
     printf("Green");

     else if(color == 'B' || color == 'b')
     printf("Blue");

     else
     printf("Please type the character R, G or B !!!");

     getch();

}
