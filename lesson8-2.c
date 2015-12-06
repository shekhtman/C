#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

struct product{

	float price;
	char prodName[30];
	
};

int main(){

	struct product *pProducts;
	
	int i, j;
	int numofproducts;
	
	printf("Enter the number of products :");
	scanf("%d", &numofproducts);
	
	pProducts = (struct product *) malloc(numofproducts * sizeof(struct product));
	
	for (i = 0; i < numofproducts; ++i){
	
		printf("Enter a products name: ");
		scanf("%s", &(pProducts+i)->prodName);
		
		printf("Enter a products price: ");
		scanf("%f", &(pProducts+i)->price);
		
	}
	
	printf("Products Stored \n");
	
	for(j = 0; j < numofproducts; ++j){
	
		printf("%s\t%.2f\n", 
			(pProducts+j)->prodName, 
			(pProducts+j)->price);
			
	}
	
	free(pProducts);
	
	
	return 0;
	
	
	
}

	
		


