#include <stdio.h>

void main(){

// declaration of arrays

    char exa[500];
    char rol[100];
    char name[500];
    char fname[500];
    char sch[1000];
    char group[500];

// declaration of variable

    float sin, urd, isl, pst, biop, biot, chp, cht, phyp, phyt, engI, engII, math, compp, compt;
    float total, pcent, obt, tI,tII;

//  taking input from user

    printf("Enter the Year of Examination: ");
    scanf("%s", exa);
    printf("Enter the Roll Number: ");
    scanf("%s", rol);
    printf("Enter the Group: ");
    scanf("%s", group);
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Father's Name: ");
    scanf("%s", fname);
    printf("Enter your School Name: ");
    scanf("%s", sch);
    printf("Enter your marks in Sindhi: ");
    scanf("%f", &sin);
    printf("Enter your marks in Urdu: ");
    scanf("%f",&urd);
    printf("Enter your marks in Islamiat: ");
    scanf("%f",&isl);
    printf("Enter your marks in Pakistan Studies: ");
    scanf("%f",&pst);
    printf("Enter your marks in Biology Practical: ");
    scanf("%f",&biop);
    printf("Enter your marks in Biology Theory: ");
    scanf("%f",&biot);
    printf("Enter your marks in Chemistry Practical: ");
    scanf("%f",&chp);
    printf("Enter your marks in Chemistry Theory: ");
    scanf("%f",&cht);
    printf("Enter your marks in Physics Practical: ");
    scanf("%f",&phyp);
    printf("Enter you marks in Physics Theory: ");
    scanf("%f",&phyt);
    printf("Enter your marks in Computer Practical: ");
    scanf("%f",&compp);
    printf("Enter you marks in Computer Theory: ");
    scanf("%f",&compt);
    printf("Enter your marks in English Part I: ");
    scanf("%f",&engI);
    printf("Enter your marks in English Part II: ");
    scanf("%f",&engII);
    printf("Enter your marks in Mathematics: ");
    scanf("%f",&math);

// started calculating the input

    obt = (sin+urd+isl+pst+biop+biot+chp+cht+phyp+phyt+engI+engII+math+compp+compt);
    total = 850;
    pcent = (obt*100)/total;
//    tI = (sin+urd+isl+pst+compp+compt+engI+engII);
//    tII = (math+biot+biop+cht+chp+phyp+pyht);
    printf("Marks Obtained: %0.2f\n", obt);
    printf("Total Marks: %0.2f \n", total);
    printf("Percentage: %0.2f \n", pcent);

// display of mark sheet

    system("cls");

// header of the sheet
    printf("\n\t\t********************************************");
    printf("\n\t\t\tBOARD OF SECONDARY EDUCATION\n\t\t\t\t   KARACH\n");
    printf("\t\t********************************************");
    printf("\n\t\t\t     Statement of Marks");
    printf("\n\t\t\t     S.S.C  EXAMINATION");
    printf("\n\t\t       (FOR SUCCESSFUL CANDIDATE ONLY)");
    printf("\n\n\n\  EXAMINATION\tANNUAL\t%s", exa);
    printf("\t\t ROLL NUMBER\t%s", rol);
    printf("\n\n  NAME\t%s", name);
    printf("\t\t\t\t GROUP\t%s", group);
    printf("\n\n  FATHER\'S NAME   %s", fname);
    printf("\n\n  SCHOOL/PRIVATE   %s", sch);
//    printf("\n\n\n _________________________________________________________________________");
    printf("\n\n\n\n\t\t\t\t  SUBJECT");
    printf("\n _________________________________________________________________________");
    printf("\n    COMPONENT I\t\tMARKS\t   \tCOMPONENT II\t\tMARKS");
    printf("\n _________________________________________________________________________");
    printf("\n  SINDHI SALEES\t\t%0.2f\t\tMATHEMATICS\t\t%0.2f", sin, math);
    printf("\n  URDU\t\t\t%0.2f\t\tBIOLOGY THEORY\t\t%0.2f", urd, biot);
    printf("\n  ENGLISH PART I\t%0.2f\t\tBIOLOGY PRACTICAL\t%0.2f", engI, biop);
    printf("\n  ENGLISH PART II\t%0.2f\t\tCHEMISTRY THEORY\t%0.2f", engII, cht);
    printf("\n  PAKISTAN STUDIES\t%0.2f\t\tCHEMISTRY PRACTICAL\t%0.2f", pst, chp);
    printf("\n  ISLAMIAT\t\t%0.2f\t\tPHYSICS THEORY\t\t%0.2f", isl, phyt);
    printf("\n  COMPUTER THEORY\t%0.2f\t\tPHYSICS PRACTICAL\t%0.2f", compt, phyp);
    printf("\n  COMPUTER PRACTICAL\t%0.2f", urd, compp);
    printf("\n _________________________________________________________________________");
//    printf("\n  TOTAL OF COMPONENT I\t%0.2f\t\ttotal of component II\t%0.2f", tI, tII);




    getch();
}

