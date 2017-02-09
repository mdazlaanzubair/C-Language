# include <stdio.h>

int main(){

    int num, sqr, cub;
    printf("Enter a number to be calculated: ");
    scanf("%d",&num);
    sqr=num*num;
    cub=num*num*num;
    printf("\n\nSquare of your number is %d, and cude is %d\n\n\n\n",sqr,cub);
    return 0;

}
