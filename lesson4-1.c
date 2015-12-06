#include <stdio.h>
#include <stdlib.h>

int main(){

	int rand1 = 12, rand2 = 15;

	printf("rand1 = %p : rand2 = %p\n", &rand1, &rand2);
	//printf("rand1 = %d : rand2 = %d\n", &rand1, &rand2);
	printf("size of int %ld\n", sizeof(rand1));

	int * pRand1 = &rand1;
	int * pRand2 = &rand2;

	printf("Pointer to rand1 = %p : Pointer to rand2 = %p\n", pRand1, pRand2);
	//printf("Pointer to rand1 = %d : Pointer to rand2 = %d\n", pRand1, pRand2);
	
	printf("Deref of Pointer = %d : Deref of Ponter = %d\n", *pRand1, *pRand2);
	
	return 0;

}


