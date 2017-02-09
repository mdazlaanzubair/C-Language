#include <stdio.h>
int main(){

    int age, days;
    system("cls");
    days = 365;
    printf("Please Enter Your Correct Age: ");
    scanf("%d",&age);
    days = age*365;
    printf("\n\n\nYou age in days: %d\n\n", days);
    return 0;

}
