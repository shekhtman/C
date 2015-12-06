#include <stdio.h>
#include "cs50.h"

int  main(void){

   int rows;
   do{
       printf("Enter a number between 2 and 23: ");
       scanf ("%d",&rows);
   }
   while(rows < 2 || rows > 23);

   int current_row;
   int hash;
   int space;

   for(current_row = 0; current_row < rows; current_row++){
       for(space = 0; space < rows-current_row-1; space++){
           printf(" ");
       }
       for(hash = 0; hash <= current_row+1; hash++){
           printf("#");
       }
       printf("\n");
   }
}
