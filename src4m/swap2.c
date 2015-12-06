#include <stdio.h>
#include <stdlib.h>

void swap(int* num1, int* num2) {
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
 
int main() {
   int* x;
   int* y;
 
   x = malloc(sizeof(int));
   y = malloc(sizeof(int));

   *x = 1;
   *y = 2;
 
   printf("\nFirst number: %d", *x);
   printf("\nSecond number: %d", *y);

   //scanf("%d", &num1);
   //printf("\nEnter the Second number : ");
   //scanf("%d", &num2);
 
   swap(x, y);
 
   printf("\nFirst number  : %d", *x);
   printf("\nSecond number : %d", *y);
 
   return (0);
}
