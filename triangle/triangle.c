#include<stdio.h>
#include<conio.h>
int main() {
    int i, a, b, c, j;
    i = 10;
    for(i=10;i>=1;i--){
        for(j=10;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
