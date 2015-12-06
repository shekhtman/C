#include <stdio.h>

int main(){

	int custAge = 38;
	
	char* legalAge = (custAge > 21) ? "true": "false";
	
	printf("Is the customer of legal age? %s\n\n", legalAge);
	
	int numOfProducts = 10;
	
	printf("I bought %s products\n\n", (numOfProducts > 1) ? "many": "one");
	
}