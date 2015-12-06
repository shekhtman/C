#include <stdio.h>
#include <stdlib.h>

int main(){

	typedef union {
	
		short individual;
		float pound;
		float ounce;
		
	} amount;
	
	typedef struct{
		
		char *brand;
		amount theAmount;
	} orangeProduct;
	
	orangeProduct productOrdered = {"Blood Orange \n", 
		.theAmount.ounce = 16};
		
	printf("You bought %.2f ounces of %s",
		productOrdered.theAmount.ounce, productOrdered.brand);
		
	typedef enum {INDIV, OUNCE, POUND} quantity;
	
	quantity quantityType = POUND; //CHANGE THE VALUE AND SEE WHAT HAPPENS
	
	productOrdered.theAmount.individual = 4;
	productOrdered.theAmount.ounce = 16;
	productOrdered.theAmount.pound = 1.5;
	
	if(quantityType == INDIV){
		
		printf("You bought %d oranges \n", productOrdered.theAmount.individual);
	
	}
	else if(quantityType == OUNCE){
	
		printf("You bought %.2f ounces of oranges \n", productOrdered.theAmount.ounce);
		
	}
	else {
	
		printf("You bought %.2f pounds of oranges \n", productOrdered.theAmount.pound);
		
	}
	
	
	
	
		
}

