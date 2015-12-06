#include <stdio.h>
#include <math.h>

int main(void){

   float nf;
   int ni;

   do{
       printf("Enter a dollar amount: ");
       scanf ("%f", &nf);
   }
   while(nf < 0 || nf > 9.99);

       ni = roundf(nf * 100);
       //printf("%f\n", nf);
       //printf("%d\n", ni);

       int d1 = 0;
       int d5 = 0;
       int q = 0;
       int d = 0;
       int n = 0;
       int p = 0;
       int cr = 0;

       cr = ni;

       //printf("%d\n", ni);
       if (cr >= 500){
           d5 = cr/500;
           printf("%d five-dollar bill(s)\n", d5);
           cr = cr%500;
       }

       if (cr >= 100){
           d1 = cr/100;
           printf("%d one-dollar bill(s)\n", d1);
           cr = cr%100;
       }

       if(cr >= 25){
           q = cr/25;
           printf("%d quarter(s)\n", q);
           cr = cr%25;
           //count++;
       }

       if(cr >= 10){
           d = cr/10;
           printf("%d dime(s)\n", d);
           cr = cr%10;
           //count++;
       }

       if(cr >= 5){
           n = cr/5;
           printf("%d nickel(s)\n", n);
           cr = cr%5;
           //count++;
       }

       if(cr >= 1){
           p = cr/1;
           printf("%d penny(ies)\n", p);
       }

       printf("%d Bill(s) Total\n", (d1 + d5));
       printf("%d Coin(s) Total\n", (q + d + n + p) );

       return 0;



}
