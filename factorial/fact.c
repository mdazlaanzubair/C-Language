#include <stdio.h>
int main(){

int i,num,fact=1;

printf("Enter a Positive Number Here: ");
scanf("%d",&num);

for(i=num;i>=1;i--){
    fact = fact*i;
}
printf("%d",fact);

return 0;
}
