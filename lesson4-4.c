#include <stdio.h>
#include <stdlib.h>

void generateTwoRandNums(int *rand1, int *rand2){
	*rand1 = rand() % 50 + 1;
	*rand2 = rand() % 50 + 1;
	
	printf("new rand1 in function = %d\n", *rand1);
	printf("new rand2 in function = %d\n", *rand2);
	
}

int main(){

	 int rand1, rand2 = 0;
	 
	 generateTwoRandNums(&rand1, &rand2);
	 
	 printf("rand1 = %d\n", rand1);
	 printf("rand2 = %d\n", rand2);
	
	
}


