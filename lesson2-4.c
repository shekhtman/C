#include <stdio.h>

int main(){

	int numberOfBits = 0;
	
	printf("How many bits? ");
	scanf(" %d", &numberOfBits);
	//printf("\n\n");
	
	int myIncrementor = 1, myMultiplier = 1, finalValue = 1;
	
	while(myIncrementor < numberOfBits){
		myMultiplier *= 2;
		finalValue = finalValue + myMultiplier;
		myIncrementor++;
	}
	
	if((numberOfBits == 0) || (numberOfBits == 1))
		printf("Top Value: %d\n\n", numberOfBits);
	else
		printf("Top Value: %d\n\n", finalValue);
	
}