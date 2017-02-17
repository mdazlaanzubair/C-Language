#include<stdio.h>

int main() {
   int i = 5;
   printf("\n");
   printf(" Printing + 5 series: \n\n");
   for (i = 45; i <= 65; i=i+5) {
      printf("\t%d\t", i);
   }
   printf("\n");
   printf(" Printing - 5 series: \n\n");
   for (i = 65; i >= 45; i=i-5) {
      printf("\t%d\t", i);
   }
   printf("\n");
   return (0);
}
