#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

	_Bool isANumber;
	
	int number;
	int sumOfNumbers = 0;
	
	printf("Enter a number: ");
	isANumber = (scanf("%d", &number) == 1);
	
	while(isANumber){
	
		sumOfNumbers = sumOfNumbers + number;
		printf("Enter a number: ");
		isANumber = (scanf("%d", &number) == 1);
		
	}
	printf("The sum is %d \n", sumOfNumbers);	
			
	
}
	
		


