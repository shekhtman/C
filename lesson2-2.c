#include <stdio.h>

int main(){

	int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
	
	if(bobMissedDays < 10 && (bobTotalSales > 30000 || bobNewCust > 30) )
		printf("Bob gets a raise");
	else
		printf("Bob doesn't get a raise");

	
}