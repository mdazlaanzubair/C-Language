#include<stdio.h>

int main() {
   int i = 5;
   printf("\n");
   printf(" Forward series: \n\n");
   for (i = 25; i <= 30; i++) {
      printf("\t%d\t", i);
   }
   printf("\n");
   printf(" Backward series: \n\n");
   for (i = 30; i >= 25; i--) {
      printf("\t%d\t", i);
   }
   printf("\n");
   return (0);
}
