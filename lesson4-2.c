#include <stdio.h>
#include <stdlib.h>

int main(){

	int primeNumbers[] = {2,3,5,7};
	
	printf("First index using index notation: %d\n", primeNumbers[0]);
	printf("First index using pointer notation: %d\n", *primeNumbers);
	
	printf("Second index using index notation: %d\n", primeNumbers[1]);
	printf("Second index using pointer notation: %d\n", *(primeNumbers+1));
	
	printf("Third index using index notation: %d\n", primeNumbers[2]);
	printf("Third index using pointer notation: %d\n", *(primeNumbers+2));
	
	printf("Fourth index using index notation: %d\n", primeNumbers[3]);
	printf("Fourth index using pointer notation: %d\n", *(primeNumbers+3));
	
	//Garbage should be printed out as there is no 5th index!
	printf("Fifth index using index notation: %d\n", primeNumbers[4]);
	printf("Fifth index using pointer notation: %d\n", *(primeNumbers+4));
	
	
}


