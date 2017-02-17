#include <stdio.h>
int main(){

    int a, num;
    char i;
    printf("Define Limit where you want to print: ");
    scanf("%d",&a);
    num = 64 + a;
    for(i='A'; i<=num; i++){
        printf("\t%c\t",i);
    }
    return 0;
}
