#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

	int amountofnumstostore;
	
	printf("how many numbers to store: ");
	scanf("%d", &amountofnumstostore);
	
	int *pRandNums;
	
	pRandNums = malloc(amountofnumstostore * sizeof(int));
	
	if(pRandNums != NULL){
	
		int i = 0;
		
		printf("enter a number of quit: ");
		
		while(i < amountofnumstostore && 
			scanf("%d", &pRandNums[i]) == 1){
				
				printf("enter a number of quit: ");
				i++;
				
		}

		
		printf("\n you entered the following numbers: \n");
		
		for(int j = 0; j < i; j++){
		
			printf("%d \n", pRandNums[j]);
			
		}
		
	}
		
	free(pRandNums);
		
	return 0;
	
}

	
		


