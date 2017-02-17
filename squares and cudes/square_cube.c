#include <stdio.h>
#include <math.h>
int main(){
    int i,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("No     Square   Cube\n",n);
    for(i=1;i<=n;i++){
        printf("%d \t %ld \t %ld \n",i,(i*i),(i*i*i));
    }
    return 0;
}
