#include <stdio.h>

int main()
{
    int i, b, a, r, num=1,num1=2, num2=3, num3=4, num4=5, num5=6, num6=7, num7=8, num8=9, num9=10, num10=11, num11=12;

    printf("\n");

    for(a=1; a<=10; a++)
    {
        printf("\t%d * %d = %d", num, a, (num*a));
        printf("\t%d * %d = %d", num1, a, (num1*a));
        printf("\t%d * %d = %d", num2, a, (num2*a));
        printf("\t%d * %d = %d\n", num3, a, (num3*a));
    }

    printf("\n");

    for(b=1; b<=10; b++)
    {
        printf("\t%d * %d = %d", num4, b, (num4*b));
        printf("\t%d * %d = %d", num5, b, (num5*b));
        printf("\t%d * %d = %d", num6, b, (num6*b));
        printf("\t%d * %d = %d\n", num7, b, (num7*b));
    }

    printf("\n");

    for(i=1;i<=10;i++)
    {
        printf("\t%d * %d = %d", num8, i, (num8*i));
        printf("\t%d * %d = %d", num9, i, (num9*i));
        printf("\t%d * %d = %d", num10, i, (num10*i));
        printf("\t%d * %d = %d\n", num11, i, (num11*i));
    }

    printf("\n");

    scanf("%d",&r);

    return 0;
}
