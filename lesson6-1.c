#include <stdio.h>
#include <stdlib.h>

int main(){

	typedef union {
	
		short individual;
		float pound;
		float ounce;
		
	} amount;
	
	amount orangeAmount = {.ounce = 16};
	//amount orangeAmount;
	//orangeAmount.ounce = 16;
	orangeAmount.individual = 4;
	
	printf("Orange Juice Amount in Ounces: %.2f : Size %ld \n", 
		orangeAmount.ounce, 
		sizeof(orangeAmount.ounce));
		
	printf("Number of Oranges: %d : Size %ld \n", 
		orangeAmount.individual, 
		sizeof(orangeAmount.individual));
		
	printf("Orange Juice Amount in Ounces: %.2f : Size %ld \n", 
		orangeAmount.ounce, 
		sizeof(orangeAmount.ounce));	
	
	orangeAmount.pound = 1.5;
		
	printf("Orange Juice Amount in Pounds: %.2f : Size %ld \n", 
		orangeAmount.pound, 
		sizeof(orangeAmount.pound));
		
	printf("Orange Juice Amount in Ounces: %.2f : Size %ld \n", 
		orangeAmount.ounce, 
		sizeof(orangeAmount.ounce));	
		
	printf("Address of orangeAmount.individual is %p \n", &orangeAmount.individual);
	printf("Address of orangeAmount.pound is %p \n", &orangeAmount.pound);
	printf("Address of orangeAmount.ounce is %p \n", &orangeAmount.ounce);
		
}

