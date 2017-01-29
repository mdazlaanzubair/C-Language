#include <stdio.h>
int main(){

//  declaration of an arrays and integer variable

    char name [300];
    char fname [300];
    char email [100];
    char prog [100];
    char con [150];
    char rel [200];
    char nat [250];
    char lang [250];
    char add [200];
    char ms [300];
    int i;

//  Started taking user inputs by using format specifier

    printf("\n\n\t\t***********************************\n");
    printf("\t\t\t Personal Profile ");
    printf("\n\t\t***********************************\n\n");
    printf ("Enter your Name: ");
    scanf ("%s",name);
    printf ("Enter your Father's Name: ");
    scanf ("%s",fname);
    printf ("Enter your Program: ");
    scanf ("%s",prog);
    printf ("Enter your Age: ");
    scanf ("%d",&i);
//    printf ("Enter your Martial Status: ");
//    scanf ("%s",ms);
    printf ("Enter your Religion: ");
    scanf ("%s",rel);
    printf ("Enter your Nationality: ");
    scanf ("%s",nat);
    printf("Enter your Martial Status: ");
    scanf("%s",ms);
    printf ("Enter your Email: ");
    scanf ("%s",email);
    printf ("Enter your Contact no.: ");
    scanf ("%s",con);
    printf ("Enter your Address: ");
    scanf ("%s",add);

// generating outputs of inputs taken

    system("cls");
    printf("\n\n\t\t***********************************\n");
    printf("\t\t\t Personal Profile ");
    printf("\n\t\t***********************************\n\n");
    printf("\t\t Name\t\t:\t%s\n",name);
    printf("\t\t Father's Name\t:\t%s\n",fname);
    printf("\t\t Age\t\t:\t%d\n",&i);
    printf("\t\t Enrolled in\t:\t%s\n",prog);
    printf("\t\t Nationality\t:\t%s\n",nat);
    printf("\t\t Religion\t:\t%s\n",rel);
    printf("\t\t Martial Status\t:\t%s\n",ms);
    printf("\t\t Email\t\t:\t%s\n",email);
    printf("\t\t Address\t:\t%s\n",add);
    printf("\n\t\t***********************************\n\n");

return 0;
}
